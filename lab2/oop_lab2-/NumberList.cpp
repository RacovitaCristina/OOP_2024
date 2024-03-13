#include "NumberList.h"
#include <stdio.h>

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	this->count++;
	if (this->count >= 10) return false;
	return true;

}
void NumberList::Sort()
{
	int i,j,aux;
	bool ok = 0;
	while(!ok)
	{
		ok = 1;
		for (i = 0;i < this->count - 1;i++)
		if (this->numbers[i] > this->numbers[i+1])
		{
			aux = this->numbers[i];
			this->numbers[i] = this->numbers[i+1];
			this->numbers[i+1] = aux;
			ok = 0;
		}
	}

}
void NumberList::Print()
{
	int i;
	for (i = 0;i < this->count;i++)
		printf("%d ", this->numbers[i]);
	printf("\n");

}