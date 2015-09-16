#include <iostream>
#include <string>

using namespace std;

void main()
{
	int soN, hangTram, hangChuc, hangDonVi;
	string soLa, chucDonVi;
	cout << "nhap vao mot so co ba chu so: ";
	cin >> soN;

	//tinh tram -- chuc -- don vi

	hangTram = soN / 100;
	hangChuc = (soN % 100) / 10;
	hangDonVi = soN % 10;


	//hangTram
	if (hangTram == 1.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "mot tram ";
	else if (hangTram == 2.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "hai tram ";
	else if (hangTram == 3.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "ba tram ";
	else if (hangTram == 4.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "bon tram ";
	else if (hangTram == 5.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "nam tram ";
	else if (hangTram == 6.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "sau tram ";
	else if (hangTram == 7.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "bay tram ";
	else if (hangTram == 8.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "tam tram ";
	else if (hangTram == 9.0 && hangChuc == 0.0 && hangDonVi == 0.0)
		cout << "chin tram ";
	//hangChuc
	else if (hangTram == 0.0 && hangChuc == 1.0 && hangDonVi == 0.0)
		cout << "muoi ";
	else if (hangTram == 0.0 && hangChuc == 2.0 && hangDonVi == 0.0)
		cout << " hai muoi ";
	else if (hangTram == 0.0 && hangChuc == 3.0 && hangDonVi == 0.0)
		cout << "ba muoi ";
	else if (hangTram == 0.0 && hangChuc == 4.0 && hangDonVi == 0.0)
		cout << "bon muoi ";
	else if (hangTram == 0.0 && hangChuc == 5.0 && hangDonVi == 0.0)
		cout << "nam muoi ";
	else if (hangTram == 0.0 && hangChuc == 6.0 && hangDonVi == 0.0)
		cout << "sau muoi ";
	else if (hangTram == 0.0 && hangChuc == 7.0 && hangDonVi == 0.0)
		cout << "bay muoi ";
	else if (hangTram == 0.0 && hangChuc == 8.0 && hangDonVi == 0.0)
		cout << "tam muoi ";
	else if (hangTram == 0.0 && hangChuc == 9.0 && hangDonVi == 0.0)
		cout << "chin muoi ";
	//hangDonVi
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 1.0)
		cout << "mot ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 2.0)
		cout << "hai ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 3.0)
		cout << "ba ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 4.0)
		cout << "bon ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 5.0)
		cout << "nam ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 6.0)
		cout << "sau ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 7.0)
		cout << "bay ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 8.0)
		cout << "tam ";
	else if (hangTram == 0.0 && hangChuc == 0.0 && hangDonVi == 9.0)
		cout << "chin ";
	else
	{
		string hangTramLa = " ";
		switch (hangTram)
		{
		case 1:
			hangTramLa = "Mot tram";
			break;
		case 2:
			hangTramLa = "Hai tram";
			break;
		case 3:
			hangTramLa = "Ba tram";
			break;
		case 4:
			hangTramLa = "Bon tram";
			break;
		case 5:
			hangTramLa = "Nam tram";
			break;
		case 6:
			hangTramLa = "Sau tram";
			break;
		case 7:
			hangTramLa = "Bay tram";
			break;
		case 8:
			hangTramLa = "Tam tram";
			break;
		case 9:
			hangTramLa = "Chin tram";
			break;
		}
		string hangChucLa = " ";
		switch (hangChuc)
		{
		case 0:
			hangChucLa = "le";
			break;
		case 1:
			hangChucLa = "Muoi";
			break;
		case 2:
			hangChucLa = "Hai muoi";
			break;
		case 3:
			hangChucLa = "Ba muoi";
			break;
		case 4:
			hangChucLa = "Bon muoi";
			break;
		case 5:
			hangChucLa = "Nam muoi";
			break;
		case 6:
			hangChucLa = "Sau muoi";
			break;
		case 7:
			hangChucLa = "Bay muoi";
			break;
		case 8:
			hangChucLa = "Tam muoi";
			break;
		case 9:
			hangChucLa = "Chin muoi";
			break;
		}
		string hangDonViLa = " ";
		switch (hangDonVi)
		{
		case 1:
			hangDonViLa = ("Mot");
			break;
		case 2:
			hangDonViLa = ("Hai");
			break;
		case 3:
			hangDonViLa = ("Ba");
			break;
		case 4:
			hangDonViLa = ("Bon");
			break;
		case 5:
			hangDonViLa = ("Nam ");
			break;
		case 6:
			hangDonViLa = ("Sau");
			break;
		case 7:
			hangDonViLa = ("Bay");
			break;
		case 8:
			hangDonViLa = ("Tam");
			break;
		case 9:
			hangDonViLa = ("Chin");
			break;
		}

		cout << "so nhap vao la: " << soN << "\n";
		cout << "doc la: " << hangTramLa << " " << hangChucLa << " " << hangDonViLa << endl;
						
	}
	cin.get();
	system("PAUSE");
}