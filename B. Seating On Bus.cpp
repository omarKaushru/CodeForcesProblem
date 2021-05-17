#include <iostream>
using namespace std;

using namespace std;

int main()
{
    int n,m,j;

    cin>>n>>m;
    for(j=1; j<=2*n; j++)
    {
         if(2*n+j<=m)
         {
           cout<<(2*n+j)<<" ";
         }
         if(j<=m)
         {
            cout<<j<<" ";
         }
    }
}
