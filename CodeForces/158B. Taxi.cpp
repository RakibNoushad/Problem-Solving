#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];
 
int main()
{
    int n,m,i,j,q,y,aa,bb,f=0,k,min=10000010,t,r,s=0,u,max=0,the=0,two=0,one=0;
    double div;
    int a[10010];
    cin >> t;
    while(t--)
    {
 
        cin >> n;
        if(n==4)
            f++;
        else if(n==3)
            the++;
        else if(n==2)
            two++;
        else if(n==1)
            one++;
    }
 
    if(two%2==0)
    {
        f+=two/2;
    }
    else
    {
        //f++;
        f+=two/2;
        the++;
        one--;
    }
    if(the>0)
    {
        f+=the;
        one-=the;
    }
    if(one>0)
    {
        if(one%4>0)
            f++;
        f+=one/4;
    }
    cout << f << endl;
 
 
 
 
 
    return 0;
}