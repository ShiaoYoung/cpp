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
//	//����ƽ����
//	double sqSum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sqSum += pow(nums[i] - AVG, 2);
//	}
//
//	//���㷽��
//	double result = sqrt(sqSum / n);
//
//	//���
//	printf("%.5f", result);
//
//	return 0;
//}