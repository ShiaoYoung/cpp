//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//1. 输入个数、数字
//	int n;
//	cin >> n;
//	int* nums = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//
//	if (n == 1) {
//		cout << nums[0];
//		return 0;
//	}
//
//	//2. 排序，输出每一步
//	for (int i = n - 1; i >= 1; i--)
//	{
//		for (int j = 0; j < i; j++) {
//			if (nums[j] > nums[j + 1])
//			{
//				int temp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = temp;
//			}
//		}
//		for (int k = 0; k < n; k++)
//		{
//			if (k == n - 1) {
//				cout << nums[k];
//				break;
//			}
//			cout << nums[k] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}