#include <stdio.h>
/*
 * + Bộ nhớ máy tính
 *		- Bộ nhớ RAM chứa rất nhiều ô nhớ, mỗi 1 ô nhớ có kích thước là 1 Byte.
 *		- RAM dùng để chứa một phần hệ điều hành, các lệnh chương trình, các dữ liệu....
 *		- Mỗi ô nhớ có địa chỉ duy nhất và địa chỉ này được đánh số từ 0 trở đi
 *		- Địa chỉ của value được lưu trữ ở hệ hệ thập lục phân (hexadecimal) một byte hầu như luôn luôn được định nghĩa là chứa támchữ số nhị phân.
 *		- Mỗi ô nhớ của RAM đều có một địa chỉ. Thông thường, mỗi ô nhớ là một byte (8 bit); tuy nhiên hệ thống lại có thể đọc ra hay		ghi vào nhiều byte (2, 4, 8 byte) một lúc.
 *	+ Khi chương trình biên dịch
 *		- Dành ra riêng một vùng nhớ với địa chỉ duy nhất để lưu biến đó
 *		- Liên kết địa chỉ ô nhớ đó với tên biến
 *		- Khi gọi tên biến nó sẽ truy xuất tự động đế ô nhớ đã liên kết với tên biến bởi có nhiều ô nhớ
 */
 /*
	* Con trỏ trong lập trình C
	* + Định nghĩa:
	*		- Địa chỉ của biến là một con số
	*		- Ta có thể tạo biến khác để lưu địa chỉ của biến này trên con trỏ
	*		- Vậy con trỏ sẽ sẽ lưu vị trí của cái biến đó
	*		- Các vùng nhớ có thể có các kiểu dữ liệu khác nhau bởi vậy con trỏ có thể trỏ đến các kiểu dữ liệu khác nhau
	*		- CON TRỎ KHÔNG CÓ KIỂU DỮ LIỆU BỞI CON TRỎ CHỈ TỎ ĐẾN ĐỊA CHỈ THÌ ĐỊA CHỈ NÀO CŨNG GIỐNG NHAU CHỨ KO CÓ KIỂU ĐỊA CHỈ LÀ SỐ NGUYÊN, FLOAT......
	*
	*
	* + Công thức dùng: (Giống như biến, biến con trỏ muốn sử dụng cũng cần được khai báo)
	*				<Kiểu dữ liệu>*  <tên con trỏ>;
	*
	*	+ Khởi tạo con trỏ:
	*		- Khi mới khai báo biến con trỏ được đặt ở địa chỉ nào đó không biết trước.
	*			- Chứa giá trị không xác định
	*			- trỏ đến vùng nhớ không biết trước
	*
	*		- Đặt địa chỉ của biến vào con trỏ sử dụng toán tử &
	*				<tên con trỏ> = &<tên biến>
	*
	*	+ Kích thước của con trỏ:
	*		- Con trỏ chỉ lưu địa chỉ nên kích thước của mọi con trỏ là như nhau:
	*			- Môi trường MD-DOS(16 BIT): 2 Bytes(64KB) - Con trỏ tốn 2 Bytes
	*			- Môi trường WINDOWS(32 || 64 BIT): 4 Bytes(4GB)
	*
	*  - Toán tử & dùng để truy xuất địa chỉ
	*  - Truy xuât/ Trỏ đến đia chỉ đó để lấy giá trị địa chỉ đó lên thì dùng dấu *<Tên con trỏ>
	*
	*
	*  LƯU Ý: KHÔNG NÊN SỬ DỤNG CON TRỎ KHI CHƯA ĐƯỢC KHỞI TẠO. KẾT QUẢ SẼ KHÔNG LƯỜNG TRƯỚC ĐƯỢC.
	*/
void ConTroC()
{
	int* point;//Khai báo 1 con trỏ 
	int a = 5;
	printf("Dia chi cua bien a co kieu HEX %p", &a);
}
void KhaiBaoConTro()
{
	int a;//Khai báo 1 biến tên a có kiểu số nguyên và không khởi tạo giá trị ban đầu
	int* prt1;//Khai báo 1 con trỏ có tên prt1 trỏ đến vùng nhớ có kiểu int
	double* prt2;
	float* prt3;
	char* prt4;
	int* prt5, b;//Khai báo 1 con trỏ prt5 đến vùng nhớ có kiểu int và khai báo 1 biến b có kiểu int.

	//Lưu ý: Mỗi con trỏ nên khai báo trên 1 dòng code
	/*
	 * Ví dụ 1: Khai báo 1 biến không nhất thiết biến đó phải có giá trị
	 */
	int c;
	int d = 4;
	printf("----------------------------\n");
	printf("Dia chi cua c co kieu HEX trong ram la %p \n", &c);//Dấu & giúp lấy được địa chỉ của biến
	printf("Dia chi cua d co kieu HEX trong ram la %p \n", &d);
	printf("Gia tri cua d trong ram la %d \n", d);
	//%p sử dụng để in một chỉ có kiểu HEX
	printf("----------------------------\n");

	/*
	 * Ví dụ 2: Làm việc với con trỏ
	 */
	int* ptr6;//Khởi tạo 1 con trỏ
	int* ptr7 = NULL;//Khởi tạo 1 con trỏ với địa chỉ null có nghĩa con trỏ không trỏ đi đâu cả
	ptr6 = &d;//Gán địa chỉ của d cho con trỏ ptr6
	//Có thể hiểu con trỏ ptr6 đang trỏ đến địa chỉ của ô nhớ d
	
	//Muốn xem giá trị của địa chỉ con trỏ trỏ đến dùng dấu *
	printf("----------------------------\n");
	printf("Dia chi cua d co kieu HEX trong ram la %p \n", &d);
	printf("Dia chi cua con tro ptr6 co kieu HEX trong ram la %p \n", ptr6);
	printf("Gia tri cua dia chi con tro ptr6 dang tro den la %d",*ptr6);
	printf("----------------------------\n");

	//Khi tác động đến *con trỏ = giá trị thì biến đó sẽ bị thay đổi
	printf("----------------------------\n");
	*ptr6 = 35;//Gán giá trị mới vào ô địa chỉ mà con trỏ đang nắm giữ
	printf("Gia tri cua d trong ram la %d \n", d);
	printf("----------------------------\n");

	//Con trỏ trỏ đến con trỏ	
	ptr7 = ptr6;
	*ptr7 = 99;
	printf("----------------------------\n");
	printf("Dia chi cua d co kieu HEX trong ram la %p \n", &d);
	printf("Dia chi cua ptr6 %p \n", ptr6);
	printf("Dia chi cua ptr7 %p \n", ptr7);
	printf("Gia tri cua ptr7 %d \n", *ptr7);
	printf("Gia tri cua d trong ram la %d \n", d);
	printf("----------------------------\n");
}
void SizeContro()
{
	//Kích thức là 4 chương trình chạy ở 32-Bit || 8 dành cho 64-bit
	printf("SizeOf(char*) = %d\n", sizeof(char*));
	printf("SizeOf(int*) = %d\n", sizeof(int*));
	printf("SizeOf(long*) = %d\n", sizeof(long*));
	printf("SizeOf(double*) = %d\n", sizeof(double*));
	printf("SizeOf(float*) = %d\n", sizeof(float*));
}
// tìm số lớn hơn trong 2 số
// tìm số lớn nhất trong 3 số abc
void khaiBaoConTro(){
    int* prt3, a; // ptr3 là con trỏ, nhưng a là biến
    int* ptr4 = NULL; // con trỏ với địa chỉ là null thfi nó không trỏ đi đâu cả
    float* ptr2;
    int b = 5;
    int c = 7;
    printf("Gia tri cua bien b: %d\n", b);
    printf("Dia chi cua bien b co keiu HEX: %p\n", &b); // %p để in ra 1 địa chỉ có kiểu HEX, &b để lấy địa chỉ của biến
}
void timSoLonHon(int a, int b){
    int *pt1;
    if(a > b){
        pt1 = &a;
    }else{
        pt1 = &b;
    }
        printf("So lon hon la: %d", *pt1);
}
int timMax(int *a, int *b, int *c){
    int max;
    if(*a > *b && *a > *c){
        max = *a;
    }else if(*b > max && *b > *c){
        max = *b;
    }else{
        max = *c;
    }
    return max;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int *arrNummber, int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(arrNummber[j] > arrNummber[j+1]){
                swap(&arrNummber[j], &arrNummber[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%5d", arrNummber[i]);
    }
}

int main()
{
	// KhaiBaoConTro();
	// SizeContro();
	// int a = 1, b = 2, c = 3;
    // int max = timMax(&a, &b, &c);
    // printf("Max la: %d\n", max);
    int arrNummber[] = {1,3,5,222,1,4,22,2222,1};
    int n = sizeof(arrNummber) / sizeof(arrNummber[0]);
    bubbleSort(arrNummber, n);
}