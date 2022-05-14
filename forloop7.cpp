#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no, sum = 0;
    cout << "enter any number\n";
    cin >> no;
    cout << "natural no from 1 to " << no << "is given below\n";
    for (int i = 1; i <= no; i++)
    {
        cout << i << "";
        sum = sum + i;
    }
    cout << "\total sum=" << sum;
}