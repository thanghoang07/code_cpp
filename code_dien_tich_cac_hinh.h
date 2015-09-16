//xong :3 C:\Users\pc\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Ứng dụng Chrome

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define PI 3.14159265359

using namespace std;

void main()
{
	double
		R = 0.0, D = 0.0, chieu_Dai = 0.0, chieu_Rong = 0.0,
		canh_Hinh_Vuong_A = 0.0,
		canh_A = 0.0, canh_B = 0.0, canh_C = 0.0,
	    Ax1 = 0.0, Ax2 = 0.0, Ax3 = 0.0,
		nua_Chu_Vi = 0.0, P = 0.0;

	string dung, khong, trung_Lap;

	char ch = getchar();

	//hinh tron:

		//doc gia tri tu ban phim:
	tron:;
	cout << "----hinh tron----" << "\n"
	<< "nhap gia tri cua ban kinh: ";
	cin >> R;

		//tinh
		if(R == 0.0)
		{
			cout << "day khong phai hinh tron :v " << "\n";
			goto tron;
		}
		else
		{
		cout << "dien tich hinh tron la: " << R * R * PI << "\n"
		<< "chu vi hinh tron la: " << 2 * R * PI << "\n" << endl;
		}
	//hinh chu nhat:

		//doc gia tri tu ban phim:
	chunhat:;
	cout << "----hinh chu nhat----" << "\n"
	<< "nhap gia tri cua chieu dai: ";
	cin >> chieu_Dai;

	cout << "nhap gia tri cua chieu rong: ";
	cin >> chieu_Rong;

		//tinh
		if( chieu_Dai == 0.0 && chieu_Rong != 0.0)
		{
			cout << "day khong phai hinh chu nhat" << "\n"
			<< " day la duong thang co do dai la: " << chieu_Rong << "\n";
			goto chunhat;
		}
		else if ( chieu_Rong == 0.0 && chieu_Dai != 0.0)
		{
			cout << "day khong phai hinh chu nhat" << "\n"
			<< " day la duong thang co do dai la: " << chieu_Dai << "\n";
			goto chunhat;
		}
		else if (chieu_Dai == 0.0 && chieu_Rong == 0.0)
		{
			cout << "day khong phai hinh chu nhat" << "\n";
			goto chunhat;
		}
		else if ( chieu_Dai == chieu_Rong && chieu_Dai != 0.0 && chieu_Rong != 0.0)
		{
			cout << "day khong phai hinh chu nhat" << "\n"
			<< "day la hinh vuong " "\n"
			<< "chu vi hinh vuong: " << 4 * chieu_Dai << "\n"
			<< "dien tich hinh vuong: " << chieu_Dai * chieu_Rong << "\n";
			goto chunhat;
		}
		else
		{
		cout << "dien tich hinh chu nhat: " << chieu_Dai * chieu_Rong << "\n"
		<< "chu vi hinh chu nhat: " << (chieu_Dai + chieu_Rong) * 2 << "\n " << endl;
		}
	//hinh vuong:

		//nhap gia tri tu ban phim:
	hinhvuong:;
	cout << "----hinh vuong----" << "\n"
	<< "nhap vao canh hinh vuong: ";
	cin >> canh_Hinh_Vuong_A;

		//tinh
	if(canh_Hinh_Vuong_A == 0)
	{
		cout <<"day khong phai la hinh vuong" << "\n";
		goto hinhvuong;
	}
	else
	{
	cout << "chu vi hinh vuong: " << 4 * canh_Hinh_Vuong_A << "\n"
	<< "dien tich hinh vuong: " << canh_Hinh_Vuong_A * canh_Hinh_Vuong_A << "\n" << endl;
	}
	//tam giac

		//nhap gia tri tu ban phim:
	tamgiac:;
	cout << "----hinh tam giac----" << "\n"
	<< "nhap vao canh a: ";
	cin  >> canh_A;

	cout << "nhap vao canh b: ";
	cin  >> canh_B;

	cout << "nhap vao canh c: ";
	cin  >> canh_C;

	 if (canh_A != 0.0 && canh_B != 0.0 && canh_C != 0.0)
	{//kiem tr cac canh co bang 0 hay ko??
		Ax1 = canh_A * canh_A;
		Ax2 = canh_B * canh_B;
		Ax3 = canh_C * canh_C;

		P = (canh_A + canh_B + canh_C);
		nua_Chu_Vi = P / 2;

		if (canh_A + canh_B > canh_C || canh_A + canh_C > canh_B || canh_B + canh_C > canh_A)
		{//|| Ax == canhA * canhA + canhC * canhC || Ax == canhA * canhA + canhB * canhB

			cout << "day la hinh tam giac: " << "\n";
			
			if (Ax1 == Ax2 + Ax3)
			//kiem tra dk tam giac vuong
				
			{//printf("\ndien tich tam giac la:s= %f\n",sqrt(p*(p-a)*(p-b)*(p-c)));
				
				cout << "day la tam giac vuong " << "\n"
				<< "co canh huyen: " << canh_A << "\n"
				<< "canh goc vuong: " << canh_B << " va " << canh_C << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_B * canh_C);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if (Ax2 == Ax1 + Ax3)
			{
				cout << "day la tam giac vuong " << "\n"
				<< "co canh huyen: " << canh_B << "\n" 
				<< "canh goc vuong: " << canh_A << " va " << canh_C << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_A * canh_C);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if (Ax3 == Ax1 + Ax2)
			{
				cout << "day la tam giac vuong " << "\n"
				<< "co canh huyen: " << canh_C << "\n"
				<< "canh goc vuong: " << canh_A << " va " << canh_B << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_A * canh_B);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if(Ax1 == Ax2 && Ax3 == Ax1 + Ax2)
			{//tam giac vuong can 
			cout << "day la tam giac vuong can " << "\n"
				<< "co canh huyen: " << canh_C << "\n"
				<< "canh goc vuong bang nhau: " << canh_A << " va " << canh_B << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_A * canh_B);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if(Ax2 == Ax3 && Ax1 == Ax3 + Ax2)
			{ 
			cout << "day la tam giac vuong can " << "\n"
				<< "co canh huyen: " << canh_A << "\n"
				<< "canh goc vuong: " << canh_B << " va " << canh_C << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_B * canh_C);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if(Ax1 == Ax3 && Ax2 == Ax1 + Ax3)
			{
			cout << "day la tam giac vuong can " << "\n"
				<< "co canh huyen: " << canh_B << "\n" 
				<< "canh goc vuong: " << canh_A << " va " << canh_C << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_A * canh_C);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else
			{//kiem tra cac dk tam giac con lai
				
				//kiem ttra dk tam giac can
				
				if (canh_A == canh_B && canh_B != canh_C && canh_A != canh_C)
				{
					cout << "day la tam giac can" << "\n"
					<< "co cac canh ben bang nhau la: " << canh_A << " va " << canh_B << "\n";
					printf("\ndien tich tam giac can la: S = %f\n",
						sqrt(nua_Chu_Vi * (nua_Chu_Vi - canh_A) * (nua_Chu_Vi - canh_B) * (nua_Chu_Vi - canh_C)));
					printf("\nchu vi tam giac can la: C = %f\n", P);
				}
				else if (canh_A == canh_C && canh_C != canh_B && canh_A != canh_B)
				{
					cout << "day la tam giac can" << "\n"
					<< "co cac canh ben bang nhau la: " << canh_A << " va " << canh_C << "\n";
					printf("\ndien tich tam giac can la: S = %f\n",
						sqrt(nua_Chu_Vi * (nua_Chu_Vi - canh_A) * (nua_Chu_Vi - canh_B) * (nua_Chu_Vi - canh_C)));
					printf("\nchu vi tam giac can la: C = %f\n", P);
				}
				else if (canh_B == canh_C && canh_B != canh_A && canh_C != canh_A)
				{
					cout << "day la tam giac can" << "\n"
					<< "co cac canh ben bang nhau la: " << canh_B << " va " << canh_C << "\n";
					printf("\ndien tich tam giac can la: S = %f\n",
						sqrt(nua_Chu_Vi * (nua_Chu_Vi - canh_A) * (nua_Chu_Vi - canh_B) * (nua_Chu_Vi - canh_C)));
					printf("\nchu vi tam giac can la: C = %f\n", P);
				}
				else if (canh_A == canh_B && canh_A == canh_C && canh_B == canh_C)
				{//kiem tra dk tam giac deu
					
					cout << "day la tam giac deu " << "co canh la: " << canh_A << "\n";
					printf("\ndien tich tam giac deu la: S = %f\n ",
						sqrt(nua_Chu_Vi * (nua_Chu_Vi - canh_A) * (nua_Chu_Vi - canh_B) * (nua_Chu_Vi - canh_C)));
					printf("\nchu vi tam giac deu la: C = %f\n", P);
					
				}
				else if (canh_A != canh_B && canh_A != canh_C && canh_B != canh_C)
				{//kiem tra dk tam giac thuong
					
					cout << "day la tam giac thuong co cac canh: " << canh_A << " va " << canh_B << " va " << canh_C << "\n";
					printf("\ndien tich tam giac la: S = %f\n",
						sqrt(nua_Chu_Vi * (nua_Chu_Vi - canh_A) * (nua_Chu_Vi - canh_B) * (nua_Chu_Vi - canh_C)));
					printf("\nchu vi tam giac  la: C = %f\n", P);
					
				}
				else
				{
					cout << "day khong phai hinh tam giac :v ";
					goto tamgiac;
				}
			}
		}
	}
	else
	{
		cout << "day khong phai hinh tam giac :3 " << "\n";
		goto tamgiac;
	}
	cin.get();
	system("PAUSE");
}