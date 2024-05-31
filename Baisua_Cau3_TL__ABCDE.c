#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n=5;
		int a[n];
		int A,B,C,D,E;
		int i,j,count,max=0,min=0;
		printf("A: ");
   		scanf("%d",&A);
   		a[0]=A;
   		printf("B: ");
   		scanf("%d",&B);
   		 		a[1]=B;
   		printf("C: ");
   		scanf("%d",&C);
   			a[2]=C;
   		printf("D: ");
   		scanf("%d",&D);
   		a[3]=D;
   		printf("E: ");
   		scanf("%d",&E);
   		a[4]=E;
  
		   for(i=0;i<n-1;i++)
	   			for(j=i+1;j<n;j++)
				   if(a[i]>a[j]){
				      min=a[i];
				      a[i]=a[j];
				      a[j]=min;
				      
	  		 }
	  	
				for(i=0;i<n;i++)
	   			  	 printf("\n %d truc thu %d \n",a[i],i+2);
	   			  	 
	  		 
	
     return 0;
}


