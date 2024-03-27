#include <iostream>
#include "Sort.h"
#include <stdlib.h>

using namespace std;

int main()
{
	int v[3] = { 1 , 2 , 3 };
	Sort a(7, 2, 50);
	a.Print();
	cout << "\n";

	a.BubbleSort(false);
	a.Print();
	cout << "\n";
	a.QuickSort(true);
	a.Print();
	cout << "\n";
	a.InsertSort(false);
	a.Print();
	cout << "\n";

	Sort b(5,10,40,25,5,40);
	b.Print();
	cout << "\n";

	Sort c(v, 3);
	c.Print();
	cout << "\n";

	cout << b.GetElementFromIndex(0) << " " << b.GetElementsCount();
	cout << "\n";

	char* s = new char[201] {"10,4,100,70"};
	Sort d(s);
	d.Print();
	cout << "\n";

	Sort e;
	e.Print();
   return 0;
}

