#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e, m, s, c, h, percentage;
    cout << "enter the marks of english" << endl;
    cin >> e;
    cout << "enter the marks of maths" << endl;
    cin >> m;
    cout << "enter the marks of science" << endl;
    cin >> s;
    cout << "enter the marks of computer" << endl;
    cin >> c;
    cout << "enter the marks of hindi" << endl;
    cin >> h;
    percentage = (e + m + s + c + h) / 5;
    if (percentage >= 85)
    {
        cout << "you are pass " << percentage << "%" << endl;
    }
    else
    {
        cout << "you are fail " << percentage << "%" << endl;
    }

    return 0;
}