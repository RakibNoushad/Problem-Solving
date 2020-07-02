#include<bits/stdc++.h>
using namespace std;
 
char a[200010],b[200010],c[200010];
 
int main()
{
    int t,i,n;
    int a[110];
    cin >> t;
    while(t--)
    {
        int d,s=0;
        cin >> n >> d;
        for(i=0;i<n;i++)
        {
 
            
            cin >> a[i];
            
 
        }
        s+=a[0];
        
        int top=2, temp=2;
        while(d--)
        {
            if(n==1) break;
            else if(a[1]>0)
            {
                a[1]--;
                s++;
            }
            else
            {
                if(temp>=n) continue;
                else
                {
                    while(a[temp]==0) {
                        temp++;
                        if(temp==n) break;
                        top=temp;
 
                    }
                    if(a[temp]>0 && temp <n)
                    {
                    a[temp]--;
                    temp--;
                    a[temp]++;
                    }
                    if(temp==1) temp=top;
                    while(a[temp]==0) {
                        temp++;
                        if(temp==n) break;
                        top=temp;
                    }
                }
 
            }
        }
        cout << s << endl;
        
 
        
 
 
    }
    
 
 
    return 0;
}