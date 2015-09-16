//viet chuong trinh tinh dien tích hinh tron
#include <stdio.h>
#include <conio.h>
#include <math.h>
//dinh nghia hang so
#define PI 3.14

void main()
{
	float ban_kinh, chu_vi, dien_tich;
	printf("chuong trinh tinh chu vi va dien tich hinh tron khi biet ban kinh: \n");
	printf("xin hay nhap vao ban kinh: ");
	scanf_s("%f", &ban_kinh);
	chu_vi = ban_kinh * 2 * PI;
	dien_tich = ban_kinh * ban_kinh * PI;
	printf("\nChu vi hinh tron la:%0.4f", chu_vi);
	printf("\nDien tich hinh tron la:%0.4f", dien_tich);
	_getch();
}