#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int index = pow(10, n - 1);
	for (int i = index; i < index * 10; i++)
	{
		int temp = i;
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum = sum + pow((temp % 10), n);
			temp /= 10;
		}
		if (sum == i)
		{
			cout << i << endl;
		}
	}
	return 0;
}