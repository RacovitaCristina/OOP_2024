#include "Sort.h"
#include <iostream>
#include <stdarg.h>
#include <stdlib.h>
#include <cstring>
#include <time.h>
using namespace std;



Sort::Sort(int nr_elemente, int minval, int maxval):vector(new int[201])
{
	this->nr_elemente = nr_elemente;
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++) {
		this->vector[i]= minval + rand() % (maxval - minval + 1);
		
	}
}

Sort::Sort(int* v, int nr_elemente):vector(new int[nr_elemente])
{
	int i;
	this->nr_elemente = nr_elemente;
	for (i = 0; i < nr_elemente; i++)
		vector[i]=v[i];

}

Sort::Sort(int count, ...):vector(new int[201])
{
	int aux;
	this->nr_elemente = count;
	va_list vl = nullptr;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		aux = va_arg(vl, int);
		vector[i] = aux;
		
	}
	va_end(vl);

}

Sort::Sort(char* s):vector(new int[nr_elemente])
{
	
	int nr = 0,i,k,count=0;
	bool sign = 0;///0->+,1-> -
	for (i = 0; s[i] != 0; i++)
		if (s[i] == ',')
		{
			if (sign == 1)
			{
				nr =nr*(- 1); sign = 0;
			}
			
			this->vector[count++] = nr;
			nr = 0;
		}
		else if (s[i] == '-') sign = 1;
		     else nr = nr * 10 + (s[i] - '0');
	       
	if (sign == 1) nr *= -1;
	this->vector[count++] = nr;

	this->nr_elemente = count;

}

void Sort::InsertSort(bool ascendent)
{
	int var,i,aux,j;
	if (ascendent == false) var = 1;
	else var = -1;
	for (i = 0; i < this->nr_elemente; i++)
	{
		aux = this->vector[i];
		j = i - 1;
		while (j >= 0 && var * this->vector[j] < var * aux)
		{
			this->vector[j + 1] = this->vector[j];
			j--;
		}
		this->vector[j + 1] = aux;

	}
}


int Pivotare(int* a, int st, int dr, bool ascendent)
{
	int var, aux1, aux2;
	int i, j, pasi, pasj;
	if (ascendent == 0) var = 1;
	else var = -1;
	i = st; j = dr;
	pasi = 0; pasj = 1;
	while (i < j)
	{
		if (var * a[i] < var * a[j])
		{
			aux1 = a[i];
			a[i] = a[j];
			a[j] = aux1;

			aux2 = pasi;
			pasi = pasj;
			pasj = aux2;


		}
		i += pasi;
		j -= pasj;

	}

	return i;
}



void QS(int* a, int st, int dr, bool ascendent)
{
	int p;
	if (st < dr)
	{
		p = Pivotare(a, st, dr, ascendent);
		QS(a, st, p - 1, ascendent);
		QS(a, p + 1, dr, ascendent);


	}

}

void Sort::QuickSort(bool ascendent)
{ 
	QS(this->vector, 0, this->nr_elemente - 1, ascendent);
}



void Sort::BubbleSort(bool ascendent)
{
	if (ascendent == 1)
	{
		int i;
		bool ok = 0;
		while (ok == 0)
		{
			ok = 1;
			for (i = 0; i <this-> nr_elemente - 1; i++)
				if (this->vector[i] > this->vector[i + 1])
				{
					ok = 0;
					swap(this->vector[i], this->vector[i + 1]);

				}

		}


    }
	else
	{

		int i;
		bool ok = 0;
		while (ok == 0)
		{
			ok = 1;
			for (i = 0; i < this->nr_elemente - 1; i++)
				if (this->vector[i] < this->vector[i + 1])
				{
					ok = 0;
					swap(this->vector[i], this->vector[i + 1]);

				}

		}


	}

}

void Sort::Print()
{
	int i;
	for (i = 0; i < this->nr_elemente; i++)
		cout << this->vector[i] << " ";

}

int Sort::GetElementsCount()
{
	return this->nr_elemente;
}

int Sort::GetElementFromIndex(int index)
{
	if (index >= 0 && index <= this->nr_elemente - 1)
		return this->vector[index];
	else return -1;
}
