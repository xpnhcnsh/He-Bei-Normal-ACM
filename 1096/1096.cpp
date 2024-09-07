// 1096.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int year = 1777, mon = 4, day = 30;//定义起始日期
	int d;//定义天数
	bool isLeapYear = 0;//定义闰年
	for (d = 1; d < 8113; d++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//对是否闰年进行判断，若是则置1，反之为0
		{
			isLeapYear = 1;
		}
		else
		{
			isLeapYear = 0;
		}
		if (isLeapYear == 1 && mon == 2 && day == 29)//如果是闰年的2月，则有29天，过了这天后，月份自加为3，日期置1
		{
			mon++;
			day = 1;
		}
		else if (isLeapYear == 0 && mon == 2 && day == 28)
		{
			mon++;
			day = 1;
		}
		else if ((mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10) && day == 31)
		{
			mon++;
			day = 1;
		}
		else if ((mon == 4 || mon == 6 || mon == 9 || mon == 11) && day == 30)
		{
			mon++;
			day = 1;
		}
		else if (mon == 12 && day == 31)
		{
			year++;
			mon = 1;
			day = 1;
		}
		else//日期自加
		{
			day++;
		}
	}
	cout << year << "-" << "0" << mon << "-" << day;
	return 0;
}
