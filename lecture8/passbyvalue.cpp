#include <iostream>
using namespace std;

/*int AP (int num){
    int answer = 0;
    answer = 3*num + 7;
    return answer;
}

int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int ans= AP(n);
    cout << "answer is"<<ans<<endl;
}*/

int fnseries(int num)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= num; i++)
    {
        int secondnumber = a + b;
        cout << secondnumber << " ";
        a = b;
        b = secondnumber;
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int ans = fnseries(n);
    cout << ans << endl;
}