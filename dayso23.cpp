#include <iostream>
#include <math.h>
using namespace std;
const int mod = 1e9 + 7;
int main() {
	int n;
	cin >> n;
	long long fn_1 = 1;
	long long fn_2 = 1;
	long long fn = 0;
	for (int i = 3; i <= n; i++) {
		fn = (2 * fn_1 + 3 * fn_2) % mod;
		long long temp = fn % mod;
		fn_2 = fn_1 % mod;
		fn_1 = temp % mod;
	}
	cout << fn % mod;
}
