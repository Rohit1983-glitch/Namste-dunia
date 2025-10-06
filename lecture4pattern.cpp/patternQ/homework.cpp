#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value"<<endl;
    cin>>n;

    int row=1;
    //q1
   
   /*while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        int col=1;
        while (col<=n-row+1)
        {
            cout<<row;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }*/
    

   /* while (row<=n)
    {
        int space=n-row ;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }*/
    

    /*while (row<=n)
    {
        int space=row-1;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        int col=1;
        while (col<=n-row+1)
        {
            cout<<col;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }*/
     /*int count=1;
     while (row<=n)

    {
        int space=n-row ;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        int col=1;
        while (col<=row)
        { 
            cout<<count<<"" ;
            col=col+1;
            count=count+1;
        }
        row=row+1;
        cout<<endl;
    }*/

    while(row<=n)
    {
        int space= n-row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while (col<=row)
         {
            cout<<col;
            col=col+1;
         }
         

         int start=row-1;
         while (start)
         {
            cout<<start;
            start=start-1;
         }
         row=row+1;
         cout<<endl;

    }

}