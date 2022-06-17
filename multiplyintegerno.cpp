//multiply interfere numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no, b, m = 1;
    cout << "enter any number" << endl;
    cin >> no;
    while (no != 0)
    {
        b = no % 10;
        m = m * b;
        no = no / 10;
    }
    cout << "total multiply of digits=" << m;
    return 0;
}
