#include <stdio.h>
#include <stdlib.h>

/*
 * Con trỏ và mảng một chiều
 *		+ Định nghĩa:
 *			-Tên mảng arr là một hằng con trỏ không thể thay đổi giá trị của hằng này
 *			- Giá trị của arr là địa chỉ phần tử đầu tiên của mảng.
 *		+ Khi sử dụng con trỏ chúng ta sẽ cấp phát động cho mảng 1 chiều trở thành mảng động.
 *
 *		+ Công thức:
 *		<tên mảng> == &array[0];
 *
 *		+ Phép toán số học trên con trỏ:
 *			+n + * sizeof(<kiểu dữ liệu>)
 *			Có thể sử dụng toán tử gộp += hoặc ++
 *		+ Phép so sánh: So sánh địa chỉ giữa 2 con trỏ (Thứ tự ô nhớ)
 *			- == != > < >= <=
 *
 *	Lưu ý: Không thể thực hiện các phép toán * / % cho con trỏ
 *
 */
void nhapMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap vao a[%d]: ", i);
		scanf_s("%d", a);
		a++;
	}
}
void inMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d \t", *a);
		a++;
	}
}
void themPhanTu(int*& a, int& n, int viTriThem, int giaTriThem)
{
	//Xin cấp phát trước
	n++;
	a = (int*)realloc(a, n * sizeof(int));
	for (int i = n - 1; i > viTriThem; i--)
	{
		a[i] = a[i - 1];
	}
	a[viTriThem] = giaTriThem;
}
int main()
{
	int  arrNumber[3], * parrNumber;
	//Cách 1
	parrNumber = arrNumber;//Ngầm định hiểu là địa chỉ của ô nhớ đầu tiên
	//Cách 2
	//parrNumber = arrNumber[0];//Địa chỉ của ô nhớ đầu tiên
	//Phần 1: Triển khai mảng
			//Bước 1: lấy giá số lượng phần tử người dùng nhập
	int n;
	do
	{
		printf("Nhap so luong phan tu: \n");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf_s("Nhap vao khong hop le \n");
		}
	} while (n < 0);
	int* a = NULL;//Khởi tạo con trỏ có địa chỉ bằng NULL
	///a =(int*) malloc(n * sizeof(int*)); Cách khi sử dụng C và phải inport thêm thư viện #include <stdlib.h>

	a = new int[n];//Muốn sử dụng phải sử dụng đổi đuôi file c ->cpp
	nhapMang(a, n);
	inMang(a, n);
	themPhanTu(a, n, 3, 9999);
	printf_s("\n");
	inMang(a, n);
}