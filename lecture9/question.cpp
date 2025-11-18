#include <iostream>
using namespace std;

int array(int arr[], int size){
    cout<<endl;
    int sum=0;
    for (int i = 0; i<size; i++){
      sum= sum + arr[i];
          }
    return sum;
}

int main(){
    int size;
    cout << "enter size"<<endl;
    cin>>size;

    int n[100];
    cout << "enter number"<<endl;
    for (int i=0; i<size; i++){
        cin>>n[i] ;
    }
    
    cout<< "answer is"<< array(n,size)<<endl;
}