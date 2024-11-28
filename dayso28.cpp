/*F[1] = 2

F[2] = 8

F[n] = 2 * F[n - 1] + 8 * F[n - 2] với n >= 3

Nhiệm vụ của bạn là hãy in ra số thứ n trong dãy số 28tech sau khi chia dư cho 1000000007 (10^9 + 7)*/
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int const mod = 1000000007;
ll F[1000005];

void tech_28() {
    F[1] = 2;
    F[2] = 8;
    for (int i = 3; i <= 1000005; i++)
    {
        F[i] = (2 * F[i - 1] + 8 * F[i - 2]) % mod;
    }
}

int main() {
    tech_28();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
