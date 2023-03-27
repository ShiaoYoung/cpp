//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//1. 读入一个数字字符串
//	string inputs;
//	cin >> inputs;
//
//	//2. 排序
//	string ji;
//	string ou;
//	string re;
//	for (int i = 0; i < inputs.size(); i++)
//	{
//		switch (inputs[i] % 2)
//		{
//		case 0: ou = ou + inputs[i]; break;
//		case 1: ji = ji + inputs[i]; break;
//		default:
//			break;
//		}
//	}
//	re = ji + ou;
//
//	//3. 输出
//	cout << re;
//
//	return 0;
//}