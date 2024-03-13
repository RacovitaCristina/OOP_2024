#include <iostream>
using namespace std;

int main()
{
	int x,S=0;
	FILE* fp;
		char* sir=new char[200];
		fopen_s(&fp, "in.txt", "r");
		if (fp == NULL)
			printf("Nu merge");
		
		else while (fgets(sir, 100, fp))
		{

			x = 0;
			for (int i = 0; sir[i] != NULL; i++) 
				if(sir[i] >= '0' && sir[i] <= '9')
					x = x * 10 + sir[i] - '0';
			S += x;
		}
		printf("%d",S);


}