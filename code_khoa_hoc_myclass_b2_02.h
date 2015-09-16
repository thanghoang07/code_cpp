//viet chuong trinh nhap vao cv hcn. tinh va in ra dien tich hcn
//biet chieu dai bang 1.5 lan chieu rong
#include "stdio.h"
#include "conio.h"
#include "math.h"

void main()
{
	float chu_vi, dien_tich, chieu_dai, chieu_rong;
	printf("chuong trinh tinh dien tich HCN khi biet chu vi. \nXin nhap vao chu vi HCN: ");
	scanf_s("%f", &chu_vi);

	//tinh chieu rong
	chieu_rong = (chu_vi / 2) / 2.5;
	//tinh chieu dai
	chieu_dai = chieu_rong * 1.5;
	//tinh dien tich
	dien_tich = chieu_dai * chieu_rong;
	//in ra man hinh
	printf("\nChieu dai va Chieu rong la: %0.3f %0.3f", chieu_dai, chieu_rong);
	printf("\nDien tich HCN la: %0.3f", dien_tich);
	_getch();
}