#include<bits/stdc++.h>
using namespace std;
 
int a[100010],b[100010],c[200010];
 
int main()
{
    int n, m, t, i, j,k, s=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
 
        }
        sort(a, a+n);
        i=0,j=n-1;
        k=n-1;
        while(i<=j)
        {
            if(i==j) {
                b[k]=a[i];
                k--;
                i++;
                j--;
            }
            else 
            {
                b[k]=a[j];
                b[k-1]=a[i];
                k-=2;
                i++;
                j--;
            }
 
        }
        for(i=0;i<n;i++)
            cout << b[i] << " ";
        cout << endl;
    }
 
 
    return 0;
}