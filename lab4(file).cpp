#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
char *left(const char *temp,int N);
const int size=50;
int ch=0;
int main()
{
	char filename[size];
	ifstream inFile;//создание объекта ifstream
	char str[5]={'.','t','x','t'};
	char str1[5]={'.','T','X','T'};
	cout<<"Enter name of file or way:";
	cin.getline(filename,size);//Ввод пути к файлу
	char  *ring = strchr(filename, ':');
//	char *ps=strchr(filename, '\');
	if (!isalpha(filename[0]))
	  cout<<"Erorr:888"<<endl;
	  else if (ring)
	{if ((ring-filename+1)!=2)
	 cout<<"Invalid path";}

	for (int i=3; i<strlen(filename); i++)
	{
		if(filename[i]=='?' || filename[i]=='|' || filename[i]=='*'|| filename[i]=='>'|| filename[i]=='<'|| filename[i]=='"' )
		{
	  	cout<<"Error:590\n";
		  break;
        }
   }

  for (int i=strlen(filename)-4;i<strlen(filename);i++)
  {
      if (filename[i]!=str[i-(strlen(filename)-4)] || filename[i]!=str1[i-(strlen(filename)-4)])
      {
        cout<<"Unknown type of file\n";
        break;
	  }
  }

		inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Could not find file"<<filename<<endl;
		cout<<"Program is exit"<<endl;
		exit(EXIT_FAILURE);

	}
	    inFile.seekg (0, inFile.end);
        int length = inFile.tellg();
        inFile.seekg (0, inFile.beg);
        	char *ps;
    ps=new char[length+1];
    inFile.read (ps,length);
    cout<<"Contain of file:  "<<ps<<'\n';
	  char value;
	  inFile>>value;
    	int count=0;
    	char vvod[50];
    	cout<<"Write a sentence from file: ";
    	cin.getline(vvod,50);
    	  for (int i=0;i<length;i++)
    	     if (ps[i]==vvod[0])  //Запрашивает предложение,проводит поиск в файле и выводит это предложение в случае True
    	       {
    	       	int j=0;
    	       	int z=0;
    	            while(vvod[j]!='.')
    	            {

    	       	      if (ps[i]!=vvod[j])
    	       	       {
				        j=0;
    	       	        z=1;
    	       	        break;
						}
    	       	        else
    	       	        {
    	       	        j++;
    	       	        i++;
    	       	        z++;
    	                }

                    }
                      if (z==j)
                       {
			             cout<<"HERE IS YOUR: ";
                         for (int k=i-z;k<i;k++)
                          {
                          	cout<<ps[k];
			              }
						}

		       }
    int chislo=0;
   for (int i=0;i<length;i++)
   if (ps[i]=='.'|| ps[i]=='!'|| ps[i]=='?')
   chislo++;
   cout<<"\nchislo tochek="<<chislo<<endl;
  char* massiv;
  massiv=new char[ch];
char** YNY=new char *[chislo];
cout<<"\nSTROKI!!!\n";
for (int i=0;i<chislo;i++)
{
massiv=left(ps,length);
cout<<massiv<<endl;
YNY[i]=massiv;
cout<<"YNY[i]="<<YNY[i];
}
//delete [] massiv;
   //cout<<massiv[1];
   /*for (int i=0;i<length;i++)
   {
       if (ps[i]=='.')
        {

          inFile.seekg (0, inFile.cur);
          int length1 = inFile.tellg();
          inFile.seekg (inFile.cur-length1, inFile.cur);
          inFile.read (massiv[count],length1);

        }
    	cout<<massiv[]<<'\n';
    //	count++;
    }*/







	/* while(inFile.good())
	    {
	    	while (!inFile.eof())

			if(value=='.')
	    	{
	    	inFile.seekg (0, inFile.cur);
            int length1 = inFile.tellg();
            char *ps1=new char[length1+1];
            inFile.seekg (inFile.cur-length1, inFile.cur);
            inFile.read (ps1,length1);
            for (int i=0;i<length1;i++)
            {
			if (ps1[i]!=vvod[i])
			break;


			}


            cout<<ps1<<" and "<<vvod;

            	delete [] ps1;
            }
	    	inFile>>value;


    	}*/
	if (inFile.eof())
	cout<<"\nEnd of file Reached\n";
	cout<<" Size of file="<<length<<'\n';
	inFile.close();


delete [] ps;
cin.get();
}
char *left(const char *temp,int N)
{
  char *p=new char[N+1];
 for (int i=ch;i<N&&temp[i];i++)
if (temp[i]!='.')
    {
         p[i]=temp[i];
     ch++;
   }
else
{
   ch++;
  return p;
   }

}
