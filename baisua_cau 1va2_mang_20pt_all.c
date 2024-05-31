#include <stdio.h>
#include <string.h>
void Nhap(int a[]);
void Xuat(int a[]);

void Xuat(int a[])
{
		int i,n;
		for (i=0; i<n;i++){
    			printf("a[%d]=%d\n",i+1,a[i]);
			}

}

void Nhap(int a[])
{
/*
			printf(" Nhap n=20 :");
    		scanf("%d",N);
    		*/
    		
    		int n=20;
    		int i;
    		a[19]=n-1;
    		a[9]=(n/2);
    		for (i=0; i<n-11;i++){
    			a[i]=22;
			}
		
			do
			{
				a[i]=i;
				i++;
			
			}while(i>=n/2 && i<=n-2);
    
}

int tong_chan_6den18(int a[])
{
	int i,s=0;
		for (i=5; i<=17;i++){
    			if(a[i]%2==0)
    			{
    				s+=a[i];
				}
			
			}
		return s;
}

int tim_vo_le(int a[])
{
	int i,s=0;
	int b[20];
		int j=0;
	int count=0;
	
		for (i=0; i<20;i++){
    			if(a[i]%2==1)
    			{
    				b[j]=a[i];
    				//printf("\nb[%d] =%d\n",j,b[j]);
    				count++;
    				j++;
    				
				}
			
	    }
			printf("\ncount=%d\n",count);
		int x,y;
		int t,min;
			for(y=0;y<count-1;y++)
			
				//printf("\nb[%d] =%d\n",y,b[y]);
				
				for (x=count-1; x>y ; x--)
					if (b[x] < b[x-1])
						{ 
							t = b[x];
							b[x]= b[x-1];
							b[x-1] = t;
						}
				for (i=0; i<count; i++)	
					min=b[0];
					//printf("%3d",b[i]);
			
					
			//	printf("\nmin =%d\n",min);
		return min;
}

void tim_min_max(int a[])
{
	int i,s=0;
	int b[20];
		int j=0;
	int count=0;
	
		for (i=0; i<20;i++){
    			if(a[i]%2==1)
    			{
    				b[j]=a[i];
    				//printf("\nb[%d] =%d\n",j,b[j]);
    				count++;
    				j++;
    				
				}
			
	    }
			printf("\ncount=%d\n",count);
		int x,y;
		int t,min,max;
			for(y=0;y<count-1;y++)
			
				//printf("\nb[%d] =%d\n",y,b[y]);
				
				for (x=count-1; x>y ; x--)
					if (b[x] < b[x-1])
						{ 
							t = b[x];
							b[x]= b[x-1];
							b[x-1] = t;
						}
				for (i=0; i<count; i++)	
					min=b[0];
					max=b[count-1];
					printf("min =%3d;max=%3d",min,max);
	}

int main()
{
	int n=20;
	int a[n];
	Nhap(a);
	Xuat(a);
	int tong=tong_chan_6den18(a);
	printf("Tong cac phan tu chan tu pt 6 den pt 18 la %d\t",tong);
int minimum=tim_vo_le(a);
	printf("Phan tu le nho la %d\t",minimum);
	
	tim_min_max(a);
	return 0;		
}

