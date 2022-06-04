//check characters
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "enter any alphabets..." << endl;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "vowels" << endl;
    }
    else
    {
        cout << "consonent" << endl;
    }
    return 0;
}
