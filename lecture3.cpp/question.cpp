#include <iostream>
using namespace std;
int main (){
    char ch;
    cout<<"enter the value"<<endl;
    cin>>ch;

    if (ch>='a' && ch<='z')
    {cout<<"value belongs to small alphabets"<<ch<<endl;}

    else if (ch>= 'A' && ch<='Z')
    {cout<<"value belongs to capital alphabets"<<ch<<endl;}

    else if(ch>='0' && ch<='9')
    {cout<<"numerical value"<<ch<<endl;}
}
// what errors i did 
// in 8 line i wrote ch>=a insted of ch>='a'
// in 8 line i wrote and instead of &&
// in 9 line i forgot to write <<ch
