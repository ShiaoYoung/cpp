#include<iostream>

using namespace std;

int main() {
	double eps;
	double sum = 0;
	cin >> eps;

	int count = 1;
	double n = 1;
	while ((1 / (3 * n - 2)) > eps)
	{
		if (count == 1)
		{
			sum += 1 / (3 * n - 2);
			count = 0;
			n = n + 1;
		}
		else
		{
			sum -= 1 / (3 * n - 2);
			count = 1;
			n = n + 1;
		}
	}

	printf("%.6f", sum);
}