#include "stdio.h"
#include "conio.h"

void main()
{
	//dinh nghia cac bien hang
	#define DG_SANG 6000  //don gia buoi sang
	#define DG_CHIEU 7500 //don gia buoi chieu
	#define CHUYEN_CA 12  //gio chuyen cab
	#define VAO_CA_MIN 6  //gio vao ca som nhat
	#define RA_CA_MAX 18  //gio ra ca tre nhat
	//khai bao bien
	float gio_vao_ca, gio_ra_ca,   //gio vao va ra ca
		so_gio_sang, so_gio_chieu, //so gio lam buoi sang va chieu
		tien_luong;
	//nhap tu ban phim
	tinhgiolam:;
	printf("nhap vao gio vao ca: ");
	scanf_s("%f", &gio_vao_ca);
	printf("nhap vao gio ra ca: ");
	scanf_s("%f", &gio_ra_ca);
	//tinh
	if(gio_vao_ca >= VAO_CA_MIN 
	 && gio_ra_ca <= RA_CA_MAX 
	&& gio_vao_ca <= gio_ra_ca)
	{
		//tinh so gio lam
		if(gio_ra_ca <= CHUYEN_CA )
		{
			so_gio_chieu = 0;
			so_gio_sang  = gio_ra_ca - gio_vao_ca;
			
		}
		if(gio_vao_ca >= CHUYEN_CA )
		{
			so_gio_sang  = 0;
			so_gio_chieu = gio_ra_ca - gio_vao_ca;
			
		}
		if(gio_vao_ca <= CHUYEN_CA && gio_ra_ca >= CHUYEN_CA)
		{
			so_gio_sang  = CHUYEN_CA - gio_vao_ca;
			so_gio_chieu = gio_ra_ca - CHUYEN_CA ;
		}
		//tinh tien luong
		tien_luong = so_gio_sang * DG_SANG + so_gio_chieu * DG_CHIEU;
		printf("tien luong duoc tinh la: %0.3f", tien_luong);
		
	}
		else
		{
			printf("du lieu khong hop le!!!!");
			goto tinhgiolam;
		}
	_getch();
}
/*
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	//dinh nghia cac bien hang
	#define DG_SANG 6000  //don gia buoi sang
	#define DG_CHIEU 7500 //don gia buoi chieu
	#define CHUYEN_CA 12  //gio chuyen cab
	#define VAO_CA_MIN 6  //gio vao ca som nhat
	#define RA_CA_MAX 18  //gio ra ca tre nhat
	//khai bao bien
	float gio_vao_ca, gio_ra_ca,   //gio vao va ra ca
		so_gio_sang, so_gio_chieu, //so gio lam buoi sang va chieu
		tien_luong;
	//nhap tu ban phim
	tinhgiolam:;
	cout << "nhap vao gio vao ca: " << "\n" ;
	cin  >> gio_vao_ca;
	cout << "nhap vao gio ra ca: " << "\n" ;
	cin  >> gio_ra_ca;
	//tinh
	if (gio_vao_ca >= VAO_CA_MIN
		&& gio_ra_ca <= RA_CA_MAX
		&& gio_vao_ca <= gio_ra_ca)
	{
		//tinh so gio lam
		if (gio_ra_ca <= CHUYEN_CA)
		{
			so_gio_chieu = 0;
			so_gio_sang = gio_ra_ca - gio_vao_ca;

		}
		if (gio_vao_ca >= CHUYEN_CA)
		{
			so_gio_sang = 0;
			so_gio_chieu = gio_ra_ca - gio_vao_ca;

		}
		if (gio_vao_ca <= CHUYEN_CA && gio_ra_ca >= CHUYEN_CA)
		{
			so_gio_sang = CHUYEN_CA - gio_vao_ca;
			so_gio_chieu = gio_ra_ca - CHUYEN_CA;
		}
		//tinh tien luong
		tien_luong = so_gio_sang * DG_SANG + so_gio_chieu * DG_CHIEU;
		printf("tien luong duoc tinh la: %0.3f", tien_luong);

	}
	else
	{
		printf("du lieu khong hop le!!!!");
		goto tinhgiolam;
	}
	_getch();
}*/