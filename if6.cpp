#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, i;
    cout << "enter your number" << endl;
    cin >> number;
    if (number < 0)
    {
        cout << "negative" << endl;
    }
    if (number >= 1)
    {
        cout << "positive" << endl;
    }
    if (number == 0)
    {
        cout << "zero" << endl;
    }
    return 0;
}
