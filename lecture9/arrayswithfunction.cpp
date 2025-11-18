#include <iostream>
using namespace std;
void array(int arr[], int size)
{
    cout << endl;
    cout << "printing array" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    cout << "printing done" << endl;
    cout << endl;
}

int main()
{
    int first[5] = {1, 2, 3, 4, 5};
    // int n = 5;
    array(first, 5);

    int second[10] = {1, 2};
    array(second, 10);
}