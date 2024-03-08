#include <cstring>
#include "Student.h"

int CompareName(Student s1, Student s2)
{
    if (strcmp(s1.returnName(), s2.returnName()) == 0) return 0;
    if (strcmp(s1.returnName(), s2.returnName()) < 0) return -1;
    if (strcmp(s1.returnName(), s2.returnName()) > 0) return 1;
}

int CompareMath(Student s1, Student s2)
{
    if (s1.returnMath() == s2.returnMath()) return 0;
    if (s1.returnMath() < s2.returnMath()) return -1;
    if (s1.returnMath() > s2.returnMath()) return 1;
}


int CompareEnglish(Student s1, Student s2)
{
    if (s1.returnEnglish() == s2.returnEnglish()) return 0;
    if (s1.returnEnglish() < s2.returnEnglish()) return -1;
    if (s1.returnEnglish() > s2.returnEnglish()) return 1;
}


int CompareHistory(Student s1, Student s2)
{
    if (s1.returnHistory() == s2.returnHistory()) return 0;
    if (s1.returnHistory() < s2.returnHistory()) return -1;
    if (s1.returnHistory() > s2.returnHistory()) return 1;
}


int CompareAverageGrade(Student s1, Student s2)
{
    if (s1.returnAverageGrade() == s2.returnAverageGrade()) return 0;
    if (s1.returnAverageGrade() < s2.returnAverageGrade()) return -1;
    if (s1.returnAverageGrade() > s2.returnAverageGrade()) return 1;
}
