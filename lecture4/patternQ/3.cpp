#include <iostream>
using namespace std;
int main(){
   
    int n;
    cout<< "enter value"<<endl;
    cin>>n;

    /*int i=1;
    while (i<=n)
    {  
        int j=1;
        while(j<=i)
        {cout<<j;
        j=j+1;}
        cout<<endl;
        i=i+1;
    }

    int i=1;
    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {cout<<i;
        j=j+1;}

        cout<<endl;
        i=i+1;
    }

    int i=1;
    int count=1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        {cout<<count<< "  ";
        count=count+1;
         j=j+1;}
     i=i+1;
     cout<<endl;

    }*/

    int i=1;
    
    
    while (i<=n)
    {int j=1; 
    int value=i;
        while(j<=i)
        {cout<<value;
        value=value+1;
        j=j+1; }
        i=i+1;
        cout<<endl;
    
    }

}