//#include<iostream>
//#include<cmath>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//	//����m
//	int m;
//	cin >> m;
//
//	//�ҳ�С��m��ʮ������
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
//	//ÿ������ռ6�У����
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setw(6) <<arr[i];
//	}
//}