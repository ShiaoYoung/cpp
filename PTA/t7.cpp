#include<iostream>

using namespace std;

double getFact(int n) {
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result = result * i;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	double sum = 1;

	while (n >= 1)
	{
		sum += 1 / getFact(n);
		n--;
	}

	printf("%.8f", sum);
}