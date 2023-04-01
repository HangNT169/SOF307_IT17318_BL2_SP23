// Khai báo thu viện
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define sl 100

// Khai báo Struct NhanVien, Date, DanhSach
typedef struct Date Date;
typedef struct NhanVien NhanVien;
typedef struct DanhSach DanhSach;

struct Date
{
    int ngay;
    int thang;
    int nam;
};
typedef Date date;

struct NhanVien
{
    int msnv;
    char ho[20];
    char ten[20];
    date namsinh;
    char noisinh[100];
    char diachi[200];
    float luong;
    date ngayvao;
};
typedef NhanVien nhanVien;

struct DanhSach
{
    nhanVien* a;
    int n;
};
typedef DanhSach danhSach;

// Khai báo các hàm cần sử dụng

void menu();
// void nhapngaythang(date &ntn);
void xuatNhanVien(nhanVien nv);
void xuatNgayThang(date ntn);
void nhapNhanVien(nhanVien *nv);
void nhapDanhSach(danhSach *ds);
void xuatDanhSach(danhSach *ds);
void themPhanTu(danhSach *ds);
void xoaPhanTu(danhSach *ds);
int searchByTen(danhSach * ds, char ten);
// int timten(danhsach ds, char *c);
// void themnv(danhsach &ds, nhanvien x, int k);
// int timMSNV(danhsach ds, int d);
// void xoanv(danhsach ds, int d);

// ham sap xep danh
// void sapxep(danhsach ds);
int main()
{
    menu();
    getch();
    return 0;
}

// --------------Meu-----------

void menu()
{
    int d, k;
    danhSach * ds;
    ds = (danhSach*)malloc(sizeof(danhSach));
    // printf(ds);
    nhapDanhSach(ds);
    xuatDanhSach(ds);
    
    do
    {
        int ch;
        printf("\n\t\t------------------MENU---------------------");
        printf("\n\t1.Them vao 1 nhan vien");
        printf("\n\t2.Tim nhan vien theo ma so");
        printf("\n\t3.Tim nhan vien theo ten");
        printf("\n\t4.Bang luong cua nhan vien giam dan");
        printf("\n\t5.Xoa 1 nhan vien");
        printf("\n   *********************************************************");
        printf("\n\tChon 1 trong cuc nang tren: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\t Ban da lua chon chuc nang 1\n");
            themPhanTu(ds);
            printf("\n\t Them thanh cong !!! \n");
            xuatDanhSach(ds);
            break;
        case 2:
            printf("\n\t Ban da lua chon chuc nang 2\n");
            break;
        case 3:
            printf("\n\t Ban da lua chon chuc nang 3\n");
            
            break;
        case 4:
            printf("\n\t Ban da lua chon chuc nang 4\n");
            break;
        case 5:
            printf("\n\t Ban da lua chon chuc nang 5\n");
            xoaPhanTu(ds);
            xuatDanhSach(ds);
            break;
        case 0:
            printf("\n\t Hen gap lai ban lan sau\n");
            if (ds != NULL){
                if (ds->a != NULL){
                    free(ds->a);
                }
                free(ds);
            }
            return;
        default:
            printf("Ban chua lua chon truong trinh\n");
            break;
        }
    } while (1);
    if (ds != NULL){
        if (ds->a != NULL){
            free(ds->a);
        }
        free(ds);
    }
}
// void xuatNgayThang

void xuatNgayThang(date ntn)
{
    printf("%02d/%02d/%04d", ntn.ngay, ntn.thang, ntn.nam);
}

// Nhap danh sach cua nhan vien
void nhapNhanVien(nhanVien *nv)
{
    printf("\tNhap MSNV: ");
    scanf("%d", &nv->msnv);
    printf("\tNhap ho: ");
    fflush(stdin);
    gets(nv->ho);
    printf("\tNhap ten: ");
    fflush(stdin);
    gets(nv->ten);
    printf("\tNhap ngay sinh:");
    scanf("%d", &nv->namsinh.nam);
    printf("\tNhap noi sinh: ");
    fflush(stdin);
    gets(nv->noisinh);
    printf("\tNhap dia chi: ");
    fflush(stdin);
    gets(nv->diachi);
    printf("\tNhap luong: ");
    scanf("%f", &nv->luong);
    printf("\tNhap ngay vao lam:");
    scanf("%d", &nv->ngayvao.ngay);
}

void nhapDanhSach(danhSach *ds)
{
    printf("\n\t Nhap so luong nhan vien: ");
    scanf("%d", &ds->n);
    ds->a = (nhanVien*)malloc(ds->n * sizeof(nhanVien));
    printf("\n\tnhap thong tin nhan vien");
    for (int i = 0; i < ds->n; i++)
    {
        printf("\n\tnhan vien thu %d", i + 1);
        nhapNhanVien(&ds->a[i]); // Truyền địa chỉ của phần tử i trong mảng a
    }
}

// Xuat danh sach cua nhan vien
void xuatNhanVien(nhanVien nv){
    printf("\n\tMa so nhan vien: %d",nv.msnv);
    printf("\n\tHo: %s",nv.ho);
    printf("\n\tTen: %s",nv.ten);
    printf("\n\tNgay sinh:");
    xuatNgayThang(nv.namsinh);
    printf("\n\tNoi sinh: %s",nv.noisinh);
    printf("\n\tDia chi: %s",nv.diachi);
    printf("\n\tLuong: %8.2f",nv.luong);
    printf("\n\tNgay vao: ");
    xuatNgayThang(nv.ngayvao);
}

void xuatDanhSach(danhSach *ds){
    printf("\n\t Danh sach nhan vien");
    for (int i = 0; i < ds->n; i++)
    {
        printf("\n\tnhan vien thu %d", i + 1);
        xuatNhanVien(ds->a[i]);
    }
}

void themPhanTu(danhSach *ds)
{
    int viTriThem;
    printf("\n\t Moi ban nhap vi tri:  \n");
    scanf("%d", &viTriThem);
    ds->n++;
    // Cap phat them bo nho cho mang
    ds->a = (nhanVien *)realloc(ds->a, ds->n * sizeof(nhanVien));
    for (int i = ds->n - 1; i > viTriThem; i--)
    {
        ds->a[i] = ds->a[i - 1];
    }

    // Them phan tu vao vi tri moi
    nhapNhanVien(&ds->a[viTriThem]);
}

void xoaPhanTu(danhSach *ds)
{
    
    int viTri;
    printf("\n\t Moi ban nhap vi tri:  \n");
    scanf("%d", &viTri);
    for (int i = viTri; i < ds->n - 1; i++)
    {
        ds->a[i] = ds->a[i + 1];
    }
    ds->n--; // tru di byte
    // thay doi bo nho duoc cap phat
    ds->a = (nhanVien *)realloc(ds->a, sizeof(nhanVien)); // Tinh theo byte
}

int searchByTen(danhSach * ds, char ten)
{
  int i;
  for (i = 0; i < ds->n; i++)
    if (ds->a[i].ten == &ten)
      // Trả về chỉ số khi tìm thấy
      return i;
  // Nếu không tìm thấy trả về -1. Vì chỉ số mảng >= 0
  return -1;
}