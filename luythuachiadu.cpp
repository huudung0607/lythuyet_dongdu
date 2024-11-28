#include <iostream>
#include <math.h>
using namespace std;
const int mod = 1000000007;

long long pow_num(long long a, long long b)
{
	long long res = 1;
	a %= mod; //tranh truong hop a qua lon
	while (b)
	{
		if (b % 2 == 1)
		{
			res *= a;
			res %= mod; //dong du
		}
		b /= 2;
		a *= a;
		a %= mod; //dong du
	}
	return res % mod; //dong du
}

int main() {
	long long a, b;
	cin >> a >> b;
	cout << pow_num(a, b) << endl;
}
