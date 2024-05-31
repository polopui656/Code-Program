#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int array[10];
	int mode[10][2];
	cout<<"Nhap 10 so nguyen"<<endl;
	// so thu tu cua so nguyen
	for(int l=0;l<10;l++)
	{
		cout<<"Gia tri "<<l<<" la : ";
		cin>>array[l];
	}
	
	// tim gia tri lon nhat va nho nhat
	int i,j,temp;
	// sap xep mang de tim gia tri lon nhat va nho nhat
	for(i=0;i<10;i++)
	for(j=9;j>i;j--)
	if(array[j]<array[j-i])
	{
		int temp=array[j];
		array[j]=array[i];
		array[j-i]=temp;
	}
	cout<<"Gia tri lon nhat="<<array[9]<<endl;
	cout<<"Gia tri nho nhat="<<array[0]<<endl;
	//khoi tao mang 2 chieu de sap xep tan suat va gia tri
	for(i=0;i<2;i++)
	for(j=0;j<10;j++)
	mode[j][i]=0;
	mode[0][0]=1;
	
	//tim tan xuat
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	if(array[i]==array[j+1])
	{
		++mode[i][0];
		mode[i][1]=array[i];
	}
	//im so lan xuat hien nhieu nhat
	int max;
	int k=0;
	max=mode[0][0];
	for(j=0;j<10;j++)
	if(max<mode[j][0])
	{
		max=mode[j][0];
		k=j;
	}
	//ket qua
	cout<<"gia tri xuat hien nhieu nhat la:"<<mode[k][1]<<endl;
	cout<<"Xuat hien "<<max<<" lan. ";
	cout<<endl;
	
	return 0;
}
