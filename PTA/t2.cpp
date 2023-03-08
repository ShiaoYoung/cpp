#include<iostream>
#include<cmath>
using namespace  std;

int main() 
{

	//输入三个浮点数
	double a, b, c;
	cin >> a >> b >> c;

	//系数都为0
	if (a == 0 && b == 0 && c == 0) 
	{
		cout << "Zero Equation";
		return 0;
	}
	else if (a == 0 && b == 0 && c != 0)
	{
		//a，b为0，c不为0
		cout << "Not An Equation";
		return 0;
	}
	if (a == 0 && b != 0)
	{
		double result = -c / b;
		printf("%.2f", result);
		return 0;
	}

	double disc = b * b - 4 * a * c;

	if (disc == 0) {
		//判断方程的根：一个根
		double result = -b / (2 * a);
		printf("%.2f", result);
	}
	else if (disc > 0)
	{
		if (a == 0)
		{
			double result = -c / b;
			printf("%.2f", result);
			return 0;
		}
		//判断方程的根：两个不等的实数根，先大后小
		double t1 = -b / (2 * a);
		double t2 = sqrt(disc) / (2 * a);
		double r1 = t1 + t2;
		double r2 = t1 - t2;
		if (r1 > r2) 
		{
			printf("%.2f", r1);
			cout << endl;
			printf("%.2f", r2);
		}
		else
		{
			printf("%.2f", r2);
			cout << endl;
			printf("%.2f", r1);
		}
	}
	else
	{
		//判断方程的根：两个不等的复数根，虚部先正后负
		double a1 = -b / (2 * a);
		double b1 = sqrt(-disc) / (2 * a);
		if (a1 != 0) {
			printf("%.2f", a1);
			cout << "+";
			if (b1 != 1) {
				printf("%.2f", b1);
			}
			cout << "i" << endl;
			printf("%.2f", a1);
			cout << "-";
			if (b1 != 1) {
				printf("%.2f", b1);
			}
			cout << "i" << endl;
		}
		else {
			cout << 0 << "+";
			if (b1 != 1) {
				printf("%.2f", b1);
			}
			cout << "i" << endl;
			cout << "-";
			if (b1 != 1) {
				printf("%.2f", b1);
			}
			cout << "i" << endl;
		}
		

	}
	

	
	
	
}