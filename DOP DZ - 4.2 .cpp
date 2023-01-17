#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 7 == 0) {
            a[i] = a[n - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
}
