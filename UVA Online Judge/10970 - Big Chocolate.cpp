#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif

        int n, m;
		while(cin >> n >> m)
		{
			cout << (n*m)-1 << endl;
		}

return 0;
}