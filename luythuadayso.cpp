#include <iostream>
#include <math.h>
const int mod = 1000000007;
using namespace std;

long long bin_pow(long long a, long long b)
{
	a %= mod;
	long long res = 1;
	while (b)
	{
		if (b % 2 == 1)
		{
			res *= a;
			res %= mod;
		}
		b /= 2;
		a = a * a;
		a %= mod;
	}
	return res % mod;
}

int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans += bin_pow(i, i) % mod;
		ans %= mod;
	}
	cout << ans << endl;
}
