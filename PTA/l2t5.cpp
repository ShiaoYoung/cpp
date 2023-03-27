//#include<iostream>
//
//using namespace std;
//
//void Hanoi(int n, char A, char B, char help) {
//	if (n == 1)
//	{
//		cout << n << ": " << A << " -> " << B << endl;
//	}
//	else
//	{
//		Hanoi(n - 1, A, help, B);
//		cout << n << ": " << A << " -> " << B << endl;
//		Hanoi(n - 1, help, B, A);
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	char A, B, help;
//	cin >> A >> B >> help;
//
//	Hanoi(n, A, B, help);
//
//	return 0;
//}