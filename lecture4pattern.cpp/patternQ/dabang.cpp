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
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col = col + 1;
        }
        
        int space = row - 1;
        while (space)
        {
            cout << "*";
            space = space - 1;
        }

        int start2 =row - 1;
        while (start2)
        {
            cout <<"*";
            start2 = start2 - 1;
        }
        
        int start = n-row + 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        
        row = row + 1;
        cout << endl;
    }
}

