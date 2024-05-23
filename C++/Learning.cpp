#include <stdio.h>
#include <conio.h>

int main()
{
	int i,n;
	float S;
	S=0.0;
	i=1.0;
	do
	{
		printf("Nhap so n:");
		scanf("%d",&n);
		if(n<i)
		{
			printf("\n n phai lon hon hay bang 1");
		}
	}while(n<i);
	
	while(i<=n)
	{
		S=S+1.0/i;
		i++;
	}
	printf("\n i = %d", i);
	printf("\n n = %d", n);
	printf("\n S=1+1/2+1/4+...+%d la %f",n ,S );
	getch();
	return 0;
}
