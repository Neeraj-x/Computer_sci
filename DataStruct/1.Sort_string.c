#include <stdio.h>
#include<conio.h>
int main()
{
	char bin[5][20];
	int i,j;
	printf("Enter the names to sort:\n\n");
	for(i=0; i<5;i++)
		scanf("%s",&bin[i]);
	printf("sorted list of names:\n\n");
	for(i=65; i<122; i++)
	{
		for(j=0; j<5; j++)
		{
			if(bin[j][0]==i)
				printf("\n%s",bin[j]);
		}
	}
}
