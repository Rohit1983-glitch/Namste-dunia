#include <iostream>
using namespace std;
int main()
{
    int INT_MIN;
    cout << "enter value " << endl;
    cin >> INT_MIN;

    while (INT_MIN)
    {
        switch (INT_MIN)
        {
        case 1:
            cout << "bla" << endl;
            break;
        case 2:
            cout << "int" << endl;
            break;
        default:
            cout << "default" << endl;
            break;
        }
        exit(1);
    }
}