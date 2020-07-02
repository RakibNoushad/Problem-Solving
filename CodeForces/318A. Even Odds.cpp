#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];
 
 
 
char b[200010], a[200010],x[200010];
int main()
{
    long long int n,i=0,j=2,s=0,m,t, flag=0;
    //char a[110], b[110];
    double y,z;
    int check =1;
 
 
        cin >> n >> m;
        i=(n/2)+(n%2);
        j= i/2;
 
        if(m<=i)
        {
            if(m<=(i-j))
            {
                s=-1;
                for(t=1; t<=m; t++)
                {
                    s+=2;
                }
                cout << s << endl;
            }
            else
            {
                if(n%2)
                {
                    s=n+2;
                    for(t=i; t>=m; t--)
                    {
                        s-=2;
                    }
                    cout << s << endl;
                }
                else
                {
                    s=n+1;
                    for(t=i; t>=m; t--)
                    {
                        s-=2;
                    }
                    cout << s << endl;
                }
            }
        }
        else
        {
            if(m>=(i+j))
            {
                if(n%2)
                {
                    s=n+1;
                    for(t=n; t>=m; t--)
                    {
                        s-=2;
                    }
                    cout << s << endl;
                }
                else
                {
                    s=n+2;
                    for(t=n; t>=m; t--)
                    {
                        s-=2;
                    }
                    cout << s << endl;
                }
            }
            else
            {
                    s=0;
                    for(t=i+1; t<=m; t++)
                    {
                        s+=2;
                    }
                    cout << s << endl;
            }
 
        }
 
    return 0;
}