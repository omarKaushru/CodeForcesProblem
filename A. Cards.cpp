//Accepted
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    char ch;
    //while(true)
    //{
        cin>>t;
        int one=0, zero=0;
        while(t>0)
        {
            cin>>ch;
            if(ch=='z')
                zero++;
            else if(ch=='n')
                one++;
            t--;
        }
        if(one)
        {
            for(int i =1; i<=one; i++)
            {
                cout<<"1"<<" ";
            }
        }
        if(zero)
        {
            for(int i =1; i<=zero; i++)
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    //}
    return 0;
}
