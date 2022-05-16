#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, p, f = 1;
    cout << "enter base\n";
    cin >> b;
    cout << "enter power\n";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        f = f * b;
    }
    cout << "result=" << f;
    return 0;
}