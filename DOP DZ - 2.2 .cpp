#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    while (n - x > 0) {
        cout << n - x << endl;
        n -= x;
    }
}
