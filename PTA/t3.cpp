//# include<iostream>
//# include<cmath>
//
//using namespace std;
//
//int main() {
//	//读入三个数
//	double a, b, c;
//	cin >> a >> b >> c;
//
//	//不构成三角形
//	if (a + b <= c || a + c <= b || b + c <= a) {
//		cout << "These sides do not correspond to a valid triangle" << endl;
//	}
//	else
//	{
//		//构成三角形
//		double s = (a + b + c) / 2;
//		double t = s * (s - a) * (s - b) * (s - c);
//		double area = sqrt(t);
//		double per = a + b + c;
//		cout << "area = ";
//		printf("%.2f", area);
//		cout << "; perimeter = ";
//		printf("%.2f", per);
//	}
//
//	
//}
