#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age >= 1 && age <= 10)
    {
        cout << "kids" << endl;
    }
    if (age > 10 && age <= 18)
    {
        cout << "teen" << endl;
    }
    if (age > 18 && age <= 30)
    {
        cout << "young" << endl;
    }
    if (age > 30 && age <= 55)
    {
        cout << "middle" << endl;
    }
    if (age > 55)
    {
        cout << "old" << endl;
    }
    return 0;
}