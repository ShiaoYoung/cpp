//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	//1. 输入数字
//	vector<int> nums;
//
//	int n;
//	cin >> n;
//	int m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		nums.push_back(m);
//	}
//
//	//2. 找出最多的
//	int num = nums[0];
//	int times = 1;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		int temp_times = 0;
//		for (int j = 0; j < nums.size(); j++)
//		{
//			if (nums[i] == nums[j])
//			{
//				temp_times++;
//			}
//		}
//		if (temp_times > times)
//		{
//			num = nums[i];
//			times = temp_times;
//		}
//	}
//
//	//3. 输出结果
//	cout << num << " " << times;
//
//	return 0;
//}