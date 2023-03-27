//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//bool isPrime(long long n) {
//	for (long long i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	long long n;
//	cin >> n;
//
//	long long x1 = 0;
//	long long x2 = 0;
//
//	for (long long i = 2; i <= n / 2; i++)
//	{
//		if (isPrime(i) && isPrime(n - i)) {
//			x1 = i;
//			x2 = n - i;
//			break;
//		}
//	}
//
//	if (!(x1 == 0 && x2 == 0))
//	{
//		cout << n << " = " << x1 << " + " << x2;
//	}
//	return 0;
//}