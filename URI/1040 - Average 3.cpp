#include<bits/stdc++.h>
#include<string>
using namespace std;
char b[10010];


int main()
{
    int n,m,i,j,q,y,aa=0,bb,f=0,min=10000010,t=1,r,u,max=0,k=0,s=0;
    double ek, dui, tin,kom,chaar,total;
    char a[10010];
    cin >> ek >> dui >> tin >> chaar;
    total = (ek*2) + (dui*3) + (tin*4) + chaar;
    total = total/10;
    cout << "Media: " << fixed << setprecision(1) << total << endl;

    if(total>=7) cout << "Aluno aprovado." << endl;
    else if(total<5.0) cout << "Aluno reprovado.\n";
    else
    {
        cout << "Aluno em exame.\n";
        cin >> kom;
        cout << "Nota do exame: " << fixed << setprecision(1) << kom << endl;
        total= (total+kom)/2;
        if(total >=5.0) cout << "Aluno aprovado.\n";
        else cout << "Aluno reprovado.\n";
        cout << "Media final: " << fixed << setprecision(1) << total << endl;
    }



    return 0;
}
