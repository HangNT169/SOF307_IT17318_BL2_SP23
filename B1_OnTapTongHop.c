#include <stdio.h>
#include <string.h>
void Bai1KhaiBaoMang()
{
	/*1. Khai báo mảng
	 <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...};
	 <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];
	  Index: Bắt đầu từ số 0
	 */
	 //1. Khai báo
	int arrNumber1[] = { 5,6,7,8 };
	int arrNumber2[5];//Khởi tạo 1 mảng gồm 5 phần tử

	//2. Lấy giá trị trong mảng thông qua index
	printf(arrNumber1[2] + 7);

	//3. Gán giá trị thông index
	arrNumber1[2] = 10;

	//4. In các phần tử trong mảng dùng vòng lặp
	for (int i = 0; i < 4; i++)
	{
		printf(arrNumber1[i]);
	}
	//Nguyễn Tuấn Anh
}
void Bai2ThuatToanSapXepNoiBot()
{
	int arrNumb[] = { 44,22,55,33,11 };
	//Code lại sắp xếp tăng dần
	//20 phút giải thích trên word từng bước vòng lặp chạy đến khi dãy số được sắp xếp.(3 bạn nhanh nhất sẽ gõ vào phần chat là xong sau đó nộp bài lên google class.)

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arrNumb[i] > arrNumb[j])
			{
				int temp = arrNumb[i];
				arrNumb[i] = arrNumb[j];
				arrNumb[j] = temp;
			}
		}
	}

	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Lan Chay Thu i = %d \n",i);
	// 	printf("Gia Tri tai vi tri %d \n", arrNumb[i]);
	// 	for (int j = i +1; j < 5; j++)
	// 	{
	// 		printf("Gia tri arrNumb[i] = %d >arrNumb[j] = %d \n", arrNumb[i], arrNumb[j]);
	// 		if (arrNumb[i] > arrNumb[j])
	// 		{
	// 			int temp = arrNumb[i];
	// 			arrNumb[i] = arrNumb[j];
	// 			arrNumb[j] = temp;
	// 		}
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			printf("%d ", arrNumb[i]);
	// 		}
	// 		printf("\n");
	// 	}
	// 	printf("Sau khi sap xep o lan chay thu %d \n",i);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		printf("%d ", arrNumb[i]);
	// 	}
	// }
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arrNumb[i]);
	}
}
void Bai3CachSuDungVongLap()
{
	/*
	 * Luật chung cho vòng lặp
	 *	1. Điểm bắt đầu
	 *	2. Điều kiện để vòng lặp ngắt
	 *	3. Bước nhẩy
	 */
	int arrNumb[] = { 44,22,55,33,11 };
	//1. Vòng lặp For
	// printf("%d \n", arrNumb[0]);
	// printf("%d \n", arrNumb[1]);
	// printf("%d \n", arrNumb[2]);
	// ....... Để in nhiều phần tử thì không làm cách trên.
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%d \n", arrNumb[i]);
	// }

	//2. Vòng lặp While
	// int i = 0;
	// while (i < 5)
	// {
	// 	printf("%d \n", arrNumb[i]);
	// 	i++;
	// }

	//3. Vòng lặp do While
	// int i = 0;
	// do
	// {
	// 	printf("%d \n", arrNumb[i]);
	// 	i++;
	// }
	// while (i < 5);

	/*
	 * Bài tập 30 phút 15h05 kết thúc.
	 * 1. In bảng 1 cửu chương dùng 3 vòng lặp để in
	 * 2. In tất cả bảng cửu chương dùng While và Do While
	 * 3. Tạo 2 biến a = 5 và b = 9 sau đó in các bảng cửu chương theo khoảng a và b và sử dụng 3 vòng lặp.
	 *
	 * 5x1 =5
	 * 5x2 =10
	 * 5x3 =15
	 * 5x4 =20
	 */

	 //Bài 1:

	 // for (int i = 1; i < 10; i++)
	 // {
	 // 	printf("%d x %d = %d \n", a ,i,a*i);
	 // }

	 // while (i < 10)
	 // {
	 // 	printf("%d x %d = %d \n", a, i, a * i);
	 // 	i++;
	 // }
	 // int a = 5;
	 // int i = 1;
	 // do
	 // {
	 // 	printf("%d x %d = %d \n", a, i, a * i);
	 // 	i++;
	 // }
	 // while (i < 10);

	 /*
	  * 5x1 = 5
	  * 5x2 = 10
	  * 5x3 = 15
	  * ......
	  * 5x9 = 45
	  *
	  * 6x1 = 6
	  * 6x2 = 12
	  * 6x3 = 18
	  * ......
	  * 6x9 = 54
	  * 
	  */
	 //Bài 2: Full BCC
	// int a = 1;	
	// while (a < 10)
	// {
	// 	int b = 1;
	// 	while (b < 10)
	// 	{
	// 		printf("%d x %d = %d \n", a, b, a * b);
	// 		b++;
	// 	}		
	// 	a++;
	// }
	
	//3. Tạo 2 biến a = 5 và b = 9 sau đó in các bảng cửu chương theo khoảng a và b và sử dụng 3 vòng lặp.
	int a = 9, b = 5;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while (a <= b)
	{
		int c = 1;
		while (c < 10)
		{
			printf("%d x %d = %d \n", a, c, a * c);
			c++;
		}		
		a++;
	}
}
//Đệ quy
/*
 *Đệ quy trong C - Trong lập trình, một hàm được gọi là đệ quy nếu bên trong thân hàm có một lời gọi đến chính nó.
 *Hàm đệ quy luôn có điều kiện dừng được gọi là “điểm neo”. Khi đạt tới điểm neo, hàm sẽ không gọi chính nó nữa.
 */
void Bai4DeQuy1(int i)
{	
	if (i < 10)
	{
		printf("Day la de quy");
		i++;
		Bai4DeQuy1(i);
	}	
}
//Bài tập đệ quy sử dụng đệ quy để in mảng ra màn hình 12h21
void inMang(int arr[],int i)
{
	if (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
		inMang(arr, i);
	}	
}
int TongCacSoTrongMang(int i,int kq)
{
	int arrNumb[] = { 44,22,55,33,11 };//=?
	if (i<5)
	{
		kq += arrNumb[i];
		i++;
		TongCacSoTrongMang(i, kq);		 
	}
	return kq;
}
void TongCacSoTrongMang2(int i, int kq)
{
	int arrNumb[] = { 44,22,55,33,11 };//=?
	if (i < 5)
	{
		kq += arrNumb[i];
		i++;
		TongCacSoTrongMang2(i, kq);
	}
	printf("%d \n", kq);
}
/* struct trong lập trình C gọi là kiểu dữ liệu do người dùng tự định nghĩa
  * struct structureName
	 {
		 dataType member1;
		 dataType member2;
		 ...
	 };
  */
struct SinhVien
{
	int maSV;
	char ho[10];
	char ten[20];
	int gioiTinh;
	
};
int main()
{
	// int arrNumb[] = { 44,22,55,33,11 };
	// //inMang(arrNumb, 0);
	// //printf("%d", TongCacSoTrongMang(0, 0));
	// TongCacSoTrongMang2(0, 0);

	
	//Sử dụng Struct
	struct SinhVien sv1, sv2;
	sv1.maSV = 001;

	//Khai báo mảng struct
	struct SinhVien sv[100];

	//Cách gán giá trị cho mảng char
	char temp[7] = {'N','G','U','Y','E','N',0};//Cần số 0 để kết thúc
	for (int i = 0; i < 7; i++)
	{
		sv1.ho[i] = temp[i];
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%c", sv1.ho[i]);
	}

	//Sử dụng thư viện string.h
	strcpy_s(sv1.ho, 10, "Hoang");
	for (int i = 0; i < strlen(sv1.ho); i++)
	{
		printf("%c", sv1.ho[i]);
	}
	
}