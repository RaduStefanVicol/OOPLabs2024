#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

long long int  i, i2, n, s=0;
char sir[103];
int fun(char a[], long long int poz);
int main()
{   
	FILE* file;
	auto succes = fopen_s(&file, "in.txt", "r");
	if (file == NULL) {
		printf("File - Opening Error!");
		return 0;
	}
	while (fgets(sir, 100, file))
	{
		n = strlen(sir);
		for (i = 0; i < n; i++)
		{
			if (sir[i] >= '0' && sir[i] <= '9')
			{
				int aux = fun(sir, i);
				printf("%d\n", aux);
				s += aux;
			}
		}
	
	}
	
	printf("%d\n", s);
	fclose(file);

	return 0;
}
int fun(char sir[],long long int poz)
{
	i = poz; long long int nr = 0;
	while (sir[i] >= '0' && sir[i] <= '9')
	{
		nr = nr*10 + long long(sir[i] - '0');
		i++;
	}
	return nr;
}