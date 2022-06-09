//swaping number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "before swapping a = " << a << " and b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after the swapping a = " << a << " and b = " << b << endl;
    return 0;
}
