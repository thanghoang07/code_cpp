/*Tính số tiền lời thu được khi bán m kg hàng hóa (0< m ≤ 100), biết rằng: 
0  < m ≤ 10	:	Tiền lời là 5.000đ/kg
10 < m ≤ 20	:	Tiền lời là 7.000đ/kg
20 < m ≤ 50	:	Tiền lời là 9.000đ/kg và thêm 2% tổng số tiền lời
50 < m 		:	Tiền lời là 10.000đ/kg và thêm 4% tổng số tiền lời nhưng không quá 1.000.000 đ */

#include "stdio.h"
#include "conio.h"

void main()
{
	// Khai bao bien hang
	#define TIEN_LOI_MAX  1000000 // Tien loi toi da khong qua 1.000.000
	// Khai bao 4 muc tien loi moi kg.
	float tien_loi_moi_kg_1 = 5000,
		tien_loi_moi_kg_2 = 7000,
		tien_loi_moi_kg_3 = 9000,
		tien_loi_moi_kg9_4 = 10000;
	// Khai bao 4 muc gioi han so kg
	int gioi_han_1 = 10, gioi_han_2 = 20, gioi_han_3 = 50, gioi_han_4 = 100;
	// Khai bao 2 muc hoa hong
	float hoa_hong_1 = 0.02, hoa_hong_2 = 0.04;
	float m, tien_loi; // m la so kg hang hoa va tien_loi so tien loi co duoc
	printf("Nhap vao so kg hang hoa: ");
	scanf_s("%f", &m);
	if (m <= 0)
		tien_loi = -1;
	else
	{
		if (m <= gioi_han_1)
			tien_loi = m * tien_loi_moi_kg_1;
		else
		{
			if (m <= gioi_han_2)
				tien_loi = m * tien_loi_moi_kg_2;
			else
			{
				if (m <= gioi_han_3)
				{
					tien_loi = m * tien_loi_moi_kg_3;
					tien_loi = tien_loi + tien_loi * hoa_hong_1;
				}
				else
				{
					if (m <= gioi_han_4)
					{
						tien_loi = m * tien_loi_moi_kg_4;
						tien_loi = tien_loi + tien_loi* hoa_hong_2;
						if (tien_loi > TIEN_LOI_MAX)
							tien_loi = TIEN_LOI_MAX;
					}
					else
						tien_loi = -1;
				}
			}
		}
	}
	if (tien_loi == -1)
		printf("Du lieu khong hop le\n");
	else
	{
		printf("Tien loi la: %0.2f\n", tien_loi);
	}
	_getch();
}
