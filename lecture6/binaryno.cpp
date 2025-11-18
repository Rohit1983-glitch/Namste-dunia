#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter value"<<endl;
    cin>>n;
    
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit= n&1;
        //int digit = n%10
        ans=(bit * pow(10,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<"answer is"<<ans;
}
