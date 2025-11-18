#include <iostream> 
using namespace std;

    int power ()
    {
        int a,b;
        cout <<"enter number"<<endl;
        cin >>a ;
        cout << "enter power"<<endl;
        cin >> b;
        int ans = 1;
        for (int i=1 ; i <=b ; i++)
        {
            ans = ans * a;
        }
        return ans;
    }
    
    int main (){
        int ans = power ();
        cout << "answer is" << ans << endl ;

         ans = power ();
        cout << "answer is" << ans << endl ;

         ans = power ();
        cout << "answer is" << ans << endl ;

         ans = power ();
        cout << "answer is" << ans << endl ;

         ans = power ();
        cout << "answer is" << ans << endl ;

    }