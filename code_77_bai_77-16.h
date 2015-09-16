#include <iostream>
#include <string.h>
using namespace std;

void main()
{
	int thang, n;
	double heso, luong, luongCanBan;
	const int luongCB = 650;
	//ban co can nhap luong can ban khong
	tienluong:;
	cout << "ban co can nhap luong can ban khong: ";
	cout << "\n1.co";
	cout << "\n2.khong" << "\n";

	cout << "ban chon: ";
	cin >> n;
	
	
	if (n != 1 && n != 2)
	{
		cout << "nhap sai xin ban hay nhap lai!!" ;
		goto tienluong;
		
	}
	else if(n == 2)
	{
		//nhap vao so thang
		cout << "nhap vao so thang can tinh: " << "\n";
		cin >> thang;



		//tinh 
		if (thang < 12)
		{
			cout << "tien luong la: " << 1.92 * luongCB * thang << endl;
		}
		else if (12 <= thang && thang < 36)
		{
			cout << "tien luong la: " << 2.34 * luongCB * thang << endl;
		}
		else if (36 <= thang && thang < 60)
		{
			cout << "tien luong la: " << 3 * luongCB * thang << endl;
		}
		else
		{
			cout << "tien luong la: " << 4.5 * luongCB * thang << endl;
		}
	}
	else if (n == 1)
	{
		//nhap vao luong can ban
		cout << "nhap vao luong can ban: " << "\n";
		cin >> luongCanBan;

		//nhap vao so thang
		cout << "nhap vao so thang can tinh: " << "\n";
		cin >> thang;

		//tinh 
		if (thang < 12)
		{
			cout << "tien luong la: " << 1.92 * luongCanBan * thang << endl;
		}
		else if (12 <= thang && thang < 36)
		{
			cout << "tien luong la: " << 2.34 * luongCanBan * thang << endl;
		}
		else if (36 <= thang && thang < 60)
		{
			cout << "tien luong la: " << 3 * luongCanBan * thang << endl;
		}
		else
		{
			cout << "tien luong la: " << 4.5 * luongCanBan * thang << endl;
		}
	}
	cin.get();
	system("PAUSE");
}