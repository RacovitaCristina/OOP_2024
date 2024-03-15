#include <iostream>
#include "Math.h"
using namespace std;

int main()
{
	cout << Math::Add(2, 5) << "\n";
	cout<<Math::Add(2, 5, 6)<< "\n";
	cout<<Math::Add(2.5, 5.3)<< "\n";
	cout<<Math::Add(2.5, 5.3, 6.2)<< "\n";
	cout <<Math::Mul(2, 3)<< "\n";
	cout <<Math::Mul(2, 6, 9)<< "\n";
	cout <<Math::Mul(2.5, 2.3)<< "\n";
	cout <<Math::Mul(2.5, 5.6, 2.3)<< "\n";
	cout << Math::Add(3,1,2,5)<< "\n";
	cout << Math::Add("14", "2");
	return 0;

}