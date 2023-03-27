//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//1. 输入n
//	int n;
//	cin >> n;
//
//	//2. 输入矩阵
//	int result = 0;
//	int **matrix = new int*[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		matrix[i] = new int[n];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> matrix[i][j];
//			if (i + j == n - 1 || i == n - 1 || j == n - 1) {
//				continue;
//			}
//			result += matrix[i][j];
//		}
//	}
//
//	//3. 计算结果 + 输出
//	/*for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (i + j == n - 1) {
//				continue;
//			}
//			result += matrix[i][j];
//		}
//	}*/
//
//	cout << result;
//
//	return 0;
//}