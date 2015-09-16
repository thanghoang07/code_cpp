#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void main()
{
	int n;
	double tan = 0.0, ta = 0.0,
		yen = 0.0, kg = 0.0,
		hg = 0.0, dag = 0.0, g = 0.0;
	//chon don vi khoi luong can chuyen
	cout << "chon gia tri khoi luong can chuyen: ";
	cout << "\n1.tan";
	cout << "\n2.ta";
	cout << "\n3.yen";
	cout << "\n4.kg";
	cout << "\n5.hg";
	cout << "\n6.dag";
	cout << "\n7.g";
	
	//nguoi dung chon
	khoiluong:;
	cout << "\nBan chon: ";
	cin >> n;
	
	if (n < 0 || n > 7)
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto khoiluong;
	}

	//chuyen tu tan sang ta -- yen -- kg -- hg -- dag -- g
	else if (n == 1)
	{
	cout << "nhap gia tri tan can tinh: ";
	cin  >> tan;
	cout << "gia tri ta  can tim la: "       << tan / 10 << 
		"\n" << "gia tri yen can tim la: "   << tan / 100 << 
		"\n" << "gia tri kg  can tim la: "   << tan / 1000 << 
		"\n" << "gia tri hg  can tim la: "   << tan / 10000 << 
		"\n" << "gia tri dag can tim la: "   << tan / 100000 << 
		"\n" << "gia tri g   can tim la: "   << tan / 1000000 << "\n"<< endl;
	}
	//chuyen tu ta sang tan -- yen -- kg -- hg -- dag -- g
	else if (n == 2)
	{
	cout << "nhap gia tri ta can tinh: ";
	cin  >> ta;
	cout << "gia tri tan can tim la: "       << ta * 10 << 
		"\n" << "gia tri yen can tim la: "   << ta / 10 << 
		"\n" << "gia tri kg  can tim la: "   << ta / 100 << 
		"\n" << "gia tri hg  can tim la: "   << ta / 1000 << 
		"\n" << "gia tri dag can tim la: "   << ta / 10000 << 
		"\n" << "gia tri g   can tim la: "   << ta / 100000 << "\n" << endl;
	}
	//chuyen tu yen sang tan -- ta -- kg -- hg -- dag -- g
	else if (n == 3)
	{
	cout << "nhap gia tri yen can tinh: ";
	cin  >> yen;
	cout << "gia tri tan can tim la: "       << yen * 100 << 
		"\n" << "gia tri ta  can tim la: "   << yen * 10 << 
		"\n" << "gia tri kg  can tim la: "   << yen / 10 << 
		"\n" << "gia tri hg  can tim la: "   << yen / 100 << 
		"\n" << "gia tri dag can tim la: "   << yen / 1000 << 
		"\n" << "gia tri g   can tim la: "   << yen / 10000 << "\n" << endl; 
	}
	//chuyen tu kg sang tan -- ta -- yen -- hg -- dag -- g
	else if (n == 4)
	{
	cout << "nhap gia tri kg can tinh: ";
	cin  >> kg;
	cout << "gia tri tan can tim la: "	     << kg * 1000 << 
		"\n" << "gia tri ta  can tim la: "   << kg * 100 << 
		"\n" << "gia tri yen can tim la: "   << kg * 10 << 
		"\n" << "gia tri hg  can tim la: "   << kg / 10 << 
		"\n" << "gia tri dag can tim la: "   << kg / 100 << 
		"\n" << "gia tri g   can tim la: "   << kg / 1000  << "\n" << endl;
	}
	//chuyen tu hg sang tan -- ta -- yen -- kg -- dag -- g
	else if (n == 5)
	{
	cout << "nhap gia tri hg can tinh: ";
	cin  >> hg;
	cout << "gia tri tan can tim la: "       << hg * 10000 << 
		"\n" << "gia tri ta  can tim la: "   << hg * 1000 << 
		"\n" << "gia tri yen can tim la: "   << hg * 100 << 
		"\n" << "gia tri kg  can tim la: "   << hg * 10 << 
		"\n" << "gia tri dag can tim la: "   << hg / 10 << 
		"\n" << "gia tri g   can tim la: "   << hg / 100  << "\n" << endl;
	}
	//chuyen tu dag sang tan -- ta -- yen -- kg -- hg -- g 
	else if (n == 6)
	{
	cout << "nhap gia tri dag can tinh: ";
	cin  >> dag;
	cout << "gia tri tan can tim la: "       << dag * 100000 << 
		"\n" << "gia tri ta  can tim la: "   << dag * 10000 << 
		"\n" << "gia tri yen can tim la: "   << dag * 1000 << 
		"\n" << "gia tri kg  can tim la: "   << dag * 100 << 
		"\n" << "gia tri hg  can tim la: "   << dag * 10 <<
		"\n" << "gia tri g   can tim la: "   << dag / 10 << "\n" << endl;
	}
	//chuyen tu g sang tan -- ta -- yen -- kg -- hg -- dag
	else if (n == 7)
	{
	cout << "nhap gia tri g can tinh: ";
	cin  >> g;
	cout << "gia tri tan can tim la: "       << g * 1000000 <<
		"\n" << "gia tri ta  can tim la: "   << g * 100000 <<
		"\n" << "gia tri yen can tim la: "   << g * 10000 <<
		"\n" << "gia tri kg  can tim la: "   << g * 1000 << 
		"\n" << "gia tri h g can tim la: "   << g * 100 << 
		"\n" << "gia tri dag can tim la: "   << g * 10 << "\n" << endl;
	}
	else
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto khoiluong;
	}
	cin.get();
	system("PAUSE");
}