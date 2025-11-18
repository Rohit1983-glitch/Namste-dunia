#include <iostream>
using namespace std ;
int main(){
    int a=4;
    int b=6;

// bit wise operator are closed in () eg:- (a&b)
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<<(a|b)<<endl;
    cout<<"~a"<<~a<<endl;
    cout<<"a^b"<<(a^b)<<endl;
     
//right shift operator >> ye values ko 2 se divide kr deta hai
//left shift operator << ye values ko 2 se multiply kr deta hai
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

// i=i+1; can be written as 
//i++;(post increament) ++i;(pre increament) or i+=1;
//i=i-1; can be written as 
//i--;(post decreament) --i;(pre decreament) or i-=1;

    int i=9;
    cout<<(++i)<<endl;
    // 10
    cout<<(i--)<<endl;
    // 10 to 9
    cout<<(i++)<<endl;
    // 9 to 10
    cout<<(--i)<<endl;
    // 9

}