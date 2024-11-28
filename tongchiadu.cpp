#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const int mod = 1000000007;
int main()
{
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		sum += x % mod;
		sum %= mod;
	}
	cout << sum;
}
