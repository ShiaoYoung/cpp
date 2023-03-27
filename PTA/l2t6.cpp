//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//
//
//int main() {
//	int n = 1;
//	cin >> n;
//
//	int* nums = new int[n];
//
//	double sum = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		nums[i] = num;
//		sum += num;
//	}
//
//	double AVG = sum / n;
//
//	//计算平方和
//	double sqSum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sqSum += pow(nums[i] - AVG, 2);
//	}
//
//	//计算方差
//	double result = sqrt(sqSum / n);
//
//	//输出
//	printf("%.5f", result);
//
//	return 0;
//}