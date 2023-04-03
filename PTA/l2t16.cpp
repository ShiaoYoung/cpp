//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main() {
//	while (true)
//	{
//		cout << "1-Ball" << endl;
//		cout << "2-Cylinder" << endl;
//		cout << "3-Cone" << endl;
//		cout << "other-Exit" << endl;
//		cout << "Please enter your command:" << endl;
//		char com;
//		cin >> com;
//		if (com == '1')
//		{
//			cout << "Please enter the radius:" << endl;
//			double radius, volumn;
//			cin >> radius;
//			volumn = (4 * pow(radius, 3) * acos(-1)) / 3;
//			printf("%.2f", volumn);
//			cout << endl;
//		}
//		else if (com == '2')
//		{
//			cout << "Please enter the radius and the height:" << endl;
//			double radius, height, volumn;
//			cin >> radius >> height;
//			volumn = height * pow(radius, 2) * acos(-1);
//			printf("%.2f", volumn);
//			cout << endl;
//		}
//		else if (com == '3')
//		{
//			cout << "Please enter the radius and the height:" << endl;
//			double radius, height, volumn;
//			cin >> radius >> height;
//			volumn = (height * pow(radius, 2) * acos(-1)) / 3;
//			printf("%.2f", volumn);
//			cout << endl;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}