#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {
    int n= s.length();
    int i, j = 0, k = 0;
    
    string pre, post;

    while(isdigit(s[j]) && s[j] != '0')
    {
    	pre+= s[j];
    	j++;
    }

    reverse(pre.begin(),pre.end());
    
    for(i=n-1;i>=j;i--)
    {
        if(s[i] == '*')
        {
            post += s[i-2];
            post += s[i-1];
            i-=2;
        }
        else if(s[i] == '0')
        {
            post += pre[k];
            k++;
        }
        else
        {
            post += s[i];
        }
    }
    
    reverse(post.begin(),post.end());
    
    return post;
    
    
    
    

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        const clock_t start = clock();
    #endif

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    cout << result << "\n";

    return 0;
}
