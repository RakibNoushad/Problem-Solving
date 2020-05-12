#include<bits/stdc++.h>
#include<string>
using namespace std;
//char b[10010];


int main()
{
    int n,m,i,j;
    char a[10010],b[10010], c[10010];
    double salary, tax=0, second;
    cin >> salary;

    if(salary <= 2000.00) cout << "Isento" << endl;
    if(salary >4500.00)
    {
        second=salary-4500.00;
        salary=4500.00;
        tax+=second*28/100;
    }
    if(salary<=4500 && salary >=3000.01)
    {
        second= salary-3000.0;
        salary=3000.0;
        tax+= second*18/100;
    }
    if(salary >=2000.01)
    {
        second= salary-2000.0;
        tax+= second*8/100;
    }

    if(tax>0)

    cout << "R$ " << fixed <<setprecision(2) << tax << endl;



    return 0;
}
