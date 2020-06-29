#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
 
int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t,r,u,max=0,k=0,s=0;
    double ek, dui, tin,kom,chaar,total, one, two, three;
    char a[10010];
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        s=0;
        while(n)
        {
            if(n>=10)
            {
                j=n- (n%10);
                s+= j;
                n= (n%10) + (j/10);
 
            }
            else {s+=n;
            n=0;
            }
        }
        cout << s << endl;
 
 
    }
 
 
    return 0;
}