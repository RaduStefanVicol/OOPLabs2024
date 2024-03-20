#include "Math.h"
#include <cstring>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <cmath>
#include <iostream>
int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b, int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return a + b;
}
int Math::Add(double a, double b, double c)
{
	return a + b + c;
}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a, int b,int c)
{
	return a * b * c;
}
int Math::Mul(double a, double b)
{
	return a * b;
}
int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}
int Math::Add(int count, ...)// sums up a list of integers
{
	int sum = 0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++) {
		sum = sum + va_arg(vl, int);
	}
	va_end(vl);
	
	return sum;
}
char* Math::Add(const char* a,const char* b)
{
	int lga = strlen(a)-1;
	int lgb = strlen(b)-1;
	int lgmax,lg2;
	if (lga > lgb)
	{
		lgmax = lga;
		lg2 = lgb;
	}
	else {
		lgmax = lgb;
		lg2 = lga; 
	}
	char * rez = new char[lgmax+5];
	for (int i = 0; i <= lgmax; i++)
		rez[i] = '0';
	int i, cif, cif2, cri, sc, i2=lg2;
	for (i = lgmax; i >= 0; i--)
	{
		sc = 0; cri = 0;
		if (lga > lgb)
		{
			cif = int(a[i] - '0');
			if (i2>=0)
			cif2 = int(b[i2] - '0'); 
		}
		else {
			cif = int(b[i] - '0');
			if (i2>=0)
			cif2 = int(a[i2] - '0');
		}
		if (i2 < 0)
			cif2 = 0;
		sc = cif + cif2;
		if (sc > 9)
		{
			cri = 1;
			sc = sc % 10;
		}
		//std::cout << cif << ' ' << cif2 << ' ' << sc << ' ' << cri << std::endl;
		rez[i] = rez[i] + sc;
		if (i > 0) 
		   rez[i-1] = rez[i-1] + cri;
		i2--;
	}
	if (cri == 1)
	{   
		for (int k = lgmax + 1; k > 0; k--)
			rez[k] = rez[k - 1];
		rez[0] = '1';
		lgmax++;
	}
	if (rez[0] == '0')
	{
		for (int k = 0; k < lgmax; k++)
			rez[k] = rez[k + 1];
		lgmax--;
	}

	rez[lgmax + 1] = '\0';
	return rez;
}
//static char* Add(const char*, const char*);
