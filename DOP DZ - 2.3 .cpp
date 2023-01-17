#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, s = 0, pr = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > 0 && (a % 2 == 0)) {
            s += a;
            pr *= a;
        }
    }
    cout << s << "\t" << pr;
}

