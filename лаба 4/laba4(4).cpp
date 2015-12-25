#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
void print_in_hex(const void* data, size_t size);
void print_in_hex1(uint8_t byte);
char convert_in_hex(uint8_t) ;
struct Student
    {
	char name[16];
	int year;
	double mark;
	int pol:1;
	int Num_Curs;
    Student *starosta;
    };
void show_struct(const Student* stud);
int main ()
{

	Student students[3]=
    {
	{ "APA",2001,4.5,1,3},
	{ "ALAL",2222,3.3,0,3},
	{ "STAROSTA",2332,3.1,0,1}
    };

   students[0].starosta = &students[2];
   students[1].starosta = &students[2];

	  //struct student *p;
	  for (int i=0;i<3;i++)
	  {
	   // cout<< sizeof(students[i].name);
	  	print_in_hex(&students[i],sizeof(students[i]));
	  	cout<<endl;
	   }


cin.get();
}
void print_in_hex(const void* data, size_t size)
{
    const uint8_t* data1=reinterpret_cast<const uint8_t*>(data);
    for(int i=0; i<size; ++i)
    {
        print_in_hex1(data1[i]);

    }


}
void print_in_hex1(uint8_t byte)
{
    char x,x1;
    uint8_t byte1=(byte&0b11110000)>>4;
    x=convert_in_hex(byte1);
    uint8_t byte2=byte&0b00001111;
    x1=convert_in_hex(byte2);
    cout << /*"Your num in hex: " <<*/x<<x1 << " ";
}
char convert_in_hex(uint8_t x)
{   switch (x)
    {
    case 0b0000: return '0'; break;
    case 0b0001: return '1'; break;
    case 0b0010: return '2'; break;
    case 0b0011: return '3'; break;
    case 0b0100: return '4'; break;
    case 0b0101: return '5'; break;
    case 0b0110: return '6'; break;
    case 0b0111: return '7'; break;
    case 0b1000: return '8'; break;
    case 0b1001: return '9'; break;
    case 0b1010: return 'A'; break;
    case 0b1011: return 'B'; break;
    case 0b1100: return 'C'; break;
    case 0b1101: return 'D'; break;
    case 0b1110: return 'E'; break;
    case 0b1111: return 'F'; break;
    }
}
