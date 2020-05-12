#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];




int main()
{
    int n,i=0,j,u=0,l,f=0,k,ra=0,c=0,r=0,s=0,sum=0,m;
    char a[10010];
    double x,y,z;

    cin >> n;
    cin.ignore();
    //sum=0;
    while(n--)
    {
        cin.getline(a, 10010);
        m=strlen(a);
        m--;
        //cout << m << "eita m\n";
        f=atoi(a);
        sum+= f;

        if(a[m]=='R') r+= atoi(a);
        else if(a[m]=='C') c+= f;
        else if(a[m]=='S') s+=f;
    }
    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;

    //x= ;
    //x*=100;

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << double(c)/double(sum)*100 << " %\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << double(r)/double(sum)*100 << " %\n";
    cout << "Percentual de sapos: " << fixed << setprecision(2) << double(s)/double(sum)*100 << " %\n";

    return 0;
}
