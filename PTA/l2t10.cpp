//#include<iostream>
//#include<iomanip>
//
//using namespace std;
//
//int main() {
//	//1. 输入一行数
//	int nums[10];
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> nums[i];
//	}
//
//	//2. 排序
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i; j < 10; j++)
//		{
//			if (nums[i] < nums[j])
//			{
//				int temp = nums[i];
//				nums[i] = nums[j];
//				nums[j] = temp;
//			}
//		}
//	}
//	//3. 输出
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setw(5) << nums[i];
//	}
//
//	return 0;
//}