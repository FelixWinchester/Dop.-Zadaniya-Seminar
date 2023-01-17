#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a1 = 1, a2 = 4;
    int an = 0;
    for (int i = 2; i < n; i++) {
        an = (2 * a1 + a2) / 2;
        a1 = a2;
        a2 = an;
    }
    cout << an;
}
