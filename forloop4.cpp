#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a and b" << endl;
    cin >> a >> b;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    for (int i = 0; i < c; i++)
    {
        cout << "gurmeet  " << i << endl;
    }

    return 0;
}