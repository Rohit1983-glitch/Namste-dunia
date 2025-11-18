#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value"<<endl;
    cin>>n;

    int row=1;
   
   /* while (row<=n)
    {
        int col = 1;
       char ch = 'A' + row - 1;
        
        while (col<=n)
        { 
            cout<<ch;
            col=col+1;
        }
        row=row+1;
        cout<<endl; */
   /*while (row<=n) 
    {
        int col=1;
    
        while(col<=n)
        {
            char ch = 'A' + col-1;
           cout<<ch;
           col=col+1;
        }
        cout<<endl;
        row=row+1;
    }*/
   /* while(row<=n)
   {
    int col=1;
    while(col<=n)
    { char ch= 'A' +row+col-2;
    cout<<ch;
    col=col+1;  }
    row=row+1;
    cout<<endl;
   }*/
   /*while (row<=n)
   {
    int col=1;
    char ch = 'A'+row -1;
    while (col<=row)
    {
       
       cout<<ch;
       col=col+1;
    }
    row=row+1;
    cout<<endl;
   }*/
     
    
   /*while( row<=n)
   char value='A';
   {
     int col= 1;
     
     while (col<=row)
     {
       cout << value;
       col=col+1;
       value = value+1;
     }
      row=row+1;
      cout<<endl;
   }*/
   while (row<=n)
   
   { int col =1;
    
    while (col<=row )
    
    { char ch = 'A' +n-row +col-1;
         /*or char start='A'+n-row
          cout<<start;
          start=start+1*/
      cout<<ch;
      col=col+1;
    }
    row=row+1;
    cout<<endl;
     
   }
}

