#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "a is bigger than b and c" << endl;
    }
    if (b > a || b > c)
    {
        cout << "b is bigger than a and c " << endl;
    }
    else
    {
        cout << "c is bigger than b and a " << endl;
    }
    return 0;
}
