#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_CLASS_LENGTH 10
#define MAX_XEPLOAI_LENGTH 20

// Khai b�o c?u tr�c d? li?u cho sinh vi�n
struct Student {
    int mssv;
    char hoTen[MAX_NAME_LENGTH];
    char ngaySinh[20];
    char noiSinh[MAX_NAME_LENGTH];
    char lopHoc[MAX_CLASS_LENGTH];
    float diemToan;
    float diemTriet;
    float diemAnhVan;
    float diemTrungBinh;
    char xepLoai[MAX_XEPLOAI_LENGTH];
};

// Khai b�o danh s�ch sinh vi�n
struct Student danhSachSV[MAX_STUDENTS];
int soLuongSV = 0;

// H�m nh?p th�ng tin c?a m?t sinh vi�n
void nhapThongTinSinhVien(struct Student *sv) {
    printf("Nhap MSSV: ");
    scanf("%d", &sv[0].mssv);
    printf("Nhap ho va ten: ");
    scanf(" %[^\n]s", sv[0].hoTen);
    printf("Nhap ngay sinh: ");
    scanf(" %[^\n]s", sv[0].ngaySinh);
    printf("Nhap noi sinh: ");
    scanf(" %[^\n]s", sv[0].noiSinh);
    printf("Nhap lop hoc: ");
    scanf(" %[^\n]s", sv[0].lopHoc);
    printf("Nhap diem toan: ");
    scanf("%f", &sv[0].diemToan);
    printf("Nhap diem triet: ");
    scanf("%f", &sv[0].diemTriet);
    printf("Nhap diem anh van: ");
    scanf("%f", &sv[0].diemAnhVan);

    sv[0].diemTrungBinh = (sv[0].diemToan + sv[0].diemTriet + sv[0].diemAnhVan) / 3;
	
	int i;
	
    if (sv[0].diemTrungBinh >= 8.5) {
        for (i = 0; i < MAX_XEPLOAI_LENGTH; i++) {
            sv[0].xepLoai[i] = "Xuat sac"[i];
        }
    } else if (sv[0].diemTrungBinh >= 7.0) {
        for (i = 0; i < MAX_XEPLOAI_LENGTH; i++) {
            sv[0].xepLoai[i] = "Gioi"[i];
        }
    } else if (sv[0].diemTrungBinh >= 5.5) {
        for (i = 0; i < MAX_XEPLOAI_LENGTH; i++) {
            sv[0].xepLoai[i] = "Kha"[i];
        }
    } else if (sv[0].diemTrungBinh >= 4.0) {
        for (i = 0; i < MAX_XEPLOAI_LENGTH; i++) {
            sv[0].xepLoai[i] = "Trung binh"[i];
        }
    } else {
        for (i = 0; i < MAX_XEPLOAI_LENGTH; i++) {
            sv[0].xepLoai[i] = "Yeu"[i];
        }
    }
}

// H�m hi?n th? th�ng tin c?a m?t sinh vi�n
void hienThiThongTinSinhVien(struct Student sv) {
    printf("MSSV: %d\n", sv.mssv);
    printf("Ho va ten: %s\n", sv.hoTen);
    printf("Ngay sinh: %s\n", sv.ngaySinh);
    printf("Noi sinh: %s\n", sv.noiSinh);
    printf("Lop hoc: %s\n", sv.lopHoc);
    printf("Diem toan: %.2f\n", sv.diemToan);
    printf("Diem triet: %.2f\n", sv.diemTriet);
    printf("Diem anh van: %.2f\n", sv.diemAnhVan);
    printf("Diem trung binh: %.2f\n", sv.diemTrungBinh);
    printf("Xep loai: %s\n", sv.xepLoai);
}

// H�m s?p x?p danh s�ch sinh vi�n theo t�n
void sapXepTheoTen() {
	int i,j;
    for (i = 0; i < soLuongSV - 1; i++) {
        for (j = i + 1; j < soLuongSV; j++) {
            if (strcmp(danhSachSV[i].hoTen, danhSachSV[j].hoTen) > 0) {
                struct Student temp = danhSachSV[i];
                danhSachSV[i] = danhSachSV[j];
                danhSachSV[j] = temp;
            }
        }
    }
}

// H�m t�m sinh vi�n theo MSSV
void timSinhVienTheoMSSV() {
    int mssvTim,i;
    printf("Nhap MSSV can tim: ");
    scanf("%d", &mssvTim);

    for (i = 0; i < soLuongSV; i++) {
        if (danhSachSV[i].mssv == mssvTim) {
            hienThiThongTinSinhVien(danhSachSV[i]);
            return;
        }
    }

    printf("Khong tim thay sinh vien voi MSSV %d\n", mssvTim);
}

// H�m t�m sinh vi�n theo l?p
void timSinhVienTheoLop() {
    char lopTim[MAX_CLASS_LENGTH];
    printf("Nhap lop can tim: ");
    scanf(" %[^\n]s", lopTim);
    
    int i;

    printf("Danh sach sinh vien trong lop %s:\n", lopTim);
    for (i = 0; i < soLuongSV; i++) {
        if (strcmp(danhSachSV[i].lopHoc, lopTim) == 0) {
            hienThiThongTinSinhVien(danhSachSV[i]);
        }
    }
}

// H�m in danh s�ch sinh vi�n theo x?p lo?i
void inDanhSachTheoXepLoai() {
    char xepLoaiTim[MAX_XEPLOAI_LENGTH];
    printf("Nhap xep loai can tim: ");
    scanf(" %[^\n]s", xepLoaiTim);
    
    int i;

    printf("Danh sach sinh vien co xep loai %s:\n", xepLoaiTim);
    for (i = 0; i < soLuongSV; i++) {
        if (strcmp(danhSachSV[i].xepLoai, xepLoaiTim) == 0) {
            hienThiThongTinSinhVien(danhSachSV[i]);
        }
    }
}

int main() {
    int chonChucNang;
    int i;

    do {
        printf("MENU\n");
        printf("(1) Nhap Danh sach SV\n");
        printf("(2) In danh sach SV\n");
        printf("(3) Tim thong tin cua 1 sinh vien (dua vao MSSV)\n");
        printf("(4) Tim SV (dua vao ten lop)\n");
        printf("(5) In danh sach (dua vao xep loai)\n");
        printf("(6) Thoat\n");
        printf("Chon chuc nang (1 den 6): ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang) {
            case 1:
                printf("Nhap so luong sinh vien: ");
                scanf("%d", &soLuongSV);
                for (i = 0; i < soLuongSV; i++) {
                    printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
                    nhapThongTinSinhVien(&danhSachSV[i]);
                }
                break;
            case 2:
                sapXepTheoTen();
                printf("Danh sach sinh vien:\n");
                for (i = 0; i < soLuongSV; i++) {
                    hienThiThongTinSinhVien(danhSachSV[i]);
                    printf("\n");
                }
                break;
            case 3:
                timSinhVienTheoMSSV();
                break;
            case 4:
                timSinhVienTheoLop();
                break;
            case 5:
                inDanhSachTheoXepLoai();
                break;
            case 6:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Chuc nang khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 6);

    return 0;
}
