//chuong trinh so sanh 2 so a va b
#include "stdio.h"
#include "conio.h"
#include "math.h"

void main()
{
	int so_A, so_B, max, min;
	printf("\nNhap vao so thu nhat: ");
	scanf_s("%d", &so_A);
	printf("\nNhap vao so thu hai : ");
	scanf_s("%d", &so_B);
	//tim so
	if(so_A >= so_B)
	{
		max = so_A;
		min = so_B;
	}
	else
	{
		max = so_B;
		min = so_A;
	}
	printf("\nSo lon nhat trong 2 so da cho la: %d", max);
	printf("\nSo nho nhat trong 2 so da cho la: %d", min);
	_getch();
}