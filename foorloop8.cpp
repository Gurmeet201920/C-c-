//factorial program....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no, f = 1;
    cout << "enter any number\n";
    cin >> no;
    for (int i = 1; i <= no; i++)
    {
        f = f * i;
    }
    cout << "factorial=" << f;
    return 0;
}
