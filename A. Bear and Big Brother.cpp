//Accepted

#include <iostream>
using namespace std;

int main()
{
    int l, b,i;
    //while(true)
    //{
        cin>>l>>b;
        i=0;
        while(true)
        {
            l = l *3, b = b*2;
            i++;
            if(l>b)
                break;
        }
        cout<<i<<endl;
    //}
    return 0;
}
