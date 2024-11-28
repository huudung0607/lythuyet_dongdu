#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const int mod = 1000000007;
int main()
{
	int n;
	cin >> n;
	long long giaithua = 1;
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i % mod;
		giaithua %= mod;
		cout << giaithua << endl;
	}
}
