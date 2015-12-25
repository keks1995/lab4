#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stddef.h>
using namespace std;
void print_in_binary1(uint8_t );
struct Student
    {
	char name[16];
	int year;
	double mark;
	int pol;
	int Num_Curs;
};
void show_struct(const Student* stud);
int main ()
{

	Student mas=
	{ "APA",2001,4.5,1,3};



	  	show_struct(&mas);



cin.get();
}
void show_struct(const Student*stud)
{

print_in_binary1(sizeof(stud->name));
cout<<"  Binary name"<<endl;
print_in_binary1(sizeof(stud->year));
cout<<"  Binary year"<<endl;
print_in_binary1(sizeof(stud->mark));
cout<<"  Binary mark"<<endl;
print_in_binary1(sizeof(stud->Num_Curs));
cout<<"  Binary Num_Curs"<<endl;

	cout<<"Adress of element name="<<&stud->name<<endl<<"Size of name in bites: "<<sizeof(stud->name)<<endl<<hex<<"sixteen="<<sizeof(stud->name)<<"  "
	<<"Smechenie="/*<<stud-*(int*)&stud->name<<"  "*/<<offsetof(Student,name)<<endl<<endl;

	cout<<"Adress of element year ="<<&stud->year<<endl<<"Size of year in bites: "<<sizeof(stud->year)<<hex<<"  sixteen="<<sizeof(stud->year)<<endl
	<<"Smechenie="/*<<stud-*(int*)&stud->year<<"  "*/<<offsetof(Student,year)<<endl<<endl;

	cout<<"Adress of element mark="<<&stud->mark<<endl<<"Size of mark in bites: "<<sizeof(stud->mark)<<hex<<"  sixteen="<<sizeof(stud->mark)<<endl
	<<"Smechenie="/*<<sizeof(*stud)-sizeof(stud->mark)<<"  "*/<<offsetof(Student,mark)<<endl<<endl;

	cout<<"Adress of element Num_Curs="<<&stud->Num_Curs<<endl<<"Size of Num_Course in bites: "<<sizeof(stud->Num_Curs)<<hex<<"  sixteen="<<sizeof(stud->Num_Curs)<<endl
	<<"Smechenie="/*<<sizeof(*stud)-sizeof(stud->Num_Curs)<<"  "*/<<offsetof(Student,Num_Curs)<<endl<<endl;
	//cout<<"Adress of struct"<<stud<<'\n'<<endl<<endl;
}
void print_in_binary1(uint8_t byte)
{
    for(int i=7; i>=0; --i)
    {
        if ((byte >> i) & 1)
            cout << "1";
        else
            cout << "0";
    }
}
