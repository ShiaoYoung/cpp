//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	double sum = 0;
//	bool flag = true;
//
//	for (double i = 1; i <= n; i++)
//	{
//		if (flag)
//		{
//			sum += i / (2 * i - 1);
//			flag = false;
//		}
//		else
//		{
//			sum -= i / (2 * i - 1);
//			flag = true;
//		}
//	}
//
//	printf("%.3f", sum);
//}