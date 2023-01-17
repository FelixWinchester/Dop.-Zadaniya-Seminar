#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, x, s = 0;
	cin >> n >> x;
	for (int i = 0; i <= n; i++) {
		s += pow(x, i) * (i % 2 == 0 ? 1 : -1);
	}
	cout << s;
}
