//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//����һ��ʮ������
//	int x1;
//	cin >> x1;
//
//	int arr[8] = { 0,0,0,0,0,0,0,0 };
//	int count = 7;
//
//	//�������ת���ɶ�����
//	while (x1 != 0) {
//		arr[count] = x1 % 2;
//		count--;
//		x1 = x1 / 2;
//	}
//
//	//�ѵõ��Ķ����Ʒ����飬�ֱ�õ��µ�ʮ������
//	int ge = 0;
//	int shi = 0;
//	for (int i = 7; i > 3; i--)
//	{
//		ge += arr[i] * pow(2, 7 - i);
//	}
//
//	for (int i = 3; i >= 0; i--)
//	{
//		shi += arr[i] * pow(2, 3 - i);
//	}
//
//	if (ge == 0 && shi == 0) {
//		cout << 0;
//		return 0;
//	}
//
//	cout << shi << ge;
//
//	return 0;
//
//}