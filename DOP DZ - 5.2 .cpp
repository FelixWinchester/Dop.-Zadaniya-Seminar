#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
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
    int k = 0, s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] < a[i][0]) {
                k++;
                s += a[i][j];
            }
        }
    }
    cout << k << " " << s;
    return 0;
}
