#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no, sum = 0;
    cout << "enter any numbers"<<endl;
    cin >> no;
    cout << "natural no from 1 to " << no << "is given below"<<endl;
    for (int i = 1; i <= no; i++)
    {
        cout << i << "";
        sum = sum + i;
    }
    cout << "\total sum=" << sum;
}
