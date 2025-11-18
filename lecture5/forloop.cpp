#include <iostream>
using namespace std ;
int main(){

   int n;
   cout<<"enter vlaue"<<endl;
   cin>>n;
    
   /*for(int i=1;i<=n;i++)
    {
    cout<<i<<",";
    }*/

   //other way to write for loop

   /*int i=1;
   for (; ;)
   {
    if(i<=n)
    {cout<<i<<",";}
     
    //break tag breaks the code and end the loop
    else {break;}
    ++i;
   }*/
    
   /*int sum=0;
   for(int i=1;i<=n;i++)
   {sum=sum+i;}
   cout <<sum;*/

   //prime number
   bool isprime=1;
   for(int i=2;i<n;i++)
   {
      if (n%i==0)
      {isprime=0;}
      break;
   }
   if (isprime==0)
   {cout<<"not a prime number"<<endl;}
   else{cout<<"is a prime number"<<endl;}
}