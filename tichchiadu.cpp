#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const int mod = 1000000007;
int main()
{
	int n;
	cin >> n;
	long long tich = 1;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		tich *= x % mod;
		tich %= mod;
	}
	cout << tich;
}
