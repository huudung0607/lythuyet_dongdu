#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long long n, m, k;
	cin >> n >> m >> k;
	long long mod = pow(10, k);
	long long ans = 1;
	for (int i = 1; i <= m; i++) {
		ans *= n % mod;
		ans %= mod;
	}
	cout << ans << endl;
}
