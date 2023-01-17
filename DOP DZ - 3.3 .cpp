#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s = 0, e = 1e-11;
    int n = 1;
    double x = sin(n) / 2;
    while (x > e) {
        cout << x << endl;
        s += x;
        n++;
        x /= 2;
    }
    cout << s;
}
