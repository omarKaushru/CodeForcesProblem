///Accepted

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long x, sum;
    char ch;
    //while(true)
    //{
        int d = 0;
        sum=0;
        cin>>n>>x;
        sum+=x;
        while(n--)
        {
            cin>>ch>>x;
            if(ch =='+')
            {
                sum+=x;
            }
            if(ch =='-')
            {
                if(x<=sum)
                {
                    sum-=x;
                }
                else
                {
                    d++;
                }
            }
        }
        cout<<sum<<" "<<d<<endl;
    //}
}
