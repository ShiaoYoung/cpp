//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<sstream>
//#include<iterator>
//
//using namespace std;
//
//vector<int> BigIntegerAdd(string s1, string s2) {
//	
//	vector<int> n1, n2;
//	for (int i = s1.length() - 1; i >= 0; i--)
//	{
//		n1.push_back(s1[i] - '0');
//	}
//	for (int i = s2.length() - 1; i >= 0; i--)
//	{
//		n2.push_back(s2[i] - '0');
//	}
//
//	vector<int> n;
//	int a = 0;
//
//	for (int i = 0; i < n1.size() || i < n2.size(); i++)
//	{
//		if (i < n1.size())
//		{
//			a += n1[i];
//		}
//		if (i < n2.size())
//		{
//			a += n2[i];
//		}
//		n.push_back(a % 10);
//		a /= 10;
//	}
//
//	if (a) {
//		n.push_back(1);
//	}
//
//	return n;
//}
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector<string> av, bv, re;
//
//	string a, b;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		av.push_back(a);
//		bv.push_back(b);
//		vector<int> c = BigIntegerAdd(a, b);
//
//		string s;
//		stringstream ss;
//		copy(c.begin(), c.end(), ostream_iterator<int>(ss, ""));
//		s = ss.str();
//		reverse(s.begin(), s.end());
//		re.push_back(s);
//	}
//
//	for (int i = 0; i < re.size(); i++)
//	{
//		cout << "Case " << i + 1 << ":" << endl;
//		cout << av[i] << " + " << bv[i] << " = ";
//
//		cout << re[i] << endl;
//		cout << endl;
//	}
//}
//
//
//
////string BigIntegerAdd(string n1, string n2) {
////
////
////	//n1比n2长
////	if (n1.length() < n2.length())
////	{
////		string temp = n1;
////		n1 = n2;
////		n2 = temp;
////	}
////	
////
////	int indexD = n1.length();
////	int indexX = n2.length();
////
////	int indexDB = indexD;
////	int indexXB = indexX;
////
////	char result[1001];
////	for (int i = 0; i < indexD + 1; i++)
////	{
////		result[i] = '0';
////	}
////	char tempC = '0';
////
////	while (indexX > 0)
////	{
////		//计算两个数字相同位相加得到的字符
////		char re = n1[indexD - 1] + (n2[indexX - 1] - 48) + (tempC - 48);
////		if (re <= '9')
////		{
////			tempC = '0';
////			result[indexD] = re;
////		}
////		else
////		{
////			re = re - 10;
////			tempC = '1';
////			result[indexD] = re;
////		}
////		
////		indexD--;
////		indexX--;
////	}
////	if (indexD == indexX && tempC == '1')
////	{
////		result[0] = '1';
////	}
////	if (indexD != indexX)
////	{
////		while (indexD > 0)
////		{
////			char re = n1[indexD - 1] + (tempC - 48);
////			if (re <= '9')
////			{
////				tempC = '0';
////				result[indexD] = re;
////			}
////			else
////			{
////				re = re - 10;
////				tempC = '1';
////				result[indexD] = re;
////			}
////			indexD--;
////		}
////	}
////	if (tempC == '1') {
////		result[0] = '1';
////	}
////
////	char* realResult = new char[indexDB  + 1];
////
////	int* resu = new int[indexDB];
////
////	for (int i = 0; i < indexDB + 1; i++)
////	{
////		resu[i] = atoi((const char*)result[i]);
////	}
////
////	int count = 0;
////
////	for (int i = 0; i < indexDB + 1; i++)
////	{
////		if (resu[0] == 0)
////		{
////			i++;
////			continue;
////		}
////	
////		realResult[count] = (char)resu[i];
////	}
////
////	int res = atoi(realResult);
////
////	return realResult;
////
////
////	//while (index1 >= 0 || index2 >= 0)
////	//{
////	//	 //将n1，n2的对应位置的数字相加
////	//	 char temp = n1[index1] + n2[index2] - 48;
////	//	 //加上上一位进一的1
////	//	 temp += tempC - 48;
////
////	//	 if (temp > '9')
////	//	 {
////	//		 temp = temp - 10;
////	//		 result = temp + result;
////	//		 tempC = '1';
////	//	 }
////	//	 else
////	//	 {
////	//		 result = temp + result;
////	//		 tempC = '0';
////	//	 }
////	//	index1--;
////	//	index2--;
////	//}
////
////	//if (index1 >= 0)
////	//{
////	//	for (int i = index1; i >= 0 ; i--)
////	//	{
////	//		char toAdd = n1[index1] + tempC - 48;
////	//		if (toAdd > '9')
////	//		{
////	//			toAdd = toAdd - 10;
////	//			result = toAdd + result;
////	//			tempC = '1';
////	//		}
////	//		else
////	//		{
////	//			result = toAdd + result;
////	//			tempC = '0';
////	//		}
////	//	}
////	//	if (tempC == '1')
////	//	{
////	//		result = '1' + result;
////	//	}
////
////	//}
////	//else
////	//{
////	//	for (int i = index2; i >= 0; i--)
////	//	{
////	//		char toAdd = n1[index2] + tempC - 48;
////	//		if (toAdd > '9')
////	//		{
////	//			toAdd = toAdd - 10;
////	//			result = toAdd + result;
////	//			tempC = '1';
////	//		}
////	//		else
////	//		{
////	//			result = toAdd + result;
////	//			tempC = '0';
////	//		}
////	//	}
////	//	if (tempC == '1')
////	//	{
////	//		result = '1' + result;
////	//	}
////	//}
////
////	//return result;
////}