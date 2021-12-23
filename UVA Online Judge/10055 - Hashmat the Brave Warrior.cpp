#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif

        long long n, m;
		while(cin >> n >> m)
		{
			cout << abs(n-m) << endl;
		}

return 0;
}