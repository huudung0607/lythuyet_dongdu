#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
const int mod = 1000000007;
int main()
{
	int a, b;
	cin >> a >> b;
	long long so_mu = 1;
	for (int i = 1; i <= b; i++)
	{
		so_mu *= a % mod;
		so_mu %= mod;
	}
	cout << so_mu;
}
