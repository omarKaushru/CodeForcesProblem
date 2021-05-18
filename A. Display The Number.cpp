///Accepted
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2==1)
        {
            cout<<"7";
            n-=3;
        }
        while(n>1)
        {
            cout<<"1";
            n-=2;
        }
        cout<<endl;
    }
    return 0;
}
