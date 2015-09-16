/*Nhập vào năm dương lịch (từ năm 1975) trở đi và in ra 
các giải thể thao lớn được tổ chức trong năm. 
Các năm 1980,1984,1988, 1992, 1996… 
	có tổ chức Olympic và Euro (Những năm chia chẵn cho 4)
Các năm 1990, 1994, 1998, …..
	có tổ chức World Cup (chia 4 dư 2)
Các năm 1995, 1997, 1999, …
	có tổ chức SEA Games (năm lẻ, chia 4 dư 1 hoặc 3)
Các năm 1996, 1998, 2000 … 
	có tổ chức Tiger Cup, nhưng chỉ tính từ 1996 trở đi 
	(các năm này chia chẵn cho 4 hoặc chia 4 dư 2)*/
	
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int year;
	printf("Nhap vao nam: ");
	scanf_s("%d",&year);
	//tinh
	if (year >= 1975)
	{
		switch (year % 4)
		{
			case 0 :
			{
				printf("\nThe van hoi Olympic");
				printf("\nBong da chau au Euro");
				if (year >= 1996)
					printf("\nBong da Tiger Cup");
				break;
			}
			case 1 :
			case 3 : 
				printf("\nGiai SEA Game");
				break;
			case 2 :
			{
				printf("\nBong da the gioi World Cup");
				if (year >= 1996)
					printf("\nBong da Tiger Cup");
				break;
			}
		}
	}
	else
		printf("Khong xet cac nam truoc 1975.");
	_getch();
}