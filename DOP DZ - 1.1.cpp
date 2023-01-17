#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    if (((a - 1) * (a - 1) + b * b < 1 * 1) && ((a > 0 && b < 1) || (a > 0 && b > -1))) {
        cout << "Ок";
    }
    else cout << "Не ок";
    return 0;
}
