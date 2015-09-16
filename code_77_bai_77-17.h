#include <iostream>

using namespace std;

int main()
{
	int gioBatDau, gioKetThuc, tongThoiGian,
		thoiGianMoCua, thoiGianDongCua, tongThoiGianHoatDong;
	double tien;

	thoiGianMoCua = 8;
	thoiGianDongCua = 24;

	tongThoiGianHoatDong = thoiGianDongCua - thoiGianMoCua;
	
	//nhap gio 
	do
	{
		cout << "nhap gio bat dau: " << "\n";
		cin >> gioBatDau;

		cout << "nhap gio ket thuc: " << "\n";
		cin >> gioKetThuc;
						
	} 
	while
		(gioBatDau >= 8.0 && gioKetThuc <= 24); 
	{
		tongThoiGian = gioKetThuc - gioBatDau;

		if (tongThoiGian > 3)
		{
			tien = (3 * 30000 + (tongThoiGian - 3) * 30000 * 0.7);
			cout << "tong tien la: " << tien << "\n";
		}
		else if (tongThoiGian <= 3 && tongThoiGian != 0)
		{
			tien = tongThoiGian * 30000;
			cout << "tong tien la: " << tien << "\n";
		}
		else
		{
			cout << "sai gio, nhap lai " << "\n";
		}
		// gio ket thuc nho hon 17h
		if (gioKetThuc <= 17.0)
		{
			tien *= 0.9;
			cout << "tong tien la: " << tien << "\n";
		}
	}
	return 0;
	system("PAUSE");
}
