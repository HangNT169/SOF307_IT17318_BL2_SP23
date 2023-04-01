#include <stdio.h>

// => Doi cho gia tri 
void hoanViThamTri(int a,int b){
    // Input : a = 7, b = 8 
    // Output: a = 8, b = 7
    int temp = a; // 7 
    a = b; // a => 8
    b = temp; // b =>7 
    printf("KQ tham tri 1:\n");
    printf("a = %d\n",a);
    printf("b = %d",b);
}
void hoanViThamChieu(int *a,int *b){
    int temp = *a; // dia chi o nho cua bien a 
    *a = *b;
    *b = temp;
}
int main(){
    // Tham chiếu, Tham Trị 
    // Trong Java 
    // Kiểu tham chiếu => Dành cho kiểu đối tượng (Object)
    // Tham trị  => Dành cho các biến tham số khai báo kiểu nguyên thuỷ : int, float,...   
    // Trong C 
    // Khi nhắc tới 1 biến :
    // Giá trị 
    // Địa chỉ ô nhớ (con trỏ )
    // Tham trị (Truyền giá trị)
    // Khi nhắc tới 1 biến 
    // int a = 5; => giá trị của biến a = 5
    // Truyền giá trị  là truyền giá trị của 1 biến(KHÔNG PHẢI LÀ ĐỊA CHỈ Ô NHỚ).
    // Tham chieu : Truyen dia chi cua o nho cua bien 
    // &, *
    int a = 3, b = 9; // a= 3, b = 9
    // hoanViThamTri(a,b); // a= 9, b = 3 => Gia tri duoc thay doi 
    // printf("\nKQ tham tri 2:\n");
    printf("\nBefore:\n");
    printf("a = %d\n",a); // a = 9
    printf("b = %d",b); // b = 3
    hoanViThamChieu(&a,&b);
    printf("\nAfter:\n");
    printf("\na = %d\n",a); 
    printf("b = %d",b);
    // maloc => mang dong trong C (con tro voi array)
    // struct 
   // linked , queue , ...
    return 0;
}