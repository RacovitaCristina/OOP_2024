#pragma once
class Student
{	private:
		char name[10];
		double math, english, history;
		double averageGrade;
	public:
		void SetName(char n[]);
		char* returnName();
		bool SetMath(double mark);
		double returnMath();
		bool SetEnglish(double mark);
		double returnEnglish();
		bool SetHistory(double mark);
		double returnHistory();
		double returnAverageGrade();
	
};

