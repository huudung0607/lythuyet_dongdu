#include <iostream>
#include <math.h>
//X = 17823812381838123818238123812371273172371237172371238128317564719259123812318231623712381231318231239123812831823126412412428.
//Bạn hãy tìm kết quả của của X^N sau khi chia dư cho 100.
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long ans = 1;
	for (int i = 1; i <= n; i++)
	{
		ans *= 28;
		ans %= 100;
	}
	cout << ans << endl;
}
