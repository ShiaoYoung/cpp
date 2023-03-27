//#include<iostream>
//
//using namespace std;
//
//int getAVG(int scores[]) {
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += scores[i];
//	}
//
//	return sum / 10;
//}
//
//int getMin(int scores[]) {
//	int min = 100;
//	for (int i = 0; i < 10; i++)
//	{
//		if (min > scores[i]) {
//			min = scores[i];
//		}
//	}
//
//	return min;
//}
//
//int main() {
//	int scores[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> scores[i];
//	}
//
//	cout << "average=" << getAVG(scores) << endl;
//	cout << "min=" << getMin(scores) << endl;
//
//	return 0;
//}