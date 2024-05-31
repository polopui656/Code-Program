#include <stdio.h>
#include <stdlib.h>
int n;
int mynumberrand(int min,int max);

int main()
{
		int n,i,j,mi,s=0;
		int ma,count,max=0,min=0;
		printf("n: ");
   		scanf("%d",&n);
   		printf("min: ");
   		scanf("%d",&mi);
    	printf("max: ");
   		scanf("%d",&ma);
   		int a[n];
   		for(i=0;i<n;i++)
		   {
		   		a[i]=mynumberrand(mi,ma);
		   		printf("%d\t",a[i]);
		   		if(a[i]%2==1||a[i]%2==-1)
		   		s+=a[i];
		   		
				
		   }
		   
		   printf("\nsum_odd is %d\t",s);
		   for(i=0;i<n-1;i++)
	   			for(j=i+1;j<n;j++)
				   if(a[i]<a[j]){
				      min=a[i];
				      a[i]=a[j];
				      a[j]=min;
	  		 }
	  	 printf("\nmin is %d\t",min);

			for(i=0;i<n-1;i++)
			   	for(j=i+1;j<n;j++)
				   if(a[i]>a[j]){
				      max=a[i];
				      a[i]=a[j];
				      a[j]=max;
			  		 }
			  	 printf("\nmax is %d\t",max);
     return 0;
}

int mynumberrand(int min,int max)
{ 
	n=min+rand()%(max+1-min);
  	return n;
}

