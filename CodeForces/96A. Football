#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[1000];
    int n,m,k,l,r,q,s,i,j,a,len,b,c,d,count=0,max=1;
 
        gets(str);
       len=strlen(str);
       for(i=0;i<len;i++)
       {
           if(str[i]=='0' && str[i+1]=='0')
            {
                count++;
                if(count>=max)
                    max=count;
            }
            else if(str[i]=='1' && str[i+1]=='1')
            {
                count++;
                if(count>=max)
                    max=count;
            }
            else
                count=0;
       }
       if(max>=6)
        printf("YES\n");
       else
         printf("NO\n");
 
    return 0;
}
