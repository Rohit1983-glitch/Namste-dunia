#include <iostream>
using namespace std;
void array() {}

int main()
{
    int first[15];
    cout << "value at index 3 is = " << first[3] << endl;
    //cout << "value of index 21 is = " << first [100]<< endl;

    int second[5] = {3, 5, 8, 9, 6};
    cout << "value of second index at 4 is = " << second[4] << endl;

    cout << "its ok" << endl;
    

    int third[9] = {8,2}; //here only two values are initialise and when we run code the rest becomes 0
    int n = 9 ;
    for (int i = 0 ; i<n ; i++){
        cout<<" "<< third[i];
    }
    cout << endl;
    
    //intialising all vlaue to zero
    int four [15] = {0};
    int y = 15;
    for (int i = 0 ; i<y ; i++){
        cout <<" "<< four [i];
    }   
    cout <<endl;

    //intialising all value to single number
    int five [12] ;
    int z = 12;
    for (int i = 0 ; i<z ; i++){
        five [i] = 1;
        cout <<" "<< five [i];
    }   
}

//agr array me value initialise nhi krte hai to phir vo koi bhi garbage value utha leta hai apne aap 
//for example int first[15]
