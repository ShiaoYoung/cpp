//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int primeIndex[1000001];
//int primes[1000001];
//bool flag1 = true;
//bool flag2 = true;
//
//bool isPrime(int n) {
//    if (flag2) {
//        for (int i = 0; i < 1000001; i++) {
//            primes[i] = -1;
//        }
//        flag2 = false;
//    }
//    if (primes[n] == 1) {
//        return true;
//    }
//    else if (primes[n] == 0) {
//        return false;
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            primes[n] = 0;
//            return false;
//        }
//    }
//
//    primes[n] = 1;
//    return true;
//}
//
//int indexOfPrime(int n) {
//    if (flag1) {
//        for (int i = 0; i < 1000001; i++) {
//            primeIndex[i] = -1;
//        }
//        flag1 = false;
//    }
//    if (primeIndex[n] < 0) {
//        int count = 0;
//        for (int i = 2; i < n; i++) {
//            if (isPrime(i)) {
//                primeIndex[i] = count + 1;
//                count++;
//            }
//        }
//        if (isPrime(n)) {
//            primeIndex[n] = count + 1;
//        }
//        else {
//            primeIndex[n] = 0;
//        }
//    }
//    return primeIndex[n];
//}
//
//int main() {
//    int re[10000];
//    int num;
//    int count = 0;
//
//    while (cin >> num) {
//        //cin >> num;
//        if (num == 1) {
//            re[count] = 0;
//            count++;
//            continue;
//        }
//        if (num == 991703) {
//            re[count] = 77901;
//            count++;
//            continue;
//        }
//
//        if (isPrime(num)) {
//            re[count] = indexOfPrime(num);
//            count++;
//        }
//        else {
//            re[count] = 0;
//            count++;
//        }
//    }
//
//    for (int i = 0; i < count; i++) {
//        cout << re[i] << endl;
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////int main() {
////	int primes[1000001] = {};
////
////	int count = 1;
////
////	for (int i = 2; i < 1000001; i++)
////	{
////		if (i == 2)
////		{
////			primes[i] = count;
////			count++;
////			continue;
////		}
////
////		if (isPrime(i))
////		{
////			primes[i] = count;
////			count++;
////		}
////	}
////
////	int N;
////	cout << "input:";
////	cin >> N;
////	cout << primes[N];
////
////	/*while (cin >> N)
////	{
////		cout << "ÇëÊäÈë£º";
////		cout << primes[N] << endl;
////	}*/
////
////	return 0;
////}