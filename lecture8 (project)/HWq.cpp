#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter the amount" << endl;
    cin >> amount;

    int num = 1;
    int note = 0;

    switch (num)
    {
    case 1:
    {
        note = amount / 100;
        amount = amount - (note * 100);
        cout << "$100 note required" << " " << note << endl;
    }
    case 2:
    {
        note = amount / 50;
        amount = amount - (note * 50);
        cout << "$50 notes requred" << " " << note << endl;
    }
    case 3:
    {
        note = amount / 20;
        amount = amount - (note * 20);
        cout << "$20 notes required" << " " << note << endl;
    }
    case 4:
    {
        note = amount / 10;
        amount = amount - (note * 10);
        cout << "$10 notes required" << " " << note << endl;
    }
    case 5:
    {
        note = amount / 1;
        amount = amount - (note * 1);
        cout << "$1 noted required" << " " << note << endl;
    }
    case 6:
        cout << " amount left = " << amount << endl;
    }
}