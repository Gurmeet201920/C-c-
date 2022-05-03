#include <bits/stdc++.h>
using namespace std;
int main()
{
    float E, H, M, S, SS, TOTAL, P;
    cout << "ENTER THE MARKS OF ENGLISH" << endl;
    cin >> E;
    cout << "ENTER THE MARKS OF HINDI" << endl;
    cin >> H;
    cout << "ENTER THE MARKS OF MATHS" << endl;
    cin >> M;
    cout << "ENTER THE MARKS OF SCIENCE" << endl;
    cin >> S;
    cout << "ENTER THE MARKS OF SST" << endl;
    cin >> SS;
    TOTAL = E + H + M + S + SS;
    P = TOTAL / 5;
    cout << "TOTAL PERCENTAGE of joshi IS " << P;

    return 0;
}
