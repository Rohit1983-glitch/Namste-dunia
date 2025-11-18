#include <iostream>
using namespace std;
int main()
{
    // Q1

    /*int a,b=1;
    a=10;
    if(++a)
    cout<<b;
    else
    cout<<(++b);*/

    // Q2

    /*int a= 1;
    int b=2;
    if (a-->0 && ++b>2)
    {
        cout<<"stage 1 - inside if";
    }
    else{cout<<"stage 2 - inside else"; }
    cout <<a<<" "<<b<<endl;*/

    // Q3

    /*int a= 1;
    int b=2;
    if (a-->0 || ++b>2)
    {
        cout<<"stage 1 - inside if";
    }
    else{cout<<"stage 2 - inside else"; }
    cout <<a<<" "<<b<<endl;*/

    // Q4

    /*int a=1;
    int b=a++;
    // b=1 then increased to 2
    int c=++a;
    // c=3 bcz a=2
    cout<<b;
    cout<<c;*/

    // Q5

    /*for(int i=0;i<=5;i++)
    {cout<<i<<" ";
    i++;}*/

    // Q6

    /*for (int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        i++;
    }*/

    // Q7 even to odd number

    /*for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }*/

    // Q8

    /*for(int i=0;i<5;i++)
    {
        for(int j=i;j<=5;j++)
        {cout<<i<<" "<<j<<" "<<endl;}
    }*/

    // Q9

    /*for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << " " << endl;
        }
    }*/

}