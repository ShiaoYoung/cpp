#include<iostream>

using namespace std;

string checkMatrix(int** matrix, int m) {
	for (int j = 1; j < m; j++)
	{
		for (int k = 0; k < j; k++)
		{
			if (matrix[j][k] != 0)
			{
				return "NO";
			}
		}
	}
	return "YES";
}

int main() {
	//1. 输入矩阵个数
	int n;
	cin >> n;

	string* re = new string[n];

	//2. 输入矩阵
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		int **matrix = new int*[m];
		for (int j = 0; j < m; j++)
		{
			matrix[j] = new int[m];
		}
		for (int k = 0; k < m; k++)
		{
			for (int l = 0; l < m; l++)
			{
				cin >> matrix[k][l];
			}
		}
		re[i] = checkMatrix(matrix, m);
	}

	//3. 输出结果
	for (int i = 0; i < n; i++)
	{
		cout << re[i] << endl;
	}

	return 0;
}
