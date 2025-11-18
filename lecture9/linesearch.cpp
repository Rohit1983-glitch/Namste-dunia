#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[8] = {1, 2, - 5, -110, 6, 8, 23, -99};
    cout << "enter the number to find" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 8, key);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
}
