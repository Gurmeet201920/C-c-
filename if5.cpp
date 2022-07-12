// Result program.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float Percent, English, Hindi, Maths, Science, Art;
    cout << "Enter Marks of English" << endl;
    cin >> English;
    cout << "Enter Marks of Hindi" << endl;
    cin >> Hindi;
    cout << "Enter Marks of Maths" << endl;
    cin >> Maths;
    cout << "Enter Marks of Science" << endl;
    cin >> Science;
    cout << "Enter marks of Art" << endl;
    cin >> Art;
    Percent = (English + Hindi + Maths + Science + Art) / 5;
    cout << "Total percent  " << Percent << endl;
    if (Percent >= 90)
        cout << "pass" << endl;
    else
        cout << " fail";

    return 0;
}
