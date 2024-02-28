#include <iostream>
using namespace std;

int main()
{
	int x,S=0;
	FILE* fp;
	if (fopen_s(&fp, "in.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");
		char myString[200];
		/*
		if (fgets(myString, 200, fp))
		{
			printf("Am citit din fisier: %s\n", myString);
		}
		*/
		while (fgets(myString, 200, fp))
		{
			myString[strlen(myString) - 1] = '\0';
			printf("Am citit din fisier: %s\n", myString);
		}
		while (fgets(myString, 200, fp))
		{
			for (int i = 0;i < strlen(myString);i++)
				if (myString[i] >= '0' && myString[i] <= '9')
					x = x * 10 + myString[i] - '0';
			S = S + x;

		}
	}
	printf("Suma: %s\n", S);
	printf("\n\n");

}