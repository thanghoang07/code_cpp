#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void main()
{
	int so_tien, so_to_10000,
		so_to_500, so_to_50,
		so_to_20, so_to_1,
		phan_du;
	//nhap vao tu ban phim
	printf("Xin nhap vao so tien can doi(phai la so nguyen duong): ");
	scanf_s("%d", &so_tien);
	//tinh
	if (so_tien <= 0)
	{
		printf("\nXin hay nhap vao so tien can doi(phai la so nguyen duong): ")
		scanf_s("%d", &so_tien);
	}
	so_to_10000 = so_tien / 10000;
	phan_du 	= so_tien % 10000;
	so_to_500 	= phan_du / 500;
	phan_du 	= phan_du % 500;
	so_to_50 	= phan_du / 50;
	phan_du 	= phan_du % 50;
	so_to_20	= phan_du / 20;
	so_to_1 	= phan_du % 20;
	//in ra man hinh
	printf("\nSo to 10000 D la: %d", so_to_10000);
	printf("\nSo to   500 D la: %d",   so_to_500);
	printf("\nSo to    50 D la: %d",    so_to_50);
	printf("\nSo to    20 D la: %d",    so_to_20);
	printf("\nSo to     1 D la: %d",     so_to_1);
	_getch();
}