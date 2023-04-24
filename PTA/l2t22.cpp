#include<iostream>
#include<iomanip>

using namespace std;

/*编写程序， 读入任一年份，
模拟挂历输出该年年历， 要求每两月并排显示。
每个日期占4位，左右月份间空8位，
标题位于相应中间位置，年历标题和每月后空一行。
星期几可通过与基准日相差天数求得，不所有简化公式，
如使用简化公式，需证明其正确性。
输入年份范围为1900~2100。*/

//#include<iomanip>
//		cout << setw(6) <<arr[i];


string week[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
string month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

//1. 获取某月第一天星期几
bool isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

void printYearHead(int year) {
	//输出日历标题
	cout << setw(30) << year << " Calendar" << endl;
	cout << endl << endl << endl;

	return;
}
void printMonthHead(int firstMonth,int secondMonth) {
	int time1,time2;//空格个数
	switch (firstMonth)
	{
	case 1: 
		time1 = 10;
		time2 = 30;
		break;
	case 3:
		time1 = 11;
		time2 = 32;
		break;
	case 5:
		time1 = 12;
		time2 = 34;
		break;
	case 7:
		time1 = 12;
		time2 = 32;
		break;
	case 9:
		time1 = 9;
		time2 = 29;
		break;
	case 11:
		time1 = 10;
		time2 = 30;
		break;
	default:
		break;
	}
	//输出月份标题
	for (int i = 0; i < time1; i++)
	{
		cout << " ";
	}
	cout << month[firstMonth - 1];
	for (int i = 0; i < time2; i++)
	{
		cout << " ";
	}
	cout << month[secondMonth - 1];
	cout << endl << endl;

	//输出星期名
	for (int i = 0; i < 7; i++)
	{
		cout << setw(4) << week[i];
	}
	cout << "        ";
	for (int i = 0; i < 7; i++)
	{
		cout << setw(4) << week[i];
	}
	cout << endl << endl;

	return;
}
int getDay(int year, int month) {
	if (month == 2)
	{
		if (isLeapYear(year))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return -1;
		break;
	}
}

//获取某月第一天是周几
int getWeek(int year, int month) {
	if (month > 12 || month < 1)
	{
		return -1;
	}
	int sum = 0;
	for (int i = 1900; i <= year; i++)
	{
		if (isLeapYear(i))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	}
	for (int i = 1; i < month; i++)
	{
		sum += getDay(year, i);
	}
	int week = sum % 7 + 1;
	return week;
}

//2. 输出
void printCalendar(int year) {
	//输出大标题
	printYearHead(year);
	
	for (int i = 1; i < 12; i = i + 2)
	{
		//输出月、星期标题
		printMonthHead(i, i + 1);

		//输出天
		int firOfMon1 = getWeek(year,i);
		int dayOfMon1 = getDay(year, i);
		int t1 = 1, t2 = 1;
		int firOfMon2 = getWeek(year, i + 1);
		int dayOfMon2 = getDay(year, i + 1);

		//控制一行输入7个
		int count1 = 0;
		int count2 = 0;

		//输出第一行
		//第一个月
		if (firOfMon1 > 0 && firOfMon1 < 7)
		{
			for (int j = 0; j < firOfMon1 - 1; j++)
			{
				count1++;
				cout << setw(4) << " ";
			}
		}
		else if (firOfMon1 == 7)
		{
			for (int j = 0; j < 6; j++)
			{
				count1++;
				cout << setw(4) << " ";
			}
		}
		for (int k = 0; k < 7 - count1; k++)
		{
			cout << setw(4) << t1;
			t1++;
		}
		cout << "        ";
		//第二个月
		if (firOfMon2 > 0 && firOfMon2 < 7)
		{
			for (int j = 0; j < firOfMon2 - 1; j++)
			{
				count2++;
				cout << setw(4) << " ";
			}
		}
		else if (firOfMon2 == 7)
		{
			for (int j = 0; j < 6; j++)
			{
				count2++;
				cout << setw(4) << " ";
			}
		}
		for (int k = 0; k < 7 - count2; k++)
		{
			cout << setw(4) << t2;
			t2++;
		}
		cout << endl << endl;



		//输出其他行
		while (dayOfMon1 >= t1 || dayOfMon2 >= t2)
		{
			if (t1 <= dayOfMon1)
			{
				for (int j = 0; j < 7; j++)
				{
					if (t1 < dayOfMon1)
					{
						cout << setw(4) << t1;
						t1++;
					}
					else if (t1 == dayOfMon1)
					{
						cout << setw(4) << t1;
						t1++;
						for (int k = 0; k < 8 - firOfMon2 && firOfMon2 != 1; k++)
						{
							cout << setw(4) << " ";
						}
						break;
					}
				}
			}
			else
			{
				for (int j = 0; j < 7; j++)
				{
					cout << setw(4) << " ";
				}
			}
			cout << "        ";
			if (t2 <= dayOfMon2)
			{
				for (int j = 0; j < 7; j++)
				{
					if (t2 <= dayOfMon2)
					{
						cout << setw(4) << t2;
						t2++;
					}
					else
					{
						break;
					}
				}
			}
			else
			{
				for (int j = 0; j < 7; j++)
				{
					cout << setw(4) << " ";
				}
			}
			cout << endl << endl;
		}
		cout << endl << endl;
	}


}

int main() {
	int year;
	cin >> year;
	printCalendar(year);
	return 0;
}

/*
                        2019 Calendar



          January                              February

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

           1   2   3   4   5                               1   2

   6   7   8   9  10  11  12           3   4   5   6   7   8   9

  13  14  15  16  17  18  19          10  11  12  13  14  15  16

  20  21  22  23  24  25  26          17  18  19  20  21  22  23

  27  28  29  30  31                  24  25  26  27  28



           March                                April

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

                       1   2               1   2   3   4   5   6

   3   4   5   6   7   8   9           7   8   9  10  11  12  13

  10  11  12  13  14  15  16          14  15  16  17  18  19  20

  17  18  19  20  21  22  23          21  22  23  24  25  26  27

  24  25  26  27  28  29  30          28  29  30

  31



            May                                  June

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

               1   2   3   4                                   1

   5   6   7   8   9  10  11           2   3   4   5   6   7   8

  12  13  14  15  16  17  18           9  10  11  12  13  14  15

  19  20  21  22  23  24  25          16  17  18  19  20  21  22

  26  27  28  29  30  31              23  24  25  26  27  28  29

                                      30



            July                                August

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

       1   2   3   4   5   6                           1   2   3

   7   8   9  10  11  12  13           4   5   6   7   8   9  10

  14  15  16  17  18  19  20          11  12  13  14  15  16  17

  21  22  23  24  25  26  27          18  19  20  21  22  23  24

  28  29  30  31                      25  26  27  28  29  30  31



         September                            October

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

   1   2   3   4   5   6   7                   1   2   3   4   5

   8   9  10  11  12  13  14           6   7   8   9  10  11  12

  15  16  17  18  19  20  21          13  14  15  16  17  18  19

  22  23  24  25  26  27  28          20  21  22  23  24  25  26

  29  30                              27  28  29  30  31



          November                            December

 Sun Mon Tue Wed Thu Fri Sat         Sun Mon Tue Wed Thu Fri Sat

                       1   2           1   2   3   4   5   6   7

   3   4   5   6   7   8   9           8   9  10  11  12  13  14

  10  11  12  13  14  15  16          15  16  17  18  19  20  21

  17  18  19  20  21  22  23          22  23  24  25  26  27  28

  24  25  26  27  28  29  30          29  30  31



*/