//#include<iostream>
//
//using namespace std;
//
//string getZeroIndex(int nums[3][3]) {
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (!(nums[i][j]))
//			{
//				char c1 = i + '0';
//				char c2 = j + '0';
//				string s;
//				s.push_back(c1);
//				s.push_back(c2);
//				return s;
//			}
//		}
//	}
//}
//
//int getZeroValue(int nums[3][3]) {
//	int value = 45;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			value -= nums[i][j];
//		}
//	}
//	return value;
//}
//
//int main() {
//	//1. ����Ÿ�����
//	int nums[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		int k;
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> k;
//			nums[i][j] = k;
//		}
//	}
//
//	string s = getZeroIndex(nums);
//	int index0 = s[0] - '0';
//	int index1 = s[1] - '0';
//	nums[index0][index1] = getZeroValue(nums);
//
//	//2. ���롰�ο���λ��
//	int positions[3][2];
//	for (int i = 0; i < 3; i++)
//	{
//		int k;
//		for (int j = 0; j < 2; j++)
//		{
//			cin >> k;
//			positions[i][j] = k - 1;
//		}
//	}
//
//	//3. ����ο�����
//	int rule[6];
//	int rules[8][6] = { {0, 0, 0, 1, 0, 2},
//						{1, 0, 1, 1, 1, 2},
//						{2, 0, 2, 1, 2, 2},
//						{0, 0, 1, 0, 2, 0},
//						{0, 1, 1, 1, 2, 1},
//						{0, 2, 1, 2, 2, 2},
//						{0, 0, 1, 1, 2, 2},
//						{0, 2, 1, 1, 2, 0} };
//	int index;
//	cin >> index;
//	int sum = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		rule[i] = rules[index - 1][i];
//	}
//	for (int i = 0; i < 5; i = i + 2)
//	{
//		sum += nums[rule[i]][rule[i + 1]];
//	}
//
//	//4. ����ο�������
//	for (int i = 0; i < 3; i++)
//	{
//		cout << nums[positions[i][0]][positions[i][1]] << endl;
//	}
//
//	//5. ����������
//	int money[19] = { 10000, 36, 720, 360, 80, 252, 108, 72, 54, 180,
//						72, 180, 119, 36, 306, 1080, 144, 1800, 3600 };
//
//	cout << money[sum - 6];
//
//	return 0;
//
//}