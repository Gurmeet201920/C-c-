//simple intrest program
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "enter principle" << endl;
    cin >> p;
    cout << "enter rate of interest" << endl;
    cin >> r;
    cout << "enter time" << endl;
    cin >> t;
    si = (p * r * t) / 100;
    cout << "simple intrest=" << si;
    return 0;
}
