#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[1000];
    int n,m,k,l,r,q,s,i,j,a, b,c,d,count=0,min=100000;
 
 
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        gets(str);
        //printf("%s", str);
        if(str[1]=='+')
            count++;
        else if(str[1]=='-')
            count--;
    }
    printf("%d\n", count);
 
    return 0;
}
