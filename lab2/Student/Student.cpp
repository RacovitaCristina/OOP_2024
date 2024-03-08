#include "Student.h"
#include <stdio.h>
#include <cstring>

void Student::SetName(char n[])
{
	strcpy_s(this->name, n);
}

char* Student::returnName()
{
	return this->name;
}

bool Student::SetMath(double mark)
{
	if (mark < 1 || mark>10) return false;
	else
	{
		this->math = mark;
		return true;
	}
}

double Student::returnMath()
{
	return this->math;
}

bool Student::SetEnglish(double mark)
{
	if (mark < 1 || mark>10) return false;
	else
	{
		this->english = mark;
		return true;
	}
}

double Student::returnEnglish()
{
	return this->english;
}



bool Student::SetHistory(double mark)
{
	if (mark < 1 || mark>10) return false;
	else
	{
		this->history = mark;
		return true;
	}
}

double Student::returnHistory()
{
	return this->history;
}

double Student::returnAverageGrade()
{
	this->averageGrade = (this->math + this->english + this->history) / 3.0;
	return this->averageGrade;

}