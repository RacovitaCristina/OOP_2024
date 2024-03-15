#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
	Canvas c(40, 40);
	c.DrawRect(10, 10,20,20, 'A');
	c.FillRect(11, 11, 19, 19, 'B');
	c.Print();
	c.Clear();

	c.SetPoint(15, 5, 'C');
	c.Print();
	c.Clear();

	c.DrawCircle(15, 15, 5, 'Z');
	c.Print();
    c.Clear();
	c.FillCircle(30, 30, 5, 'X');
	c.Print();
	c.Clear();

	c.DrawLine(7, 7, 10, 10, 'Y');
	c.Print();
	c.Clear();
	return 0;

}