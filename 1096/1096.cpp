// 1096.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int year = 1777, mon = 4, day = 30;//������ʼ����
	int d;//��������
	bool isLeapYear = 0;//��������
	for (d = 1; d < 8113; d++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//���Ƿ���������жϣ���������1����֮Ϊ0
		{
			isLeapYear = 1;
		}
		else
		{
			isLeapYear = 0;
		}
		if (isLeapYear == 1 && mon == 2 && day == 29)//����������2�£�����29�죬����������·��Լ�Ϊ3��������1
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
		else//�����Լ�
		{
			day++;
		}
	}
	cout << year << "-" << "0" << mon << "-" << day;
	return 0;
}
