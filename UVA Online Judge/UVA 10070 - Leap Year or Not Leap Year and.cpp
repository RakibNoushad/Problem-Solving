#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];




int main()
{
    int n,i=0,j,u=0,l,f=0,k,ra=0;
    char a[100010];

    f=0;
    while(cin >> a)
    {
        if(ra==0)
        {
        ra=1;
        }
        else cout << endl;

        n=strlen(a);
        int ans=0,four, hun, fourh;
        //is devided by 4
        for(int i=0; i<n; i++)
        {
            k = a[i]-48;
            ans= ( ((ans*10)+ k ) % 4);
        }
        four=ans;
        ans=0;
        //is devided by 100
        for(int i=0; i<n; i++)
        {
            k = a[i]-48;
            ans= ( ((ans*10)+ k ) % 100);
        }
        hun =ans;
        ans=0;
        //is devided by 400
        for(int i=0; i<n; i++)
        {
            k = a[i]-48;
            ans= ( ((ans*10)+ k ) % 400);
        }
        fourh=ans;
        ans=0;
        //leap year
        if((four==0 && hun!=0) || (hun==0 && fourh==0))
        {
            cout << "This is leap year." << endl;
            //is devided by 15
            for(int i=0; i<n; i++)
            {
                k = a[i]-48;
                ans= (((ans*10)+ k) % 15);
            }
            int hul =ans;
            ans=0;
            if(hul==0)
            {
                cout << "This is huluculu festival year.\n";
            }
            //is devided by 55
            for(int i=0; i<n; i++)
            {
                k = a[i]-48;
                ans= ( ((ans*10)+ k ) % 55);
            }
            int bul=ans;
            ans=0;
            if(bul==0)
            {
                cout << "This is bulukulu festival year.\n";
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                k = a[i]-48;
                ans= ( ((ans*10)+ k ) % 15);
            }
            int hul= ans;
            ans=0;

            if(hul==0)
            {
                cout << "This is huluculu festival year.\n";
            }
            else
                cout << "This is an ordinary year.\n";
        }



    }


    return 0;
}
