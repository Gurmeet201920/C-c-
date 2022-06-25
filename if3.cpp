// pass fail program 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float p;
    cout << "enter your percent\n";
    cin >> p;
    if (p >= 60)
        cout << "first division";
    else if (p >= 45)
        cout << "second division";
    else if (p >= 33)
        cout << "third division";
    else
        cout << "fail";
    return 0;
}
