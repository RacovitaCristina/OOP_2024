#include "Student.h"
#include <stdio.h>
#include <iostream>
#include "Global.h"
using namespace std;

int main()
{
	Student s1, s2;
	char name1[10], name2[10];
	cin >> name1 >> name2;
	s1.SetName(name1);
	s2.SetName(name2);
	double math1, math2;
	double english1, english2;
	double history1, history2;
	cin >> math1 >> math2;
	s1.SetMath(math1);
	s2.SetMath(math2);
	cin >> english1 >> english2;
	s1.SetEnglish(english1);
	s2.SetEnglish(english2);
	cin >> history1 >> history2;
	s1.SetHistory(history1);
	s2.SetHistory(history2);
	cout << CompareName(s1, s2) << "\n";
	cout << CompareMath(s1, s2) << "\n";
	cout << CompareEnglish(s1, s2) << "\n";
	cout << CompareHistory(s1, s2) << "\n";
	cout << CompareAverageGrade(s1, s2);


	return 0;

}