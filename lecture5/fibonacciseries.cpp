#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter value"<<endl;
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        int secondnumber= a+b;
        cout<<secondnumber <<" ";
        a=b;
        b=secondnumber;
    }
}
