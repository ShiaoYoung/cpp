//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//string AddOne(string num) {
//	if (num[3] < '9')
//	{
//		num[3] = num[3] + 1;
//		return num;
//	}
//	else
//	{
//		num[3] = '0';
//		if (num[2] < '9')
//		{
//			num[2] = num[2] + 1;
//			return num;
//		}
//		else
//		{
//			num[2] = '0';
//			if (num[1] < '9')
//			{
//				num[1] = num[1] + 1;
//				return num;
//			}
//			else
//			{
//				num[1] = '0';
//				num[0] = num[0] + 1;
//				return num;
//			}
//		}
//	}
//}
//
//int diferAlpha(string num) {
//	string temp = {num[0]};
//
//	for (int i = 1; i < 4; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < temp.size(); j++)
//		{
//			if (temp[j] == num[i])
//			{
//				count++;
//				break;
//			}
//		}
//		if (!(count))
//		{
//			temp.push_back(num[i]);
//		}
//	}
//
//	return temp.size();
//}
//
//int main() {
//	//1. ���������ݺ��ظ����ָ���
//	int n;
//	string year;
//	cin >> year >> n;
//	if (year.size() < 4)
//	{
//		reverse(year.begin(), year.end());
//		int yearLong = year.size();
//		for (int i = 0; i < 4 - yearLong; i++)
//		{
//			year.push_back('0');
//		}
//		reverse(year.begin(), year.end());
//	}
//	
//
//	//2. ͨ���������ҵ�������������ݣ���¼count
//	int count = 0;
//	while (true)
//	{
//		if (n == diferAlpha(year))
//		{
//			break;
//		}
//		year = AddOne(year);
//		count++;
//	}
//	cout << count << " " << year;
//	return 0;
//}