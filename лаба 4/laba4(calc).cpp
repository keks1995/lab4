
#include "sdt.h"
using namespace std;
void print_in_binary1(uint16_t );
int main()
{
   int x,y;

while(cin>>x>>y)
{
 //cout<<hex<<x;
// cout<<hex<<y;


 print_in_binary1(x);
 cout<<endl;
 print_in_binary1(y);
}

}
void print_in_binary1(uint16_t byte)
{
    char x;
    for(int i=15; i>-1; --i)
    {
        uint16_t byte1=byte&((0b10000000)>>(15-i))>>i;
        switch (byte1)
        {
            case 1: x='1'; break;
            case 0: x='0'; break;
        }
        cout <<x;
    }
}
