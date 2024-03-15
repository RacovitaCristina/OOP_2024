#include "Math.h"
//#include <stdarg.h>
#include <cstdarg>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;

}

int Math::Add(int a, int b,int c)
{
	return a + b+c;

}

int Math::Add(double a, double b)
{
	return (int)(a + b);

}

int Math::Add(double a, double b,double c)
{
	return (int)(a + b + c);

}



int Math::Mul(int a, int b)
{
	return a * b;

}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;

}

int Math::Mul(double a, double b)
{
	return (int)(a * b);

}

int Math::Mul(double a, double b, double c)
{
	return (int)(a * b * c);

}


int Math::Add(int count, ...)
{
	va_list a;
	va_start(a, count);

	int sum = 0;
	for (int i = 0; i < count; i++)
		sum += va_arg(a, int);

	va_end(a);
	return sum;


}

char* Math::Add(const char* s1, const char* s2)
{
	int n1=0, n2=0, i;
	if (s1 == nullptr || s2 == nullptr) return nullptr;
	char S1[200], S2[200];
	strcpy_s(S1, s1);
	strcpy_s(S2, s2);
	for (i = 0; S1[i] != 0; i++)
		n1++;
	for (i = 0; S2[i] != 0; i++)
		n2++;
	 
	 int M;
	 char* sum = new char[400];
	 char zero[200];
	 if (n1 > n2)
	 {
		 M = n1;
		 for (i = 0; i < n1 - n2; i++)
			 zero[i] = '0';
		 zero[n1 - n2] = 0;
		 strcat_s(zero, S2);
		 strcpy_s(S2, zero);
	 }
	 else
	 {
		 M = n2;
		 for (i = 0; i < n2 - n1; i++)
			 zero[i] = '0';
		 zero[n2 - n1] = 0;
		 strcat_s(zero, S1);
		 strcpy_s(S1, zero);
	 }
	 int t = 0;///transport
	 for (i = M - 1; i >= 0; i--)
	 {
		 int val = (S1[i] - '0') + (S2[i] - '0') + t;
		 if (val > 9)
		 {
			 t = 1;
			 val -= 10;
		 }
		 else t = 0;
		 sum[i] = val + '0';
	 }
	 sum[M] = 0;
	 if (t == 1)
	 {
		 for (i = M - 1; i >= 0; i--)
			 sum[i + 1] = sum[i];
		 M++;
		 sum[0] = '1';
		 sum[M] = 0;
	 }
	 return sum;
}
