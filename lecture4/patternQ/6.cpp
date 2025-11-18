#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value" << endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
    /*while (row<=n)
    {
        
        int space=n-row+1;
        while (space)
        {
            cout<<"*";
            space=space-1;

        }
        row=row+1;
        cout<<endl;
    }
    // smz nhi aya pr ho gya bina error first try me  :)

     while (row<=n)
     {
        int space=row-1;
        while (space)
        {
            cout<< " ";
            space = space -1;
        } 
        int col=1;
        while (col<=n-row+1)
        {
            cout<<"*";
            col=col+1;
        }
        row =row +1;
        cout<<endl;
    }*/
}
     

