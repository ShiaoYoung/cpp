#include<iostream>

using namespace std;


int n, top = 0;
int stc[10];
int a[10];
int visit[10] = {1};

void pringCom(int len) {
	if (len == n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << stc[i];
		}
		cout << " ";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (visit[i] == 1)
		{
			visit[i] = 0;
			stc[top++] = a[i];
			pringCom(len + 1);
			top--;
			visit[i] = 1;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		visit[i] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		a[i - 1] = i;
	}
	pringCom(0);

}

//string strs[362880];
//int index = 1;
//int n;
//
//void printCom(int fix, int fixIndex) {
//
//	if (true)
//	{
//
//	}
//}
//
//int getFact(int n) {
//	int result = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//void getQuanpailie(string s, int index1, int index2) {
//	string str = s;
//	if (index1 == index2 && index1 == n - 1)
//	{
//
//		return;
//	}
//	else if (index1 < n - 1 && index2 == n - 1)
//	{
//		char c1 = str[index1];
//		str[index1] = str[index2];
//		str[index2] = c1;
//		strs[index] = str;
//		index++;
//		index1++;
//		index2 = index1 + 1;
//		getQuanpailie(str, index1, index2);
//	}
//	else if (index1 < n - 1 && index2 < n - 1)
//	{
//		char c1 = str[index1];
//		str[index1] = str[index2];
//		str[index2] = c1;
//		strs[index] = str;
//		index++;
//		index1++;
//		index2++;
//		getQuanpailie(str, index1, index2);
//	}
//}
//
//int main() {
//	//1. 输入一个整数n
//	cin >> n;
//
//	//2. 把n个数字的全排列放到enements中
//	string s;
//	for (int i = 1; i <= n; i++)
//	{
//		s.push_back(i + '0');
//	}
//	strs[0] = s;
//
//	getQuanpailie(s, 0, 1);
//
//	int times = getFact(n);
//	for (int i = 0; i < 7; i++)
//	{
//		cout << strs[0] << " ";
//	}
//
//
//
//
//	//3. 
//	/*for (int i = 0; i < getFact(n - 1); i++)
//	{
//
//	}*/
//	
//
//
//}