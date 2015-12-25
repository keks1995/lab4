#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
struct Student
    {
	char name[16];
	int year;
	double mark;
	int pol;
	int Num_Curs;
    Student *starosta;
    };
void show_struct(const Student* stud);
int main ()
{

	Student students[3]=
    {
	{ "APA",2001,4.5,1,3,nullptr},
	{ "ALAL",2222,1,0,3,nullptr},
	{ "STAROSTA",2332,3,0,1,nullptr}
    };

   students[0].starosta = &students[2];
   students[1].starosta = &students[2];

cout<<"Adress of struct:"<<&students<<"    Size of struct:"<<sizeof(students)<<endl;
	  for (int i=0;i<3;i++)
	  {
	  	show_struct(&students[i]);
	   }


cin.get();
}
void show_struct(const Student*stud)
{


cout<<"Adress of elemant:"<<stud<<"   Size of element:"<<sizeof(*stud)<<endl;
	/*cout<<"Name of student: "<<stud->name<<'\n'<<"Adress of element name="<<&stud->name<<endl<<"Size of name in bites: "<<sizeof(stud->name)<<endl;
	cout<<"Year of entry="<<stud->year<<'\n'<<"Adress of element year ="<<&stud->year<<endl<<"Size of year in bites: "<<sizeof(stud->year)<<endl;
	cout<<"Mark="<<stud->mark<<'\n'<<"Adress of element mark="<<&stud->mark<<endl<<"Size of mark in bites: "<<sizeof(stud->mark)<<endl;
	cout<<"Pol: "<<stud->pol<<'\n'<<"Adress of element pol="<<&stud->pol<<endl<<"Size of pol in bites: "<<sizeof(stud->pol)<<endl;
	cout<<"Number of course: "<<stud->Num_Curs<<'\n'<<"Adress of element Num_Curs="<<&stud->Num_Curs<<endl<<"Size of Num_Course in bites: "<<sizeof(stud->Num_Curs)<<endl;
	cout<<"Size of struct in bites"<<sizeof(*stud)<<'\n'<<"Adress of struct"<<stud<<'\n'<<endl<<endl;
	cout<<"Adress of element starosta="<<&stud->starosta<<endl;*/
}
