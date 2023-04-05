// Khai báo thu viện
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define sl 100

// Khai báo Struct NhanVien
typedef struct NhanVien NhanVien;

struct NhanVien{
    int msnv;
    char ho[20];
    char ten[20];
    date namsinh;
    char noisinh[100];
    char diachi[200];
    float luong;
    date ngayvao;
};
// Khai báo các hàm cần sử dụng
void menu();
// Main 
int main(){
    menu();
    getch();
    return 0;
}
// Code nội dung các hàm 
void menu(){
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
            break;
        case 0:
            printf("\n\t Hen gap lai ban lan sau\n");
            return;
        default:
            printf("Ban chua lua chon truong trinh\n");
            break;
        }
    } while (1);
}
