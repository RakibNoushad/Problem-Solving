#include<bits/stdc++.h>
using namespace std;

list <string> li;
int m,j,f;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif

        int t, n, i, j,f;
        int a[50];
        set<int> res;
        
        cin >> t;
        while(t--)
        {
        	cin >> n;
        	for(i=0;i<n;i++)
        	{
        		cin >> a[i];
        	}
        	j=1;
        	for(int k =0;k<n;k++)
        	{
        		for(i=0;i<n-1;i++)
        		{
        			if(i+j<n)
        			{
        				res.insert(a[i+j]-a[i]);
        			}
        			else break;
        		}
        		j++;
        	}
        	cout << res.size() << endl;
        	res.clear();
        }
   
return 0;
}