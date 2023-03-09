//#include<iostream>
//
//using namespace std;
//
//int main() {
//	//输入年份和月份
//	int y, m,d;
//	cin >> y >> m;
//
//	if (m == 2)
//	{
//		if (y % 400 == 0 || y % 4 == 0) {
//			//是闰年
//			d = 29;
//		}
//		else
//		{
//			//不是闰年
//			d = 28;
//		}
//	}
//	else
//	{
//		switch (m)
//		{
//		case 1: d = 31; break;
//		case 3: d = 31; break;
//		case 4: d = 30; break;
//		case 5: d = 31; break;
//		case 6: d = 30; break;
//		case 7: d = 31; break;
//		case 8: d = 31; break;
//		case 9: d = 30; break;
//		case 10: d = 31; break;
//		case 11: d = 30; break;
//		case 12: d = 31; break;
//		default:
//			break;
//		}
//	}
//
//	cout << "year = " << y << " month = " << m << " days=" << d << endl;
//
//
//
//	
//
//
//}