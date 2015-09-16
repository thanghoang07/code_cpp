#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	double 
	km = 0.0, hm = 0.0,
	dam = 0.0, m = 0.0,
	dm = 0.0, cm = 0.0, mm = 0.0;
	
	//chon don vi do dai can chuyen
	cout << "chon gia tri do dai can chuyen: "
	<< "\n1.km"
	<< "\n2.hm"
	<< "\n3.dam"
	<< "\n4.m"
	<< "\n5.dm"
	<< "\n6.cm"
	<< "\n7.mm";
	
	//nguoi dung chon
	dodai:;
	cout << "\nBan chon: ";
	cin >> n;
	
	if (n < 0 || n > 7)
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto dodai;
	}
	else if(n == 1)
	{//chuyen tu km sang hm -- dam -- m -- dm -- cm -- mm
	cout << "nhap vao so km: ";
	cin  >> km;
	cout << "gia tri hm  can tinh la: "     << km / 10 
		<< "\n" << "gia tri dam can tinh la: " << km / 100 
		<< "\n" << "gia tri m   can tinh la: " << km / 1000 
		<< "\n" << "gia tri dm  can tinh la: " << km / 10000 
		<< "\n" << "gia tri cm  can tinh la: " << km / 100000 
		<< "\n" << "gia tri mm  can tinh la: " << km / 1000000 << "\n " << endl;
	}
	else if (n == 2)
	{//chuyen tu hm sang km -- dam -- m -- dm -- cm -- mm
	cout << "nhap vao so hm: ";
	cin  >> hm;
	cout << "gia tri km  can tinh la: "     << hm * 10 
		<< "\n" << "gia tri dam can tinh la: " << hm / 10 
		<< "\n" << "gia tri m   can tinh la: " << hm / 100 
		<< "\n" << "gia tri dm  can tinh la: " << hm / 1000 
		<< "\n" << "gia tri cm  can tinh la: " << hm / 10000 
		<< "\n" << "gia tri mm  can tinh la: " << hm / 100000 << "\n " << endl;
	}
	else if (n == 3)
	{//chuyen tu dam sang km -- hm -- m -- dm -- cm -- mm
	cout << "nhap vao so dam: ";
	cin  >> dam;
	cout << "gia tri km  can tinh la: "     << dam * 100 
		<< 	"\n" << "gia tri hm  can tinh la: " << dam * 10 
		<< 	"\n" << "gia tri m   can tinh la: " << dam / 10 
		<< 	"\n" << "gia tri dm  can tinh la: " << dam / 100 
		<< 	"\n" << "gia tri cm  can tinh la: " << dam / 1000 
		<< 	"\n" << "gia tri mm  can tinh la: " << dam / 10000 << "\n " << endl;
	}
	else if (n == 4)
	{//chuyen tu m sang km -- hm -- dam -- dm -- cm -- mm
	cout << "nhap vao so m: ";
	cin  >> m;
	cout << "gia tri km  can tinh la: "     << m * 1000
		<< 	"\n" << "gia tri hm  can tinh la: " << m * 100 
		<< 	"\n" << "gia tri dam can tinh la: " << m * 10 
		<< 	"\n" << "gia tri dm  can tinh la: " << m / 10 
		<< 	"\n" << "gia tri cm  can tinh la: " << m / 100 
		<< 	"\n" << "gia tri mm  can tinh la: " << m / 1000 << "\n " << endl;
	}
	else if (n == 5)
	{//chuyen tu dm sang km -- hm -- dam -- m -- cm -- mm
	cout << "nhap vao so dm: ";
	cin  >> dm;
	cout << "gia tri km  can tinh la: "     << dm * 10000 
		<< 	"\n" << "gia tri hm  can tinh la: " << dm * 1000 
		<< 	"\n" << "gia tri dam can tinh la: " << dm * 100 
		<< 	"\n" << "gia tri m   can tinh la: " << dm * 10 
		<< 	"\n" << "gia tri cm  can tinh la: " << dm / 10 
		<< 	"\n" << "gia tri mm  can tinh la: " << dm / 100 << "\n " << endl;
	}
	else if (n == 6)
	{//chuyen tu cm sang km -- hm -- dam -- m -- dm -- mm
	cout << "nhap vao so cm: ";
	cin  >> cm;
	cout << "gia tri km  can tinh la: "     << cm * 100000 
		<< 	"\n" << "gia tri hm  can tinh la: " << cm * 10000 
		<< 	"\n" << "gia tri dam can tinh la: " << cm * 1000 
		<< 	"\n" << "gia tri m   can tinh la: " << cm * 100 
		<< 	"\n" << "gia tri dm  can tinh la: " << cm * 10 
		<<	"\n" << "gia tri mm  can tinh la: " << cm / 10 << "\n " << endl;
	}
	else if (n == 7)
	{//chuyen tu mm sang km -- hm -- dam -- m -- dm -- cm
	cout << "nhap vao so mm: ";
	cin  >> mm;
	cout << "gia tri km  can tinh la: "     << mm * 1000000 
		<< 	"\n" << "gia tri hm  can tinh la: " << mm * 100000 
		<< 	"\n" << "gia tri dam can tinh la: " << mm * 10000 
		<< 	"\n" << "gia tri m   can tinh la: " << mm * 1000 
		<< 	"\n" << "gia tri dm  can tinh la: " << mm * 100 
		<< 	"\n" << "gia tri cm  can tinh la: " << mm * 10 << "\n " << endl;
	}
	else
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto dodai;
	}
	cin.get();
	system("PAUSE");
}