#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "enter any alphabet" << endl;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonent" << endl;
    }
    return 0;
}