#include <iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

   /* if (n>0)
    {cout<<"n is positive";}
    if (n<0)
    {cout<<"n is negative";}
    if(n==0) 
    { cout<<"n is zero";}
     
    or we can write this with different format given below


    */

    if (n>0)
    {cout<<"n is positive" <<endl;}
    else if (n<0)
    {cout<<"n is negative";}
    else {cout<<"n is zero";}


}