//khac001
/*#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

class KhoiLop
{
private:
string makhoi;
string tenkhoi;
public:
KhoiLop();
KhoiLop(string m, string t);
KhoiLop(const KhoiLop& k1);
string getmakhoi();
string gettenkhoi();
void setmakhoi(string m);
void settenkhoi(string t);
friend istream& operator >>(istream& nhap, KhoiLop& k);
friend ostream& operator <<(ostream& xuat, KhoiLop& k);
friend bool operator ==(const KhoiLop a, const KhoiLop b);
void SapXep(KhoiLop a[]);
};
KhoiLop::KhoiLop()
{
makhoi = "aaa";
tenkhoi = "aaa";
}
KhoiLop::KhoiLop(string m, string t)
{
setmakhoi(m);
settenkhoi(t);
}
KhoiLop::KhoiLop(const KhoiLop& k1)
{
makhoi = k1.makhoi;
tenkhoi = k1.tenkhoi;
}
string KhoiLop::getmakhoi()
{
return makhoi;
}
string KhoiLop::gettenkhoi()
{
return tenkhoi;
}
void KhoiLop::setmakhoi(string m)
{
makhoi = m;
}
void KhoiLop::settenkhoi(string t)
{
tenkhoi = t;
}
istream& operator >>(istream& nhap, KhoiLop& k)
{
cout << " Nhap ma khoi: ";
nhap >> k.makhoi;
cout << " Nhap ten khoi: ";
nhap >> k.tenkhoi;
return nhap;
}
ostream& operator <<(ostream& xuat, KhoiLop& k)
{
xuat << "\nMa khoi: " << k.makhoi << "\nTen khoi: " << k.tenkhoi;
return xuat;
}
bool operator ==(const KhoiLop a, const KhoiLop b)
{
if (a.makhoi == b.makhoi)
{
cout << " \nHai khoi giong nhau. ";
}
else
cout << " \nHai khoi khac nhau. ";
}
void KhoiLop::SapXep(KhoiLop a[])
{
int i, j;
string temp;
for (i = 1; i <= 2; i++)
for (j = i + 1; j <= 2; j++)
if (a[i].makhoi<a[j].makhoi)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
class HeDT
{
private:
string  maDT;
string tenDT;
KhoiLop dsk;
public:
HeDT();
HeDT(string mDT, string tDT, KhoiLop ds);
HeDT(const HeDT& DT1);
string getmaDT();
string gettenDT();
KhoiLop getdsk();
void setmaDT(string mDT);
void settenDT(string tDT);
void setdsk(KhoiLop ds);
friend istream& operator >>(istream& nhap, HeDT& DT);
friend ostream& operator <<(ostream& xuat, HeDT& DT);
friend bool operator ==(const HeDT a, const HeDT b);
void SapXep();
};
HeDT::HeDT()
{
maDT = "aaa";
tenDT = "aaa";
dsk.getmakhoi() = "aaa";
dsk.gettenkhoi() = "aaa";
}
HeDT::HeDT(string mDT, string tDT, KhoiLop ds)
{
setmaDT(mDT);
settenDT(tDT);
setdsk(ds);
}
HeDT::HeDT(const HeDT& DT1)
{
maDT = DT1.maDT;
tenDT = DT1.tenDT;
dsk = DT1.dsk;
}
string HeDT::getmaDT()
{
return maDT;
}
string HeDT::gettenDT()
{
return tenDT;
}
KhoiLop HeDT::getdsk()
{
return dsk;
}
void HeDT::setmaDT(string mDT)
{
maDT = mDT;
}
void HeDT::settenDT(string tDT)
{
tenDT = tDT;
}
void HeDT::setdsk(KhoiLop ds)
{
dsk = ds;
}
istream& operator >>(istream& nhap, HeDT& DT)
{
cout << " Nhap ma dao tao: ";
nhap >> DT.maDT;
cout << " Nhap ten dao tao: ";
nhap >> DT.tenDT;
return nhap;
}
ostream& operator <<(ostream& xuat, HeDT& DT)
{
xuat << "\nMa dao tao: " << DT.maDT << "\nTen dao tao: " << DT.tenDT;
return xuat;
}
bool operator ==(const HeDT a, const HeDT b)
{
if (a.maDT == b.maDT)
{
cout << " Hai he dao tao giong nhau. ";
}
else
cout << " Hai he dao tao khac nhau. ";
}
int main()
{
system("cls");
KhoiLop a, b;
HeDT d1, d2;
cin >> d1 >> a;
cin >> d2 >> b;
a == b;
d1 == d2;
cout << d1 << a << d2 << b;
return 0;
}*/

//khac002 tinh tien luong || loi ko chay :v
/*#include <iostream>
#include <conio.h>

main()
{
	int n, m, d = 0;
	  cout << "Nhap so gio " ;
	  cin >> n;
	  cout << "Nhap so luong ";
	  cin >> m;
	    if (n<40)
		  {
			   d = 1;
    	    }
		switch (d)
			{
		case 1: 
			cout << "\nTong cong: " << n*m << " dong";
			break;
		default: 
			cout << "\nTogn cong: " << n*m + (n*m) / 2 << " dong";
		}
		getch();

}*/

//khac003 
/*5.8.Vi?t ch??ng trình tính ti?n ?i?n g?m các kho?ng sau :
-Ti?n thuê bao ?i?n k? : 1000? / tháng
- ??nh m?c s? d?ng ?i?n cho m?i h? là : 50 KW v?i giá 230? / KW
- N?u ph?n v??t ??nh m?c <= 50KW thì tính giá 480? / KW
- N?u 50KW < ph?n v??t ??nh m?c < 100KW thì tính giá 700? / KW
- N?u ph?n v??t ??nh m?c <= 100KW thì tính giá 900? / KW
Ch? s? m?i và c? ???c nh?p vào t? bàn phím
- In ra màn hình ch? s? c?, ch? s? m?i, ti?n tr? ??nh m?c, ti?n tr? v??t ??nh m?c, t?ng ti?n ph?i tr?.
*/

/*#include <iostream>
#include <conio.h>

main()
{
	int n, m, tien, d = 5, tDinhMuc, tVuotDinhMuc;
	cout << "Nhap so KW cua thang: " << endl;
	cin >> n;

	if (n > 0)
	{
		d = 1;

	}
	if (n > 49)
	{
		d = 2;
	}
	if (n > 89)
	{
		d = 3;
	}
	if (n > 149)
	{
		d = 0;
	}
	switch (d)
	{
		case 1: cout << "\n Chi so: " << n;
				tDinhMuc = 230 * n;
				cout<<"\nTien tra dinh muc: " << tDinhMuc;
				cout << "\nTong tien phai tra: " << tDinhMuc + 1000;
				break;

		case 2: cout << "\nChi so cu: 50";
				cout << "\nChi so moi: " << n - 50;
				cout << "\nTien tra dinh muc: 11500 dong";
				tVuotDinhMuc = ((n - 50) * 480);
				cout << "\nTien tra vuot dinh muc: " << tVuotDinhMuc;
				cout << "\nTong tien phai tra: " << 11500 + tVuotDinhMuc + 1000;
				break;

		case 3: cout << "\nChi so cu 100";
				cout << "\nChi so moi: " << n - 100;
				cout << "\nTien tra dinh muc: 11500 dong";
				tVuotDinhMuc = ((n - 100) * 700);
				cout << "\nTien tra vuot dinh muc: " << tVuotDinhMuc;
				cout << "\nTong tien phai tra: " << 11500 + tVuotDinhMuc + 1000;
				break;

		case 0: cout << "\nChi so cu 150";
				cout << "\nChi so moi: " << n - 150;
				cout << "\nTien tra dinh muc: 11500 dong";
				tVuotDinhMuc = ((n - 150) * 900);
				cout << "\nTien tra vuot dinh muc: " << tVuotDinhMuc;
				cout << "\nTong tien phai tra: " << 11500 + tVuotDinhMuc + 1000;
				break;

		default:
				cout << "Khong co xu nao ca :D";

	}
	getch(); 
}
*/

//++//
/*#include <stdio.h>
#include <iostream>
#include <conio.h>
void main()
{
	int n, m, d;
	printf("chi so moi: ");
	scanf("%d", &n);
	printf("chi so cu: ");
	scanf("%d", &m);

	if ((n - m) <= 50) d = 1;

	else if ((n - m)>50 && (n - m) <= 100) d = 2;

	else if ((n - m)>100 && (n - m) <= 150) d = 3;

	else if ((n - m)>150) d = 4;

	switch (d)
	{
	case 1: printf("chi so cu:%d KW\n", m);
			printf("chi so moi:%d KW\n", n);
			printf("tien tra dinh muc:%d vnd\n", (n - m) * 230);
			printf("tien tra vuot dinh muc:0vnd\n");
			printf("tong tien phai tra:%d vnd\n", (n - m) * 230 + 1000); 
			break;

	case 2: printf("chi so cu:%d KW\n", m);
			printf("chi so moi:%d KW\n", n);
			printf("tien tra dinh muc:%d vnd\n", 50 * 230);
			printf("tien tra vut dinh muc:");
			printf("tien tra vut dinh muc:%d vnd\n", ((n - m) - 50) * 480);
			printf("tong tien phai tra:%d vnd\n", (50 * 230) + (((n - m) - 50) * 480) + 1000); 
			break;

	case 3: printf("chi so cu:%d KW\n", m);
			printf("chi so moi:%d KW\n", n);
			printf("tien tra dinh muc:%d vnd \n", 50 * 230);
			printf("tien tra vut dinh muc:%d vnd\n", ((n - m) - 50) * 700);
			printf("tong tien phai tra:%d vnd\n", ((50 * 230) + (((n - m) - 50) * 700)) + 1000);
			break;

	case 4: printf("chi so cu:%d KW\n", m); printf("chi so moi:%d KW\n", n);
			printf("tien tra dinh muc:%d vnd\n", 50 * 230);
			printf("tien tra vut dinh muc:%d vnd\n", ((n - m) - 50) * 900);
			printf("tong tien phai tra:%d vnd\n", ((50 * 230) + (((n - m) - 50) * 900)) + 1000);
			break;

	}
	getch();
}*/

//khac004
//http://www.cplusplus.com/articles/sourcecode/
/*# include <iostream>
# include <cstdio>
# include <cstdlib>
# include <string>
# include <time.h>
# include <windows.h>


# define l 3
# define c 3
using namespace std;

bool validatePosition(char pos, char mt[l][c], bool player1);
bool gameOver(char mt[l][c], short op, short &cont_p1, short &cont_p2, short &cont_cpu);
void showGame(char mt[l][c], short op);
void cpu(char mt[l][c]);
void cpu_hard(char mt[l][c]);
string changeName1();
string changeName2();

int main()
{
	short i, j, op, cont_p1 = 0, cont_p2 = 0, cont_cpu = 0;
	char op2;
	char mt[l][c], pos;
	bool player1 = false, mult = false, is_cpu = false;
	string p1, p2;

	cout << "General Public License v3 \n";
	cout << "Programmer: Romulo Sorato" << endl;
	cout << "Legend: \nPlayer 1: X \nPlayer 2 and CPU: O\n\n";

	do
	{
		do
		{
			cout << "Choose your option:\n1-Multiplayer 2-CPU\n";
			cin >> op;
			if (op == 1)
				mult = true;
			else if (op == 2)
				is_cpu = true;
			if (op != 1 && op != 2)
				cout << "Choose your option, type only 1 or 2\n";
		} while (op != 1 && op != 2);

		if (is_cpu && mult)
		{
			cont_p1 = 0;
			cont_p2 = 0;
			cont_cpu = 0;
		}
		if (op == 2)
		{
			mult = false;
			cout << "Choose level:2-Easy 3-Hard\n" << endl;
			cin >> op;
		}
		fflush(stdin);

		if (op == 1)
		{
			is_cpu = false;
			p1 = changeName1();
			p2 = changeName2();
		}
		else
			p1 = changeName1();

		cout << "Enter the number corresponding to the desired location: \n" << endl << endl;

		//Starting matrix
		for (i = 0; i < l; i++)
		{
			for (j = 0; j < c; j++)
			{
				mt[i][j] = '?';
			}
		}
		// -----------
		int count = 1;
		// Showing the positions
		for (i = 0; i < l * 2; i++)
		{
			cout << "                    ";
			for (j = 0; j < c * 2; j++)
			{
				if (i % 2 == 0)
				{
					if (j % 2 == 0)
					{
						cout << "[" << count << "]" << " ";
						count++;
					}
					else
					{
						if (j != c * 2 - 1)
							cout << "| ";
					}
				}
				else
				{
					if (j % 2 != 0)
						cout << "-----";
				}
			}
			cout << endl;
		}
		//---------
		cout << endl;
		do
		{
			do
			{
				// Getting position player 1
				do
				{
					cout << "Player 1:" << p1 << "\n";
					cin >> pos;
				} while (isdigit(pos) == 0);
				player1 = true;
			} while (!validatePosition(pos, mt, player1));
			system("CLS");
			showGame(mt, op);

			if (gameOver(mt, op, cont_p1, cont_p2, cont_cpu))
				break;

			if (op == 2)
			{
				Sleep(1000);
				cpu(mt);
				system("CLS");
				showGame(mt, op);
			}
			if (op == 3)
			{
				Sleep(1000);
				cpu_hard(mt);
				system("CLS");
				showGame(mt, op);
			}
			else if (op == 1)
			{
				do
				{
					cout << "Player 2:" << p2 << "\n";
					cin >> pos;
					player1 = false;
				} while (!validatePosition(pos, mt, player1));
				system("CLS");
				showGame(mt, op);
			}

			if (gameOver(mt, op, cont_p1, cont_p2, cont_cpu))
				break;
		} while (true);
		cout << "Do you want to continue? (y to continue or any other to quit)\nOr press c to change names" << endl;
		cin >> op2;
		tolower(op2);
		system("CLS");
		if (op2 == 'c')
		{
			fflush(stdin);
			p1 = changeName1();
			p2 = changeName2();
		}
	} while (op2 == 'y' || op2 == 'c');
	return 0;
}
bool validatePosition(char pos, char mt[l][c], bool player1)
{
	if (pos == '1')
	{
		if (mt[0][0] != '?')
		{
			cout << "Position already used,type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[0][0] = 'X';
			else
				mt[0][0] = 'O';
			return true;
		}
	}
	else if (pos == '2')
	{
		if (mt[0][1] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[0][1] = 'X';
			else
				mt[0][1] = 'O';
			return true;
		}
	}
	else if (pos == '3')
	{
		if (mt[0][2] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[0][2] = 'X';
			else
				mt[0][2] = 'O';
			return true;
		}
	}
	else if (pos == '4')
	{
		if (mt[1][0] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[1][0] = 'X';
			else
				mt[1][0] = 'O';
			return true;
		}
	}
	else if (pos == '5')
	{
		if (mt[1][1] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[1][1] = 'X';
			else
				mt[1][1] = 'O';
			return true;
		}
	}
	else if (pos == '6')
	{
		if (mt[1][2] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[1][2] = 'X';
			else
				mt[1][2] = 'O';
			return true;
		}
	}
	else if (pos == '7')
	{
		if (mt[2][0] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[2][0] = 'X';
			else
				mt[2][0] = 'O';
			return true;
		}
	}
	else if (pos == '8')
	{
		if (mt[2][1] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[2][1] = 'X';
			else
				mt[2][1] = 'O';
			return true;
		}
	}
	else if (pos == '9')
	{
		if (mt[2][2] != '?')
		{
			cout << "Position already used, type another position." << endl;
		}
		else
		{
			if (player1 == true)
				mt[2][2] = 'X';
			else
				mt[2][2] = 'O';
			return true;
		}
	}
	else
		cout << "Invalid number, type number 1-9.";
	return false;
}
void showGame(char mt[l][c], short op)
{

	cout << "General Public License v3 \n";
	cout << "Programmer: Romulo Sorato\n" << endl;
	if (op == 1)
	{
		cout << "Legend: \nPlayer 1: X \nPlayer 2: O\n" << endl << endl;
	}
	else
		cout << "Legend: \nPlayer 1: X \nCPU: O\n" << endl << endl;

	int count = 1;
	for (int i = 0; i < l; i++)
	{
		cout << "                    ";
		for (int j = 0; j < c; j++)
		{
			if (mt[i][j] == '?')
			{
				cout << "[" << count << "]| ";
			}
			else if (mt[i][j] == 'X')
			{
				cout << "[X]| ";
			}
			else
				cout << "[O]| ";
			count++;
		}
		cout << "\n\t            --------------\n";
	}
	cout << endl;
}
bool gameOver(char mt[l][c], short op, short &cont_p1, short &cont_p2, short &cont_cpu)
{
	// Check if there was a winner or a tie
	int  ct = 0;// total counter
	int d = c - 1;// auxiliary variable for secondary diagonal
	int contd = 0;// counter diagonal
	int contd2 = 0;// counter for diagonal secondary
	int contc;// counter for column
	int contl;// counter for line player 1
	int contdj2 = 0;// counter diagonal for player 2
	int contd2j2 = 0;// counter for diagonal secondary player 2  
	int contcj2;// counter for the column player 2
	int contlj2;// counter for line player 2

	for (int i = 0; i < l; i++)
	{
		contc = 0;
		contcj2 = 0;
		contl = 0;
		contlj2 = 0;
		if (mt[i][i] == 'O')
			contdj2++;
		if (mt[i][d] == 'O')
			contd2j2++;
		if (mt[i][i] == 'X')
			contd++;
		if (mt[i][d] == 'X')
			contd2++;
		d--;
		for (int j = 0; j < c; j++)
		{
			if (mt[i][j] != '?')
				ct++;
			if (mt[i][j] == 'O')
				contlj2++;
			if (mt[j][i] == 'O')
				contcj2++;
			if (mt[i][j] == 'X')
				contl++;
			if (mt[j][i] == 'X')
				contc++;
		}
		if (contl == 3 || contd == 3 || contc == 3 || contd2 == 3)
		{
			cont_p1++;
			cout << "Player 1 wins!" << endl;
			if (op == 1)
			{
				cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nPlayer 2:" << cont_p2 << "\n";
			}
			else
			{
				cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nCPU:" << cont_cpu << "\n";
			}

			return true;
		}
		if (contlj2 == 3 || contdj2 == 3 || contcj2 == 3 || contd2j2 == 3)
		{
			if (op == 1)
			{
				cout << "Player 2 wins!" << endl;
				cont_p2++;
				cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nPlayer 2:" << cont_p2 << "\n";
			}
			else
			{
				cout << "CPU wins!" << endl;
				cont_cpu++;
				cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nCPU:" << cont_cpu << "\n";
			}
			return true;
		}
	}
	if (ct == l*c)
	{
		cout << "We tied!\n" << endl;
		if (op == 1)
		{
			cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nPlayer 2:" << cont_p2 << "\n";
		}
		else
			cout << " Ranking:\nPlayer 1:" << cont_p1 << "\nCPU:" << cont_cpu << "\n";
		return true;
	}
	return false;
}
void cpu(char mt[l][c])
{
	// initialize random seed: 
	srand(time(NULL));

	int x, cont;
	bool found = false;
	while (found == false)
	{
		x = rand() % 9 + 1;
		cont = 1;
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (cont == x)
				{
					if (mt[i][j] != 'X' && mt[i][j] != 'O')
					{
						mt[i][j] = 'O';
						found = true;
					}
				}
				cont++;
			}
		}
	}
}
void cpu_hard(char mt[l][c])
{

	int d = c - 1;// auxiliary variable for secondary diagonal
	int contd = 0;// counter diagonal
	int contd2 = 0;// counter for secondary diagonal
	int contc;// counter for column
	int contl;// counter for line player 1

	int contd_Cpu = 0;// counter diagonal for cpu
	int contd2_Cpu = 0;// counter for secondary diagonal of cpu  
	int contc2;// counter for the column cpu
	int contl2;// counter for line cpu
	bool found = false;

	for (int i = 0; i < l; i++)
	{
		contc = 0;
		contl = 0;
		contc2 = 0;
		contl2 = 0;

		if (mt[i][i] == 'X')
			contd++;
		if (mt[i][d] == 'X')
			contd2++;
		if (mt[i][i] == 'O')
			contd_Cpu++;
		if (mt[i][d] == 'O')
			contd2_Cpu++;
		d--;
		for (int j = 0; j < c; j++)
		{
			if (mt[i][j] == 'X')
				contl++;
			if (mt[j][i] == 'X')
				contc++;
			if (mt[i][j] == 'O')
				contl2++;
			if (mt[j][i] == 'O')
				contc2++;
		}
		if (contd2_Cpu == 2 || contc2 == 2 || contd_Cpu == 2 || contl2 == 2)
		{
			if (contl2 == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[i][z] == '?')
					{
						mt[i][z] = 'O';
						found = true;
					}
				}
			}
			else if (contd_Cpu == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[z][z] == '?')
					{
						mt[z][z] = 'O';
						found = true;
					}
				}
			}
			else if (contc2 == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[z][i] == '?')
					{
						mt[z][i] = 'O';
						found = true;
					}
				}
			}
			else if (contd2_Cpu == 2)
			{
				int x = 0;
				for (int z = c - 1; z >= 0; z--)
				{
					if (mt[x][z] == '?')
					{
						mt[x][z] = 'O';
						found = true;
					}
					x++;
				}
			}
		}
		else
		{
			if (contl == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[i][z] == '?')
					{
						mt[i][z] = 'O';
						found = true;
					}
				}
			}
			else if (contd == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[z][z] == '?')
					{
						mt[z][z] = 'O';
						found = true;
					}
				}
			}
			else if (contc == 2)
			{
				for (int z = 0; z < c; z++)
				{
					if (mt[z][i] == '?')
					{
						mt[z][i] = 'O';
						found = true;
					}
				}
			}
			else if (contd2 == 2)
			{
				int x = 0;
				for (int z = c - 1; z >= 0; z--)
				{
					if (mt[x][z] == '?')
					{
						mt[x][z] = 'O';
						found = true;
					}
					x++;
				}
			}
		}
		if (found)
			break;
	}
	if (!found)
		cpu(mt);
}
string changeName1()
{
	string name1;
	cout << "Enter name of player 1" << endl;
	getline(cin, name1);
	return name1;

}
string changeName2()
{
	string name2;
	cout << "Enter name of player 2" << endl;
	getline(cin, name2);
	return name2;
}*/

//khac005 tong tu 1 den n :v
/*#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int n, tong = 0.0;
	printf("nhap n: ");
	scanf("%d", &n);

	while (n >= 1)
	{
		tong += n;
		n--;
	}
	printf("tong cac so tu 1 den n : %d \n", tong);
	system("PAUSE");
	return 0;
}*/

//khac006 chuyen doi thoi gian :v lam kho minh mot ty :v
/*#include <iostream>
using namespace std;

void main()
{
	double hour = 0.0, minute = 0.0, second = 0.0, day = 0.0 ;

	//chuyen tu ngay sang gio -- phut -- giay 
	cout << "nhap so ngay: ";
	cin  >> day;
	cout << "so gio can tim la: "  << day * 24 << endl;
	cout << "so phut can tim la: " << day * 24 * 60 << endl;
	cout << "so giay can tim la: " << day * 24 * 3600 << "\n " << endl;

	//chuyen tu gio sang  ngay -- phut -- giay
	cout << "nhap so gio: ";
	cin  >> hour;
	cout << "so ngay can tim la: " << hour / 24 << endl;
	cout << "so phut can tim la: " << hour * 60 << endl;
	cout << "so giay can tim la: " << hour * 3600 << "\n " << endl;

	//chuyen tu phut sang giay -- gio -- ngay
	cout << "nhap so phut: ";
	cin  >> minute;
	cout << "so ngay can tim la: " << minute / 60 / 24 << endl;
	cout << "so gio can tim la: "  << minute / 60 << endl;
	cout << "so giay can tim la: " << minute * 60 << "\n " << endl;

	//chuyen tu giay sang phut -- gio -- ngay
	cout << "nhap so giay: ";
	cin  >> second;
	cout << "so ngay can tim la: " << second / 3600/ 24 << endl;
	cout << "so gio can tim la : " << second / 3600  << endl;
	cout << "so phut can tim la: " << second / 60 << "\n " << endl;
		 
	cin.get();
	system("PAUSE");

}*/
//khac 006_1
/*#include <iostream>
#include <string.h>

using namespace std;

void main()
{
	int n;
	double hour = 0.0, minute = 0.0, second = 0.0, day = 0.0;

	//chon ngay -- gio -- phut -- giay
	cout << "chon gia tri thoi gian can chuyen: ";
	cout << "\n1.ngay";
	cout << "\n2.gio";
	cout << "\n3.phut";
	cout << "\n4.giay";
	//nguoi dung chon
time:;
	cout << "\n Ban chon: ";
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
		cin >> day;
		cout << "so gio can tim la: " << day * 24 << "\n"
			<< "so phut can tim la: " << day * 24 * 60 << "\n"
			<< "so giay can tim la: " << day * 24 * 3600 << "\n " << endl;
	}

	//chuyen tu gio sang  ngay -- phut -- giay
	else if (n == 2)
	{
		cout << "nhap so gio: ";
		cin >> hour;
		cout << "so ngay can tim la: " << hour / 24 << "\n"
			<< "so phut can tim la: " << hour * 60 << "\n"
			<< "so giay can tim la: " << hour * 3600 << "\n " << endl;
	}

	//chuyen tu phut sang giay -- gio -- ngay
	else if (n == 3)
	{
		cout << "nhap so phut: ";
		cin >> minute;
		cout << "so ngay can tim la: " << minute / 60 / 24 << "\n"
			<< "so gio can tim la: " << minute / 60 << "\n"
			<< "so giay can tim la: " << minute * 60 << "\n " << endl;
	}

	//chuyen tu giay sang phut -- gio -- ngay
	else if (n == 4)
	{
		cout << "nhap so giay: ";
		cin >> second;
		cout << "so ngay can tim la: " << second / 3600 / 24 << "\n"
			<< "so gio can tim la : " << second / 3600 << "\n"
			<< "so phut can tim la: " << second / 60 << "\n " << endl;
	}

	else
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto time;
	}
	cin.get();
	system("PAUSE");

}*/

//khac007 chuyen doi khoi luong :v 
/*#include <iostream>
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
	//chon don vi do dai can chuyen
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
		cin >> tan;
		cout << "gia tri ta  can tim la: " << tan / 10 <<
			"\n" << "gia tri yen can tim la: " << tan / 100 <<
			"\n" << "gia tri kg  can tim la: " << tan / 1000 <<
			"\n" << "gia tri hg  can tim la: " << tan / 10000 <<
			"\n" << "gia tri dag can tim la: " << tan / 100000 <<
			"\n" << "gia tri g   can tim la: " << tan / 1000000 << "\n" << endl;
	}
	//chuyen tu ta sang tan -- yen -- kg -- hg -- dag -- g
	else if (n == 2)
	{
		cout << "nhap gia tri ta can tinh: ";
		cin >> ta;
		cout << "gia tri tan can tim la: " << ta * 10 <<
			"\n" << "gia tri yen can tim la: " << ta / 10 <<
			"\n" << "gia tri kg  can tim la: " << ta / 100 <<
			"\n" << "gia tri hg  can tim la: " << ta / 1000 <<
			"\n" << "gia tri dag can tim la: " << ta / 10000 <<
			"\n" << "gia tri g   can tim la: " << ta / 100000 << "\n" << endl;
	}
	//chuyen tu yen sang tan -- ta -- kg -- hg -- dag -- g
	else if (n == 3)
	{
		cout << "nhap gia tri yen can tinh: ";
		cin >> yen;
		cout << "gia tri tan can tim la: " << yen * 100 <<
			"\n" << "gia tri ta  can tim la: " << yen * 10 <<
			"\n" << "gia tri kg  can tim la: " << yen / 10 <<
			"\n" << "gia tri hg  can tim la: " << yen / 100 <<
			"\n" << "gia tri dag can tim la: " << yen / 1000 <<
			"\n" << "gia tri g   can tim la: " << yen / 10000 << "\n" << endl;
	}
	//chuyen tu kg sang tan -- ta -- yen -- hg -- dag -- g
	else if (n == 4)
	{
		cout << "nhap gia tri kg can tinh: ";
		cin >> kg;
		cout << "gia tri tan can tim la: " << kg * 1000 <<
			"\n" << "gia tri ta  can tim la: " << kg * 100 <<
			"\n" << "gia tri yen can tim la: " << kg * 10 <<
			"\n" << "gia tri hg  can tim la: " << kg / 10 <<
			"\n" << "gia tri dag can tim la: " << kg / 100 <<
			"\n" << "gia tri g   can tim la: " << kg / 1000 << "\n" << endl;
	}
	//chuyen tu hg sang tan -- ta -- yen -- kg -- dag -- g
	else if (n == 5)
	{
		cout << "nhap gia tri hg can tinh: ";
		cin >> hg;
		cout << "gia tri tan can tim la: " << hg * 10000 <<
			"\n" << "gia tri ta  can tim la: " << hg * 1000 <<
			"\n" << "gia tri yen can tim la: " << hg * 100 <<
			"\n" << "gia tri kg  can tim la: " << hg * 10 <<
			"\n" << "gia tri dag can tim la: " << hg / 10 <<
			"\n" << "gia tri g   can tim la: " << hg / 100 << "\n" << endl;
	}
	//chuyen tu dag sang tan -- ta -- yen -- kg -- hg -- g 
	else if (n == 6)
	{
		cout << "nhap gia tri dag can tinh: ";
		cin >> dag;
		cout << "gia tri tan can tim la: " << dag * 100000 <<
			"\n" << "gia tri ta  can tim la: " << dag * 10000 <<
			"\n" << "gia tri yen can tim la: " << dag * 1000 <<
			"\n" << "gia tri kg  can tim la: " << dag * 100 <<
			"\n" << "gia tri hg  can tim la: " << dag * 10 <<
			"\n" << "gia tri g   can tim la: " << dag / 10 << "\n" << endl;
	}
	//chuyen tu g sang tan -- ta -- yen -- kg -- hg -- dag
	else if (n == 7)
	{
		cout << "nhap gia tri g can tinh: ";
		cin >> g;
		cout << "gia tri tan can tim la: " << g * 1000000 <<
			"\n" << "gia tri ta  can tim la: " << g * 100000 <<
			"\n" << "gia tri yen can tim la: " << g * 10000 <<
			"\n" << "gia tri kg  can tim la: " << g * 1000 <<
			"\n" << "gia tri h g can tim la: " << g * 100 <<
			"\n" << "gia tri dag can tim la: " << g * 10 << "\n" << endl;
	}
	else
	{
		cout << "\nban nhap sai moi ban kiem tra lai";
		goto khoiluong;
	}
	cin.get();
	system("PAUSE");
}*/

//khac008 chuyen doi do dai :v
/*#include <iostream>
using namespace std;

void main()
{
	double km = 0.0, hm = 0.0, dam = 0.0, m = 0.0, dm = 0.0, cm = 0.0, mm = 0.0;

	//chuyen tu km sang hm -- dam -- m -- dm -- cm -- mm
	cout << "nhap vao so km: ";
	cin  >> km;
	cout << "gia tri hm  can tinh la: "     << km / 10 << 
		"\n" << "gia tri dam can tinh la: " << km / 100 << 
		"\n" << "gia tri m   can tinh la: " << km / 1000 << 
		"\n" << "gia tri dm  can tinh la: " << km / 10000 << 
		"\n" << "gia tri cm  can tinh la: " << km / 100000 << 
		"\n" << "gia tri mm  can tinh la: " << km / 1000000 << "\n " << endl;

	//chuyen tu hm sang km -- dam -- m -- dm -- cm -- mm
	cout << "nhap vao so hm: ";
	cin  >> hm;
	cout << "gia tri km  can tinh la: "     << hm * 10 << 
		"\n" << "gia tri dam can tinh la: " << hm / 10 << 
		"\n" << "gia tri m   can tinh la: " << hm / 100 << 
		"\n" << "gia tri dm  can tinh la: " << hm / 1000 << 
		"\n" << "gia tri cm  can tinh la: " << hm / 10000 << 
		"\n" << "gia tri mm  can tinh la: " << hm / 100000 << "\n " << endl;

	//chuyen tu dam sang km -- hm -- m -- dm -- cm -- mm
	cout << "nhap vao so dam: ";
	cin  >> dam;
	cout << "gia tri km  can tinh la: "     << dam * 100 << 
		"\n" << "gia tri hm  can tinh la: " << dam * 10 << 
		"\n" << "gia tri m   can tinh la: " << dam / 10 << 
		"\n" << "gia tri dm  can tinh la: " << dam / 100 << 
		"\n" << "gia tri cm  can tinh la: " << dam / 1000 << 
		"\n" << "gia tri mm  can tinh la: " << dam / 10000 << "\n " << endl;

	//chuyen tu m sang km -- hm -- dam -- dm -- cm -- mm
	cout << "nhap vao so m: ";
	cin  >> m;
	cout << "gia tri km  can tinh la: "     << m * 1000 << 
		"\n" << "gia tri hm  can tinh la: " << m * 100 << 
		"\n" << "gia tri dam can tinh la: " << m * 10 << 
		"\n" << "gia tri dm  can tinh la: " << m / 10 << 
		"\n" << "gia tri cm  can tinh la: " << m / 100 << 
		"\n" << "gia tri mm  can tinh la: " << m / 1000 << "\n " << endl;

	//chuyen tu dm sang km -- hm -- dam -- m -- cm -- mm
	cout << "nhap vao so dm: ";
	cin  >> dm;
	cout << "gia tri km  can tinh la: "     << dm * 10000 << 
		"\n" << "gia tri hm  can tinh la: " << dm * 1000 << 
		"\n" << "gia tri dam can tinh la: " << dm * 100 << 
		"\n" << "gia tri m   can tinh la: " << dm * 10 << 
		"\n" << "gia tri cm  can tinh la: " << dm / 10 << 
		"\n" << "gia tri mm  can tinh la: " << dm / 100 << "\n " << endl;

	//chuyen tu cm sang km -- hm -- dam -- m -- dm -- mm
	cout << "nhap vao so cm: ";
	cin  >> cm;
	cout << "gia tri km  can tinh la: "     << cm * 100000 << 
		"\n" << "gia tri hm  can tinh la: " << cm * 10000 << 
		"\n" << "gia tri dam can tinh la: " << cm * 1000 << 
		"\n" << "gia tri m   can tinh la: " << cm * 100 << 
		"\n" << "gia tri dm  can tinh la: " << cm * 10 << 
		"\n" << "gia tri mm  can tinh la: " << cm / 10 << "\n " << endl;

	//chuyen tu mm sang km -- hm -- dam -- m -- dm -- cm
	cout << "nhap vao so mm: ";
	cin  >> mm;
	cout << "gia tri km  can tinh la: "     << mm * 1000000 << 
		"\n" << "gia tri hm  can tinh la: " << mm * 100000 << 
		"\n" << "gia tri dam can tinh la: " << mm * 10000 << 
		"\n" << "gia tri m   can tinh la: " << mm * 1000 << 
		"\n" << "gia tri dm  can tinh la: " << mm * 100 << 
		"\n" << "gia tri cm  can tinh la: " << mm * 10 << "\n " << endl;

	cin.get();
	system("PAUSE");

}*/

//khac009 voc
/*#include <iostream>

using namespace std;

void main()
{
	double text;
	cout << "nhap vao tu bat ky: " ;
	cin >> text;

	system("PAUSE");

}*/

//khac010 dien tich va chu vi cac hinh tron -- chu nhat -- vuong -- tam giac -- tu giac :v hack nao :v dung cout va cin

/*#include <iostream>
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
	if (R == 0.0)
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
	if (chieu_Dai == 0.0 && chieu_Rong != 0.0)
	{
		cout << "day khong phai hinh chu nhat" << "\n"
			<< " day la duong thang co do dai la: " << chieu_Rong << "\n";
		goto chunhat;
	}
	else if (chieu_Rong == 0.0 && chieu_Dai != 0.0)
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
	else if (chieu_Dai == chieu_Rong && chieu_Dai != 0.0 && chieu_Rong != 0.0)
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
	if (canh_Hinh_Vuong_A == 0)
	{
		cout << "day khong phai la hinh vuong" << "\n";
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
	cin >> canh_A;

	cout << "nhap vao canh b: ";
	cin >> canh_B;

	cout << "nhap vao canh c: ";
	cin >> canh_C;

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
			else if (Ax1 == Ax2 && Ax3 == Ax1 + Ax2)
			{//tam giac vuong can 
				cout << "day la tam giac vuong can " << "\n"
					<< "co canh huyen: " << canh_C << "\n"
					<< "canh goc vuong bang nhau: " << canh_A << " va " << canh_B << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_A * canh_B);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if (Ax2 == Ax3 && Ax1 == Ax3 + Ax2)
			{
				cout << "day la tam giac vuong can " << "\n"
					<< "co canh huyen: " << canh_A << "\n"
					<< "canh goc vuong: " << canh_B << " va " << canh_C << "\n";
				printf("\ndien tich tam giac vuong la: S = %f\n", 0.5 * canh_B * canh_C);
				printf("\nchu vi tam giac vuong la: C = %f\n", P);
			}
			else if (Ax1 == Ax3 && Ax2 == Ax1 + Ax3)
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
}*/

//khac011 voc01 mang !!
/*#include <iostream>

using namespace std;

int main()
{
	       int numberArray[16] = { 5, 3, 8, 1, 12, 6, 7, 15, 2, 4, 9, 11, 14, 10, 0, 13};
	
		   int number;
	       cout << "Enter a number: ";
	       cin  >> number;
	
		   for (int i = 0;; i++)
		      {
		             //Stop condition
			              if (i == 16)
		                  {
			                  cout << "Number not found" << endl;
			                  break;
			              }
			             if (number != numberArray[i])
			                  continue;
		
	              //Print the position and break when found number in array
		             cout << "Found at position " << i << endl;
		             break;
		      }
	
		   fflush(stdin);
	       cin.get();
		   system("PAUSE");
	       return 0;
}*/

//khac012 voc02 :v
/*#include <stdio.h>
#include <conio.h>

int main()
{
	int n, len, t;
	printf("Nhap n: ");
	scanf("%d", &n);
	len = n * 2 + 1;
	//in hàng ??u
	for (int i = 1; i <= len; i++)
	{
		if (i != n) 
			printf(" ");
		else 
			printf("O");
	}
	printf("\n");
	//hàng gi?a
	for (int i = 1; i<n - 1; i++)
	{
		for (int j = 1; j <= len; j++)
		{
			if (j == n - i || j == n + i) 
				printf("O");
			else 
				printf(" ");
		}
		printf("\n");
	}
	// hàng cu?i
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		printf("O");
	}
	_getch();
	return 0;
}*/

//khac013 bang 12 chuong, co thay doi mot ti so voi ban goc :v
/*#include <iostream>
#include <iomanip>

using namespace std;
int a;

int main()
{
	cout << "nhap vao mot so cho so chuong: " << endl;
	cin >> a;

	const int size{a};
	int i{}, j{};
	cout << endl
		 << " bang " << a << " chuong la: " << endl << endl;
	cout << endl << "     |";
	for (i = 1; i <= size; i++)
		cout << setw(4) << i << " ";
		cout << endl;
	for (i = 0; i <= size; i++)
		cout << "______";
	for (i = 1; i <= size; i++)
	{
		cout << endl
			<< setw(4) << i << " |";
		for (j = 1; j <= size; j++)
			cout << setw(4) << i*j << " ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
	
}*/

//khac014 

// setw example
/*#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

using namespace std;
int a, b;

int main() 
{
	cout << "nhap vao so a: " << endl;
	cin >> a;

	cout << "nhap vao so b: " << endl;
	cin >> b;

	cout << setw(a);
	cout << b << endl;

	system("PAUSE");
	return 0;

}*/



// ======= 77 bai tap C ======= 
//khac015 :v voc 003
//nhap hinh vuong co canh bat ky tu ban phim :v 77 bai tap C :v :v 
//hinh vuong dac :v 
/*#include <iostream>

using namespace std;

int main()
{
	int a, i, j;
	cout << "hay nhap do dai canh hinh vuong: ";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
			cout << "a "; 
		//them dau cach de hinh nay tro thanh hinh vuong -- khong co dau cach thi do la hinh chu nhat :3 va ko dep :v
		cout << "\n";

	}
	system("PAUSE");
	return 0;
}*/

// voc 004 :v hinh khac -- hinh chu nhat :v 
/*#include <iostream>
using namespace std;

int main()
{
	int a, b, i, j;
	cout << "nhap do dai canh dai hinh chu nhat: ";
	cin >> a;

	cout << "nhap do dai canh rong hinh chu nhat: ";
	cin >> b;

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
			cout << "A ";
		cout << "\n";

	}
	system("PAUSE");
	return 0;
}*/

//khac016 :v voc 005 Ch??ng trình tính giá tr? bi?u th?c 
/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double t;
	cout << "nhap so thuc t: ";
	cin >> t;

	cout << "gia tri cua bieu thuc can tim la y = " << 3 * exp(cos(t + 1)) << endl;

	system("PAUSE");
	return 0;
}*/

//khac017 :v voc 006 
//M?t ?o?n th?ng ???c bi?u di?n b?i hai ?i?m trong m?t ph?ng. 
//Vi?t ch??ng trình nh?p vào hai ?i?m c?a m?t ?o?n th?ng và xu?t ra trung ?i?m c?a ?o?n th?ng ?ó
/*#include <iostream>

using namespace std;

int main()
{
	double xA, yA, xB, yB;
	//diem A
	cout << "nhap toa do x cua diem A: ";
	cin >> xA;

	cout << "nhap toa do y cua diem A: ";
	cin >> yA;
	//diem B
	cout << "nhap toa do x cua diem B: ";
	cin >> xB;

	cout << "nhap toa do y cua diem B: ";
	cin >> yB;
	//tinh trung dien :v 
	cout << "\n"
		<< "toa do trung diem M la: " << "\n"
		<< "toa do x cua diem M : " << "x = " << (xA + xB) / 2 << "\n"
		<< "toa do y cua diem M : " << "y = " << (yA + yB) / 2 << endl;

	system("PAUSE");
	return 0;
}*/

//khac018 :v voc 007 
//nhap ba dinh tam giac tim trong tam tam giac :v 
/*#include <iostream>

using namespace std;

int main()
{
	double xA, xB, xC, yA, yB, yC;
	//diem A
	cout << "nhap vao toa do x cua diem A: ";
	cin >> xA;

	cout << "nhap vao toa do y cua diem A: ";
	cin >> yA;
	//diem B 
	cout << "nhap vao toa do x cua diem B: ";
	cin >> xB;

	cout << "nhap vao toa do y cua diem B: ";
	cin >> yB;
	//diem C
	cout << "nhap vao toa do x cua diem C: ";
	cin >> xC;

	cout << "nhap vao toa do y cua diem C: ";
	cin >> yC;

	//tinh trong tam :v 
	cout << "\n"
		<< "trong tam G tam giac can tim la: " << "\n"
		<< "toa do x la: " << "x = " << (xA + xB + xC) / 3 << "\n"
		<< "toa do y la: " << "y = " << (yA + yB + yC) / 3 << "\n" << endl;

	system("PAUSE");
	return 0;
}*/

//khac019 :v voc 008
//phuong trinh bac 2 :v
/*#include <iostream> 
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double denta, soA, soB, soC,
		x1, x2;
	//nhap vao
	cout << "nhap vao he so a: ";
	cin >> soA;

	cout << "nhap vao he so b: ";
	cin >> soB;

	cout << "nhap vao he so c: ";
	cin >> soC;
	//tinh
	if (soA == 0)
	{
		cout << "phuong trinh vua nhap khong phai phuong trinh bac 2: " << "\n"
			 << "phuong trinh co dang: " << soB << " * x + " << soC << " = 0 " << "\n"
			 << "co nghiem la: " << "x = " << -soC / soB << endl;
	}
	else if (soA != 0)
	{
		cout << "phuong trinh vua nhap la phuong trinh bac 2: " << "\n"
			 << "phuong trinh co dang: " << soA << " * x ^ 2 + " << soB << " * x + " << (soC) << " = 0 " << "\n"
			 <<endl;		
		denta = soB * soB - 4 * soA * soC;
		cout << "gia tri denta la: " << denta << "\n" << endl;
		if (denta < 0)
		{
			cout << "phuong trinh vo nghiem" << "\n" << endl;
		}
		else if (denta == 0)
		{
			cout << "phuong trinh co nghiem kep la: " << "\n " << "x1 = x2 = " << -soB / (2 * soA) << endl;
		}
		else if (denta > 0)
		{
			x1 = (-soB + sqrt(denta)) / (2 * soA);
			x2 = (-soB - sqrt(denta)) / (2 * soA);
			cout << "phuong trinh co hai nghiem phan biet la: " << "\n" << x1 << " va " << x2 << endl;
		}
	}
	system("PAUSE");
	return 0;
}*/

//khac 020 :v voc 009 
//C?u trúc ?i?u khi?n – C?u trúc l?p 
/*#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int nhapSo;
	cout << "nhap mot so: ";
	cin >> nhapSo;

	if (nhapSo % 2 == 0)
	{
		cout << "So chan" << endl;
	}
	else
		cout << "So le" << endl;
	system("PAUSE");
	return 0;
}*/
//khac 021 :v voc 010 
//Vi?t ch??ng trình nh?p vào 2 s? nguyên, tìm s? l?n nh?t c?a 2 s?. 
/*#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	int soTuNhienA, soTuNhienB;
	//nhap vao 2 so tu nhien:
	cout << "nhap vao so tu nhien a: ";
	cin >> soTuNhienA;

	cout << "nhap vao so tu nhien b: ";
	cin >> soTuNhienB;

	//so sanh :v

	if (soTuNhienA > soTuNhienB)
	{
		cout << soTuNhienA << " lon hon " << soTuNhienB << endl;
	}
	else
	{
		cout << soTuNhienA << " nho hon " << soTuNhienB << endl;
	}
	system("PAUSE");
	return 0;
}*/

//khac 022 :v voc 011
/*#include <iostream>
#include <string.h>
#include <time.h>
using namespace std;

int main()
{
	int n, a = 1, b = 3;

	cout << "moi ban chon: ";
	cout << "\n1.keo";
	cout << "\n2.bua";
	cout << "\n3.bao";

	nhap: do
	{
		cout << "\n Nguoi choi chon: ";
		cin >> n;
		if (n < 0 || n > 3)
			cout << "\n ban nhap sai moi ban kiem tra lai!!";
	} 
	while (n < 0 || n > 3);
	srand(time(0));
	int x = a + rand() % (b - a + 1);
	if (x == n)
	{
		cout << "\n ban da hoa voi may";
		goto nhap;
	}
	if (x == 1 && n == 3 || (x == 2 && n == 1) || (x == 3 && n == 2))
	{
		cout << x;
		cout << "\n ban da thua";
		goto nhap;
	}
	else
	{
		cout << x;
		cout << "\n may da thang";

	}
	system("PAUSE");
	return 0;

}*/

//khac 023 voc 012
/*#include <iostream>
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
	cout << "\n2.khong";

	cout << "ban chon: ";
	cin >> n;


	if (n != 1 && n != 2)
	{
		cout << "nhap sai xin ban hay nhap lai!!";
		goto tienluong;

	}
	else if (n == 2)
	{
		//nhap vao so thang
		cout << "nhap vao so thang can tinh: " << "\n";
		cin >> thang;

		//tinh 
		if (thang < 12)
		{
			cout << "tien luong la: " << 1.92 * luongCB << endl;
		}
		else if (12 <= thang && thang < 36)
		{
			cout << "tien luong la: " << 2.34 * luongCB << endl;
		}
		else if (36 <= thang && thang < 60)
		{
			cout << "tien luong la: " << 3 * luongCB << endl;
		}
		else
		{
			cout << "tien luong la: " << 4.5 * luongCB << endl;
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
			cout << "tien luong la: " << 1.92 * luongCanBan << endl;
		}
		else if (12 <= thang && thang < 36)
		{
			cout << "tien luong la: " << 2.34 * luongCanBan << endl;
		}
		else if (36 <= thang && thang < 60)
		{
			cout << "tien luong la: " << 3 * luongCanBan << endl;
		}
		else
		{
			cout << "tien luong la: " << 4.5 * luongCanBan << endl;
		}
	}
	cin.get();
	system("PAUSE");
}*/

//khac 024 ngoai :v 
/*#include <iostream>
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
}*/

/*https://www.facebook.com
http://www.stdio.vn/programs/content/1/lap-trinh-c
http://www.stdio.vn/articles/read/137/pham-vi-cua-bien
demo1*/
/*int number1, number2;
char letter;

number1 = 5;
number2 = 8;
letter = 'b';

//tinh bien !

int sum1 = number1 + 6;
int sum2 = number2 - number1;*/

// demo2
/*#include <iostream>
using namespace std;

// khai bao bien toan cuc x
int x;

int main()
{
	// gan gia tri
	x = 10;
	cout << x;

	// gan gia tri
	x = 20;
	cout << x;

}*/

// demo 3
/*#include <iostream>
using namespace std;

int main()
{
	int i = 5;
	if (i < 10)
	{		//bat dau pham vi if

			//khai bao va khoi tao bien cuc bo n
		int m = 1;
			// ket thuc pham vi if

	}

	//bien dich loi - Compile error do bien n khong ton tai
	cout << n;
}*/

// demo 4
/*#include <iostream>
using namespace std;

// khai bao bien static toan cuc x
static int x;

void foo()
{
		//khai bao bien static cuc bo y
		static int y;

		cout << x; // co the truy xuat
		cout << y; // co the truy xuat
}

int main()
{
	cout << x; // co the truy xuat
	//cout << y; // khong the truy xuat vi ngoai pham vi y
}*/

/*http://www.stdio.vn/articles/read/138/toan-tu-do-uu-tien-ve-trat-tu-ket-hop
demo1*/

/*#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 10;

	int a, b;
	a = ++x; // tien to
	b = y++; // hau to

	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	cout << "b = " << b << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}*/

/*http://www.stdio.vn/articles/read/170/nhap-xuat-co-ban-trong-cpp
demo1*/

/*#include <iostream>
#include <string>
using namespace std; 

int main()
{
	string studenName;
	float midtermScore, practiceScore, finalScore;

	cout << "Enter student name: ";
	cin >> midtermScore >> practiceScore >> finalScore;

	cout << "Average score: "
		<< midtermScore * 0.2 + practiceScore * 0.3 + finalScore * 0.5
		<< endl;

	fflush(stdin);
	cin.get();
	return 0;

}*/

/*http://www.stdio.vn/articles/read/172/hang-trong-c
demo1*/
/*#include <iostream>
using namespace std;

const double PI = 3.14159;

int main()
{
	double R = 10;		//ban kinh
	double Circumference; //chu vi hinh tron

	Circumference = 2 * PI * R;
	cout << Circumference;

	cin.get();
	return 0;
}*/

//demo2
/*#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
	double R = 10;		//ban kinh
	double Circumference; //chu vi hinh tron

	Circumference = 2 * PI * R;
	cout << Circumference;

	cin.get();
	return 0;
}*/

//http://www.stdio.vn/articles/read/139/mot-vai-chuong-trinh-co-ban
//bai1_0
//Hãy vi?t ch??ng trình tính t?ng – hi?u – tích – th??ng c?a 2 s? nguyên x và y ???c nh?p t? bàn phím.

/*#include <iostream>
using namespace std;

void main()
{
	int x = 0;
	int y = 0;

	//doc gia tri tu ban phim
	cout << "please input x (nhap gia tri x): ";
	cin >> x;

	cout << "please input y (nhap gia tri y): ";
	cin >> y;

	//xuat ra ket qua tinh toan
	cout << "\tx + y = " << x + y << endl;
	cout << "\tx - y = " << x - y << endl;
	cout << "\tx * y = " << x * y << endl;
	cout << "\tx / y = " << x / y << endl;

	cin.get();
}*/

//bai1_1
/*#include <iostream>
using namespace std;

void main()
{
	int x, y;

	//doc gia tri tu ban phim
	cout << "please input x and y (nhap gia tri x va y): ";
	cin >> x >> y;

	//xuat ra man hinh
	cout << "\tx + y = " << x + y << endl;
	cout << "\tx - y = " << x - y << endl;
	cout << "\tx * y = " << x * y << endl;
	cout << "\tx / y = " << x / y << endl;

	cin.get();
}*/

//bai2_0
/*Vi?t ch??ng trình tính chu vi và di?n tích c?a hình tròn v?i bán kính ???c nh?p t? bàn phím.
•C = 2 * r * ?
•S = r2 * ?
V?i ? ? 3.14159265359*/

/*#include <iostream>
using namespace std;
#define PI 3.14159265359 

void main()
{
	double r = 0.0;
	// doc gia tri tu ban phim 
	cout << "nhap gia tri cua ban kinh r: ";
	cin >> r;

	//tinh 
	cout << "\t=> chuVi: " << PI * 2 * r << endl;
	cout << "\t=> dienTich: " << r * r * PI << endl;

	cin.get();
}*/

//bai3_0
/*Vi?t ch??ng trình chuy?n nhi?t ?? t? Fahrenheit sang Celsius và ng??c l?i.Nhi?t ?? Fahrenheit và Celsius ???c nh?p t? bàn phím
Ta c?ng áp d?ng t??ng t? các k? thu?t ? bài toán 1 và bài toán 2. Và ta c?ng bi?t ???c r?ng :
•ºF = ºC * 1.8 + 32.0
•ºC = (ºF – 32.0) / 1.8*/

/*#include <iostream>
using namespace std;

void main()
{
	double Fa = 0.0, Ce = 0.0;

	// chuyen tu do C sang do F
	cout << "nhap gia tri nhiet do C: ";
	cin >> Ce;
	cout << "nhiet do do F can tim la: " << Ce * 1.8 + 32 << endl;

	//chuyen tu do F sang do C
	cout << "nhap gia tri nhiet do F: ";
	cin >> Fa;
	cout << "nhiet do do C can tim la: " << (Fa - 32) / 1.8 << endl;

	cin.get();
	system("PAUSE");

}*/

//http://www.stdio.vn/articles/read/52/cau-truc-if-else-trong-ngon-ngu-c
//http://www.stdio.vn/articles/read/46/cau-truc-switch-case-trong-ngon-ngu-c
//demo 1 bi loi :v

/*#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Month: " << endl;
	cin >> month;

	switch (month)
	{
	case 1:
	{
		cout << "January" << endl;
		break;
	}
	case 2:
	{
		cout << "February" << endl;
		break;
	}
	case 3:
	{
		cout << "March" << endl;
	}
	case 4:
	{
		cout << "April" << endl;
	}
	case 5:
	{
		cout << "May" << endl;
	}
	case 6:
	{
		cout << "June" << endl;
	}
	case 7:
	{
		cout << "July" << endl;
	}
	case 8:
	{
		cout << "August" << endl;
	}
	case 9:
	{
		cout << "September" << endl;
	}
	case 10:
	{
		cout << "October" << endl;
	}
	case 11:
	{
		cout << "November" << endl;
	}
	case 12:
	{
		cout << "December" << endl;
	}
	default:
	{
		cout << "Input is false" << endl;
	}
	break;
	}

	cin.get();
	return 0;
}*/

// demo 2
/*#include <iostream>
using namespace std;

int main()
{
	int month, day;
	cout << "Month: " << endl;
	cin >> month;
	

	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			day = 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			day = 30;
			break;
		}
		default:
		{
			day = 28;
		}
		
	}
	
	return 0;
}*/

//http://www.stdio.vn/articles/read/141/tu-khoa-goto
//demo 1

//Neccessary files and function
/*#include <iostream>
using namespace std;

void main()
{
	if (!openDataFile())
		goto quit;
	if (!getDataFromFile())
		goto closeFileAndQuit;
	if (!allocationSomeResources())
		goto releaseResourcesAndQuit;

	//do more work here ....

releaseResourcesAndQuit:
	//Release Resources
closeFileAndQuit:
	//Close File
quit:
	//quit!
}*/

//http://www.stdio.vn/articles/read/272/ham-sscanf-trong-ngon-ngu-c
//demo 1

/*#include <iostream>

int main()
{
	int i, j, y;
	float x;
	char str[] = "AmySS-1 70 21.05";
	char str1[4];
	char str2[4];
	sscanf(str, "%3s%s%d%f", str1, str2, &i, &x);

	std::cout << "i = " << i << "\nx = " << x << '\n'
		<< "str1 = " << str1 << '\n' << "str2 = " << str2;
	return 0;
}*/