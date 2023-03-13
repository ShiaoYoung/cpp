//#include<iostream>
//#include<cmath>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//	//输入m
//	int m;
//	cin >> m;
//
//	//找出小于m的十个素数
//	int arr[10];
//	int count = 0;
//	while (count != 10)
//	{
//		m = m - 1;
//		bool flag = true;
//		for (int i = 2; i <= sqrt(m); i++)
//		{
//			if (m % i == 0) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			arr[count] = m;
//			count++;
//		}
//	}
//
//	//每个数字占6列，输出
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setw(6) <<arr[i];
//	}
//}