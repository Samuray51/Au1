#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
int main()
{
	/*int n,a,b;
	float max = 0,k=0;
	FILE *in;
	fopen_s(&in, "input.txt", "r");
	fscanf_s(in, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf_s(in, "%d", &a);
		fscanf_s(in, "%d", &b);
		if (b >= 0)
		{
			printf("%d+%di\n", a, b);
		}
		else
		{
			printf("%d%di\n", a, b);
		}
		k = sqrt(a*a + b * b);
		if (k > max)
		{
			max = k;
		}
	printf("max= %f\n", max);
	}
	fclose(in);
	system("pause");
	return 0;*/




	int n;
	char *mas;
	scanf_s("%d", &n);
	mas = (char*)malloc(n * sizeof(char));
	for (int i = 0; i < n + 1; i++)
	{
		if (i < 0)
		{
			i = 0;
		}
		mas[i] = _getch();
		if(mas[i] == '\b')
		{
			printf("\b \b");
			i = i - 2;
			continue;
		}
		if (mas[i] == 0x0D && i == n) {
			break;
		}
		else if (mas[i] == 0x0D)
		{
			i = i - 1;
			continue;
		}
		if (mas[i] == (char)-32 || mas[i] == (char)83) 
		{
			i = i - 1;
			continue;
		}
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%c ", mas[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}