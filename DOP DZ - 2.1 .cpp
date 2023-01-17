#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 10; i < 100; i++) {
        int a = i % 10;
        int b = (i - a) / 10;
        if ((a + b) % 2 != 0) {
            cout << i << " ";
        }
    }
}
