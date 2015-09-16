/*nhap vao so nguyen duong ( 1 < n <= 7) hay in ra 
cac gia tri cac thu trong tuan ra man hinh*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int n;
	printf("\nNhap vao so nguyen n (1 < n <= 7): ");
	scanf_s("%d", &n);
	
	switch (n)
	{
		case 1 : printf("Sunday");
			break;
		case 2 : printf("Monday");
			break;
		case 3 : printf("Tuesday");
			break;
		case 4 : printf("Wednesday");
			break;
		case 5 : printf("Thursday");
			break;
		case 6 : printf("Friday");
			break;
		case 7 : printf("Saturday");
			break;
		default : printf("gia tri ko hop le");
			break;
	}
	_getch();
}