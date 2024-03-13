#include "NumberList.h"
#include <stdio.h>
using namespace std;

int main()
{
	int x;
	NumberList v;
	v.Init();
	v.Add(12);
	v.Add(25);
	v.Add(26);
	v.Add(0);
	v.Sort();
	v.Print();

}