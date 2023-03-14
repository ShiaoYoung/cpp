//#include<iostream>
//
//using namespace std;
//
//bool checkNum(int n) {
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main() {
//	int x, y;
//	cin >> x >> y;
//
//	for (int i = x; i <= y; i++)
//	{
//		if (i % 2 != 0) {
//			continue;
//		}
//		for (int j = (x + 1) / 2 - 1; j > 1; j = j - 2)
//		{
//			if (checkNum(j) && checkNum(i - j))
//			{
//				cout << i << "=" << j << "+" << i - j << endl;
//			}
//		}
//	}
//}