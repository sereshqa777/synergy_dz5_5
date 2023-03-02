#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int mas[100][100];
	int n,m;

	printf("n=");
	scanf("%d", &n);
	
	printf("m=");
	scanf("%d", &m);
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%i",&mas[i][j]);
		}
	}
	printf("=================VVOD=================\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",mas[i][j]);
		}
		printf("\n\n");
	}
	for(int j=0;j<m;j++)
	{
		for(int t=0;t<n;t++)
		{
			for(int i=0;i<n-1;i++)
			{
				if(mas[i][j]>mas[i+1][j])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i+1][j];
					mas[i+1][j]=q;
				}
			}
		}
	}
	printf("\n\n\n\n");
	printf("=================VIVOD=================\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%3d",mas[j][i]);
		}
		printf("\n\n");
	}
}
