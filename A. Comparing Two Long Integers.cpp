//Accepted
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main ()
{
    char number1[1000006], number2[1000006];
    scanf("%s %s", &number1, &number2);

    int startPosOfnumber1=0, startPosOfnumber2=0;
    int temp=strlen(number1);

    for(int i=0; i<temp; i++) {
        if(number1[i]=='0') startPosOfnumber1++;
        else break;
    }

    int len1 = temp-startPosOfnumber1;
    temp= strlen(number2);
    for(int i=0; i<temp; i++) {
        if(number2[i]=='0') startPosOfnumber2++;
        else break;
    }

    int len2 = temp-startPosOfnumber2;

    if(len1>len2) putchar('>');
    else if(len1<len2) putchar('<');
    else if(len1==len2) {

        bool flag= true;
        int t1=strlen(number1);
        int t2=strlen(number2);
        for(int i=startPosOfnumber1, j = startPosOfnumber2 ; i<t1  ; i++,j++){

            if(number1[i]==number2[j]) continue;
            else if(number1[i] > number2[j]) {
                putchar('>');
                flag=false;
                break;
            }
            else if(number1[i] < number2[j]) {
                putchar('<');
                flag=false;
                break;
            }
        }
        if(flag==true)
            putchar('=');
    }
    return 0;
}
