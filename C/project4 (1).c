#include <stdio.h>
#include <string.h>
struct MatHang

{
    char Mahang[10];
    char Tenhang[50];
    char Donvitinh[10];
    int Soluong;
    float GiaBan;
  
};
typedef struct MatHang ArrMatHang;
void XuatMatHang(ArrMatHang a[],int N);
void XuatMatHangTheoMa(ArrMatHang a[],int N, char[10]);
void NhapHang(ArrMatHang a[],int N);
void SuaThongTinMatHang(ArrMatHang a[],int N,int Ma);
void XoaThongTinMatHang(ArrMatHang a[],int N,int Ma);
void MenuChinh()
{
	printf("=========HE THONG QUANG LY MAT HANG===========\n");
	printf("0. thoat khoi he thong quan ly\n");
	printf("1. Quan ly Mat Hang\n");
	
	printf("==============================================\n");
	
}
void MenuquanlyArrMatHang(){
	printf("=========QUAN LY MAT HANG===========\n");
	printf("0. thoat khoi chuong trinh\n");
	printf("1. Nhap thong tin ve mat Hang\n");
	printf("2. Xuat mat Hang\n");
	printf("3. Tim thong tin theo ma Hang\n");
	printf("4. Sua thong tin theo ma Hang\n");
	printf("5. Xoa thong tin theo ma Hang\n");
	printf("6. In ra mat ArrMatHang co so luong ban nhieu nhat\n");
	printf("7. In mat ArrMatHang co doanh thu ban nho nhat\n");
	printf("8. In ra thu tu danh sach mat Hang giam dan\n");
	printf("==============================================\n");
}
void XuatMatHang(ArrMatHang a[],int N)
{
	{
	int i;
	for (i=0;i<N;i++){
		printf("%d \t %s \t %s \t %d \t %d",a[i].Mahang,a[i].Tenhang,a[i].Donvitinh,a[i].Soluong,a[i].GiaBan);
	}
	}return;
}
void XuatMatHangTheoMa(ArrMatHang a[],int N, char Ma[10])
{

	printf("Hien thi danh sach mat Hang\n");
	printf("Ma\t Ten Hang\t So luong\t Gia ban \n");
	int i;
	for (i=0;i<N;i++){
		if (strcmp(Ma,a[i].Mahang)==0){
			printf("%d \t %s \t %s \t %d \t %f",a[i].Mahang,a[i].Tenhang,a[i].Donvitinh,a[i].Soluong,a[i].GiaBan);
		}	
	}	
	return;
}
void NhapHang(ArrMatHang a[],int N)
{

printf(" Nhap so luong hang :");

    		scanf("%d",&N);
    		int i;
    		for (i=0; i<N;i++){
    			float DG;
		fflush(stdin);
        printf("Nhap mat hang thu %d:\n",i+1);
        printf("Ma hang:"); gets(a[i].Mahang);
        fflush(stdin);
        printf("Ten hang:"); gets(a[i].Tenhang);
        fflush(stdin);
        printf("Don vi tinh:"); gets(a[i].Donvitinh);
        fflush(stdin);
        printf("soluong:"); scanf("%d",&a[i].Soluong);
        fflush(stdin);
        printf("GiaBan:"); scanf("%d",&DG);
        a[i].GiaBan=DG;
        fflush(stdin);

			}
		
	
      
        
}
void SuaThongTinMatHang(struct MatHang a[],int N,int Ma)
{
	int i;
	for(i=0;i<N;i++){
		if(a[i].Mahang==Ma){
		printf("Nhap mat hang thu %d:\n",N+1);
        fflush(stdin);
        printf("Ten hang:"); gets(a[N].Tenhang);
        fflush(stdin);
        printf("Don vi tinh:"); gets(a[N].Donvitinh);
        fflush(stdin);
        printf("soluong:"); scanf("%d",&a[N].Soluong);
        fflush(stdin);
        printf("GiaBan:"); scanf("%d",&a[N].GiaBan);
        break;
		}
	}
}
void XoaThongTinMatHang(ArrMatHang a[],int N,int Ma)
{
	int i,j;
	for(i=0;i<N;i++)
		if(a[i].Mahang==Ma)
		{
			for (j=i;j<N;j++){
				a[j] = a[j+1];
			}
			N--;
			break; 
		}
}
int main()
{
	int chon=0;
	struct MatHang ArrMatHang[1000];
	int N =0;
	do
	{
		MenuChinh();
	printf("Moi nhap vao lua chon cua ban:");
	scanf("%d",&chon);
	switch (chon)
	{
		case 0:
	
		printf("Ban da thoat khoi he thong.");
		break;
	
	case 1:
	{
	MenuquanlyArrMatHang();
		int ChonQuanLyMatHang=0;
		do{
			printf("Moi nhap vao lua chon cua ban:");
			scanf("%d",&ChonQuanLyMatHang);
			switch (ChonQuanLyMatHang)
			{
				case 0: 
				
					printf("Ban da thoat khoi he thong quan ly mat hang.");
					break;
				
				case 1: 
				{	NhapHang(ArrMatHang,N)	;
					
					break;
				}
				
				case 2: 
				
						XuatMatHang(ArrMatHang,N);
					break;
				
				case 3: 
				{
					int Ma;
					printf("nhap vao ma hang can tim:");
					scanf("%d",&Ma);
XuatMatHangTheoMa(ArrMatHang,N,Ma);
					break;
				}
				case 4: 
				{
					int Ma;
					printf("Nhap vao ma hang can sua:");
					scanf("%d",&Ma);
SuaThongTinMatHang(ArrMatHang,N,Ma);
					break;
				}
				case 5: 
				{
					int Ma;
					printf("Nhap vao ma hang can xoa:");
					scanf("%d",&Ma);
XoaThongTinMatHang(ArrMatHang,N,Ma);
					break;
				}
				
		break;			
			}		
			default:
		{
			printf("Ban da nhap sai vui long nhap lai lua chon cua ban!\n");
		}	
			
		}while((ChonQuanLyMatHang!=0));
		
		break;
	}
}

}while (chon!=0);
		
	}

	
	



