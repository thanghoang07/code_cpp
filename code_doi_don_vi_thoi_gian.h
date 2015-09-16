#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	int n;
	double hour = 0.0, minute = 0.0, second = 0.0, day = 0.0 ;
	
	//chon ngay -- gio -- phut -- giay
	cout << "chon gia tri thoi gian can chuyen: ";
	cout << "\n1.ngay";
	cout << "\n2.gio";
	cout << "\n3.phut";
	cout << "\n4.giay";
	//nguoi dung chon
	time:;
	cout << "\nBan chon: ";
	cin >> n;
	
	//chuyen tu ngay sang gio -- phut -- giay 
	if (n < 0 || n > 4)
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto time;
	}
	else if (n == 1)
	{
	cout << "nhap so ngay: ";
	cin  >> day;
	cout << "so gio can tim la: "  << day * 24 << "\n"
	<< "so phut can tim la: " << day * 24 * 60 << "\n"
	<< "so giay can tim la: " << day * 24 * 3600 << "\n " << endl;
	}

	//chuyen tu gio sang  ngay -- phut -- giay
	else if (n == 2)
	{
	cout << "nhap so gio: ";
	cin  >> hour;
	cout << "so ngay can tim la: " << hour / 24 << "\n"
	<< "so phut can tim la: " << hour * 60 << "\n" 
	<< "so giay can tim la: " << hour * 3600 << "\n " << endl;
	}
	
	//chuyen tu phut sang giay -- gio -- ngay
	else if (n == 3)
	{	
	cout << "nhap so phut: ";
	cin  >> minute;
	cout << "so ngay can tim la: " << minute / 60 / 24 << "\n"
	<< "so gio can tim la: "  << minute / 60 << "\n"
	<< "so giay can tim la: " << minute * 60 << "\n " << endl;
	}
	
	//chuyen tu giay sang phut -- gio -- ngay
	else if (n == 4)
	{
	cout << "nhap so giay: ";
	cin  >> second;
	cout << "so ngay can tim la: " << second / 3600/ 24 << "\n"
	<< "so gio can tim la : " << second / 3600  << "\n" 
	<< "so phut can tim la: " << second / 60 << "\n " << endl;
	}
	
	else 
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto time; 
	}
	cin.get();
	system("PAUSE");

}