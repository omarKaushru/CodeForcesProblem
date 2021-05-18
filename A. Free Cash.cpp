///Accepted
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int h[100001], m[100001], n,i,c[100001],j,k;
    cin>>n;
    //cout<<n<<endl;
    /*for(i=0; i<n; i++);
    {
        cin>>h[i];
        cin>>m[i];
        cout<<"hi "<<i;
        //scanf("%d %d", &h[i], &m[i]);
    }*/
    i=0;
    int nt = n;
    while(nt--)
    {
        cin>>h[i];
        cin>>m[i];
        i++;
    }
    //cout<<h[0]<<" "<<m[0];
    k=0;
    int max = -999;
    for(i=0; i<n; i++)
    {
        int t=1;
        if(m[i]==70) ////70 means it all ready counted
            continue;
        for(j=i+1; j<n; j++)
        {
            if((h[i]==h[j] && m[i]==m[j]))
            {
                t++;
                m[j]=70;
            }
        }
        //c[k]=t;
        //k++;
        if(t>max)
            max=t;
    }
    //cout<<k<<endl;
    //sort(c,c+k);
    /*for(i=0; i<k; i++)
    {
        cout<<c[i]<<" ";
    }*/
    cout<<max<<endl;

}
