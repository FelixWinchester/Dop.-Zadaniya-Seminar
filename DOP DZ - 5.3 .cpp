#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    double eps = 1e-11;
    int** a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    if (k >= 0 && k <= m) {
        for (int j = k; j < m - 1; j++) {
            for (int i = 0; i < n; i++) {
                a[i][j] = a[i][j + 1];
            }
            m--;
            j--;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Oshibka";
    }
}
