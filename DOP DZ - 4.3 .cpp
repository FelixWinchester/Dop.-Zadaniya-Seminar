#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double e = 1e-11;
    double* a = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (abs(a[i]) < 1e-3 + e) {
            cout << i << "\t";
        }
    }
}
