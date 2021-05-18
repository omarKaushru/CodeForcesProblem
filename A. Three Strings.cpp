///Accepted
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void solveThreeStrings()
{
    char a[105],b[105],c[105];
    scanf("%s %s %s",&a, &b, &c);
    int len=strlen(a);
    bool flag=1;
    for(int i=0;i<len&&flag;i++)
    {
        if(a[i]==c[i] || b[i]==c[i])
            continue;
        flag=0;
    }
    printf("%s\n",flag?"YES":"NO");
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solveThreeStrings();
    }
    return 0;
}
