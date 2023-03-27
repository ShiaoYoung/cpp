#include<iostream>

using namespace std;

int getMaxIndex(int nums[]) {
	int index = 0;
	int max = nums[0];
	for (int i = 1; i < sizeof(nums); i++)
	{
		if (max < nums[i])
		{
			index = i;
		}
	}
	return index;
}

int getMinIndex(int nums[]) {
	int index = 0;
	int min = nums[0];
	for (int i = 1; i < sizeof(nums); i++)
	{
		if (min > nums[i])
		{
			index = i;
		}
	}
	return index;
}

int main() {
	//1. 输入个数
	int n;
	cin >> n;

	//2. 输入数字
	int* nums = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	//3. 交换顺序
	int maxIndex = getMaxIndex(nums);
	int minIndex = getMinIndex(nums);

	int tempX = nums[0];
	nums[0] = nums[minIndex];
	nums[minIndex] = tempX;

	int tempD = nums[n - 1];
	nums[n - 1] = nums[maxIndex];
	nums[maxIndex] = tempD;

	//4. 输出结果
	for (int i = 0; i < n; i++)
	{
		cout << nums[i] << " ";
	}

	return 0;

}