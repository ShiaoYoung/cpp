//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main() {
//	double x1, y1;
//	double x2, y2;
//	double x3, y3;
//
//	cin >> x1 >> y1;
//	cin >> x2 >> y2;
//	cin >> x3 >> y3;
//
//	double a, b, c;
//	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//	c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
//
//	if (a+b <= c || a+c <= b || b+c <= a)
//	{
//		cout << "Impossible";
//		return 0;
//	}
//	
//	double L, A,s;
//	L = a + b + c;
//	s = L / 2;
//	A = sqrt(s * (s - a) * (s - b) * (s - c));
//
//	cout << "L = ";
//	printf("%.2f", L);
//	cout << ", A = ";
//	printf("%.2f", A);
//}