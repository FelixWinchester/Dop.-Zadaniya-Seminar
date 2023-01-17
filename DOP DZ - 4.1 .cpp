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
    for (int i = n - 1; i != -1; i--) {
        if (a[i] < 0) {
            cout << a[i] << "\t";
        }
    }
}
