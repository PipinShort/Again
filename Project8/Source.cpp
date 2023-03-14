#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    if (a < b && b < c) cout << "A < B < C true";
    else cout << "A < B < C false";
}