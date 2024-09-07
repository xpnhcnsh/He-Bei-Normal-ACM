#include<iostream>
using namespace std;
bool jg(long long s, int a1, int a2, int a3, int a4, int a5, int a6)
{
	long long x = s;
	int m;
	while (x != 0)
	{
		m = x % 10;
		if (m == a1 || m == a2 || m == a3 || m == a4 || m == a5 || m == a6)
			return false;
		x = x / 10;
	}
	return true;
}

int main(void)
{
	long long a, sum;
	for (int a1 = 1; a1 < 10; a1++)
	{
		for (int a2 = 0; a2 < 10; a2++)
		{
			if (a1 != a2) {
				for (int a3 = 0; a3 < 10; a3++)
				{
					if (a3 != a1 && a3 != a2) {
						for (int a4 = 0; a4 < 10; a4++)
						{
							if (a4 != a1 && a4 != a2 && a4 != a3) {
								for (int a5 = 0; a5 < 10; a5++)
								{
									if (a5 != a1 && a5 != a2 && a5 != a3 && a5 != a4) {
										for (int a6 = 0; a6 < 10; a6++)
										{
											if (a1 != a6 && a2 != a6 && a3 != a6 && a4 != a6 && a5 != a6)
											{
												a = a1 * 100000 + a2 * 10000 + a3 * 1000 + a4 * 100 + a5 * 10 + a6;
												sum = a * a;
												if (jg(sum, a1, a2, a3, a4, a5, a6) && a > 203879)
												{
													cout << a << endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
