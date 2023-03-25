#include <stdio.h>
// Thuat toan tim kiem 
// Mang : vi tri , gia tri (a)
// vi tri : 0 - size -1 
// gia tri : a[0] - gia tri dau tien , a[size -1] - gia tri vi tri cuoi cung 
// vi tri la i => gia tri o vi tri i : a[i]
// 1. Tim so lon nhat trong mang 
// Khai bao ham o tren 
void timMax(int arrNumber[]);

// 2. Tim so be nhat trong mang (tuong tu)
// 3. Tim 1 so bat ki nhap tu ban phim 
// C1: void 
void timKiem(int arrNumber[], int soCanTim){
    for(int i = 0; i < 7;i++){
        if(arrNumber[i] == soCanTim){
            printf("So %d co ton tai trong mang\n",soCanTim);
            return;
        }
    }
    printf("Khong tim thay \n");
}
// C2: Co ton tai trong mang HOAC Khong ton tai(bool) / int (Tra ve Vi tri cua phan tu tim duoc)
// Java : boolean, SQL bit, C: bool 
// int viTriTimKiem(int arrNumber[],int soCanTim){
//     int viTri = -1; // Khong tim thay phan tu 
//     // Code 
//     for(int i = 0 ;i <7;i++){
//         if(arrNumber[i] == soCanTim){
//             viTri = i;
//         }
//     }
//     return viTri;
// }
int viTriTimKiem(int arrNumber[],int soCanTim){
    // Code 
    for(int i = 0 ;i <7;i++){
        if(arrNumber[i] == soCanTim){
            return i;
        }
    }
    return -1;
}
int main(){
    // Liet ke mot vai phan tu trong mang 
    int arrNumber[]={35,27,36,22,33,55,11};
    // timMax(arrNumber);
    int number;
    printf("Nhap so can tim:");
    scanf("%d",&number);
    // timKiem(arrNumber,number);
    int viTri = viTriTimKiem(arrNumber,number);
    if(viTri == -1){
        printf("Khong tim thay \n");
    }else{
        printf("So can tim o vi tri %d\n",viTri);
    }
    return 0;
}

void timMax(int arrNumber[]){
    int max = arrNumber[0];
    // Duyet tat ca cac phan tu trong mang 
    for(int i = 1; i<7; i++){
        if(max < arrNumber[i]){
            max = arrNumber[i];
        }
    }
    printf("Max = %d\n",max);
}
