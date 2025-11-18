#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    switch (num)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    default:
        cout << "print nothing" << endl;
    }
    cout << endl;
}
// break tag remove kr diya to teeno case print ho jayenge
// default case compulsory nhi hai iske bina bhi chla jayega
// continue tag ka use switch me valid nhi hota