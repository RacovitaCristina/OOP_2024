#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
char cuv[100][100];
char text[100];
int n;

void Ordonare()
{
	int i;
	bool ok = 0;
	char aux[100];
	while (ok == 0)
	{
		ok = 1;
		for (i = 0;i < n - 1;i++)
			if (strlen(cuv[i]) < strlen(cuv[i + 1]))
			{
				ok = 0;
				strcpy(aux, cuv[i]);
				strcpy(cuv[i], cuv[i + 1]);
				strcpy(cuv[i + 1], aux);

			}
			else if (strlen(cuv[i]) == strlen(cuv[i + 1]))
				if (strcmp(cuv[i], cuv[i + 1]) > 0)
				{
					ok = 0;
					strcpy(aux, cuv[i]);
					strcpy(cuv[i], cuv[i + 1]);
					strcpy(cuv[i + 1], aux);
				}


	}

}

int main()
{
	int i;
	scanf("%[^\n]", text);
	char* p = strtok(text, " ");
	while (p != 0)
	{
		strcpy(cuv[n], p);
		n++;
		p = strtok(NULL, " ");
	}
	Ordonare();
	for (i = 0; i < n; i++)
		printf("%s\n", cuv[i]);

	return 0;

}
