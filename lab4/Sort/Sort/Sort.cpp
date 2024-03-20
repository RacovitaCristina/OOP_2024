#include "Sort.h"
#include <iostream>
using namespace std;



Sort::Sort(int nr_elemente, int minval, int maxval)
{
	this->vector = new int[200];
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++) {
		this->vector[i]= minval + rand() % (maxval - minval + 1);
		
	}
}

Sort::Sort(int* vector, int nr_elemente)
{
	vector = new int[200];
	int i;
	for (i = 0; i < this->nr_elemente; i++)
		this->vector[i] = i;

}

Sort::Sort(int count, ...)
{
	va_list vl = nullptr;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		
	}
	va_end(vl);

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
				if (strlen(this->vector[i]) > strlen(this->vector[i + 1]))
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
				if (strlen(this->vector[i]) < strlen(this->vector[i + 1]))
				{
					ok = 0;
					swap(this->vector[i], this->vector[i + 1]);

				}

		}


	}

}

void Sort::Print()
{
	int i, j;
	for (i = 0; i < this->nr_elemente; i++)
		cout << this->vector[i] << " ";

}
