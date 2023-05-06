#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <math.h>

using namespace std;

bool cz1(int n)
{
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
bool liczba3(int a)
{
	if (a / 3 == 1 && a % 3 == 0) {
		return true;
	}
	return false;
}
bool wynik(int b)
{
	if (b == 2) {
		return true;
	}
	return false;
}

int main()
{
	int licznik3, cyfra,i2;
	for (int i = 2; i <= 10000; i++) {
		i2 = i;
		if (cz1(i)) {
			licznik3 = 0;
			while (i2 >= 1) {
				cyfra = i2 % 10;
				if (liczba3(cyfra)) {
					licznik3++;
				}
				i2 /= 10;


			}
			if (wynik(licznik3)) {
				cout << i << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}