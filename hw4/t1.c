#include <stdio.h>

int main()
{
	int ipt;
	printf("键入任意数：");
	scanf("%d", &ipt);
	if (ipt % 5 == 0)
	{
		printf("Yes.");
	}
	else if (ipt % 7 == 0)
	{
		printf("Yes.");
	}
	else
	{
		printf("No.");
	}
}
