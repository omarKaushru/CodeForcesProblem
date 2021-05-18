///Accepted
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
using namespace std;

int main()
{
    int m = 0,n,d;
    string x,y;
    cin>>n;
    cin>>x>>y;
    //cout<<x<<" "<<y<<endl;
    for(int i=0; i<n; i++)
    {
        d = abs(x[i]-y[i]);
        //cout<<d<<" ";
        if(d>5)
        {
            if(x[i]<y[i])
            {
                d = abs('0'-x[i])+1;
                m+=d;
                d = abs('9'-y[i]);
                m+=d;
            }
            else
            {
                d = abs('9'-x[i]);
                m+=d;
                d = abs('0'-y[i])+1;
                m+=d;
            }
        }
        else
        {
            m+=d;
        }
    }
    cout<<m<<endl;
}
