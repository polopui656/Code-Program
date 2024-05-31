#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
	int i;
	for (i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	FILE *f1, *f2;
	int n;
	f1 = fopen("D:/songuyento.txt","wt");
	f2 = fopen("D:/songuyen.txt","rt");
	if(f1== NULL || f2 ==NULL)
		printf("Tao va doc file khong thanh cong!");
	else
	{
		while(!feof(f2))
		{
			fscanf(f2,"%d",&n);
			if(isPrime(n))
				fprintf(f1,"%d ",n);
		}
	}
	fclose(f1); 
	fclose(f2);
	return 0;
}
