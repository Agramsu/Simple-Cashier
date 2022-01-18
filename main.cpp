// Program Perhitungan Kasir

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include "Header.h"

using namespace std;

void daftar_produk();
void menampilkan_daftar_produk();
void harga_barang();
void history_belanja();
void tampilan();

const int x = 100;
int y = 100;
string produk[x];
int counter = 0;
int price = 0;
int addition = 0;
int total = 0;
int value = 0;
int pay;
int harga[x];
int jumlah[x];
int tot_harga[x];



string nama_produk[] = { "Apel", "Mangga", "Stroberi" , "Kain Pel", "Sapu Ijuk", "Teh Botol", "Coca-Cola", "Fanta" };
int harga_produk[] = {20000, 15000, 24000, 10000, 15000, 5000, 7500, 7500};

int main()
{
	int f;
	tampilan();
	system("cls");
	string username, password;
isi:
	set_xy(30, 8);
	cout << "Username : ";
	getline(cin, username);
	set_xy(30, 9);
	cout << "Password : ";
	getline(cin, password);
	if (username == "amikom" && password == "123")
	{
		goto here;
	}
	else {
		goto keluar;
	}
	cout << endl << endl;
	system("cls");

here:
	set_xy(30, 11);
	cout << "Please wait...\n";
	set_xy(30, 13);
	for (int c = 0; c < 15; c++)
	{
		cout << char(219);
		Sleep(500);
	}
	cout << endl;
	set_xy(30, 15);
	cout << "Login Anda Berhasil" << endl;

	cin.get();
	system("cls");
	

	set_xy(30, 2);
	cout << "Selamat Datang Di \n\n";
	set_xy(30, 4);
	cout << "Aduhai Mart\n\n";
	cout << endl << endl;
	cout << "Apa yang akan anda lakukan ? ";
	set_xy(3, 10);
	cout << "1. Menghitung Belanjaan";
	set_xy(3, 12);
	cout << "2. Keluar Program" << endl;
	cin >> f;
	if (f == 1)
	{
		goto mulai;		// Fungsi "goto" digunakan untuk memberi perintah
						// agar langsung lompat atau berpindah ke variabel yang dituju
	}
	else if (f == 2)
	{
		goto keluar;
	} else {}
	

mulai:
	daftar_produk();
	menampilkan_daftar_produk();
	harga_barang();
	
keluar:
	system("pause");
	return 0;
}

void tampilan()
{
	//Menampilkan home page  
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMWWXd:;dKWMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMWX0XWMMMMN0xoc,,,;cd0NWMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMN0xc;cOWWKkl;,,,,,,,,,;lxKWMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMWKkl;,:lxxxo:,,,,,,,,;:lol:,:okXWMMMMMMMMM" << endl;
	cout << "MMMMMWNOo:,;cdxdl;,,,,,,,,,:ldxkkkxoc;;:dOXWMMMMMM" << endl;
	cout << "MMMN0xc;;:oxxo:,',,,,,,;cldOXKOxxdoloooc;;cxNMMMMM" << endl;
	cout << "WKkl;,,:dkkkxc,'',,,;:oOXNNWMMWXkc,',;codlcxNMMMMM" << endl;
	cout << "Xl,,,,,:xOxxkOOl,,;lkKNWMMMMMMW0c,',,,,,:okXMMMMMM" << endl;
	cout << "Nx,,,,,,lkOKNWMXkx0XWWWWWWWMMMW0o:,,,,,,,,;lkXWMMM" << endl;
	cout << "MXl,,,,,;oKWMMMMMWWNXK00000KXNWWNKko:,,,,,,,,:dONW" << endl;
	cout << "MWO:,,,,,:xXMMMMWNKOkkkxxxxkkOKNWWWN0xl;,,,,,,,,cx" << endl;
	cout << "MMNx,,,,,,l0NMMWX0kxxxxxxxxxxxk0XWMMWWXOdc;,,,,,,;" << endl;
	cout << "KO0Oc,,,,,;dKWMWKOkxxxdddddxxxxOKNMMMMMWKkdl:,,,;x" << endl;
	cout << "c;ckd;,,,,,:kNWNKOkxxxdooodxxxxO0NMMMMMNOdkOkc,,lK" << endl;
	cout << "d;;okl,',,',c0WWX0kxxxxxxxxxxxkOXWWKO0KOxdxOxc,:OW" << endl;
	cout << "Kl,:dx:,,;ldOXWMWX0Okkxxxxxxkk0XNW0l,,;;:cxkl,;xNM" << endl;
	cout << "WO:,cxxood0WMMMMMWNXK0OOOOO0KXNWWXd;,,''':xd:,lKMM" << endl;
	cout << "MNx;,lkOkxkXWWWWWWWWNNXXNNNWWMMMNk:,,,,',oxc,:OWMM" << endl;
	cout << "MMKl,;lddoodddddddddddod0NWMMMMW0l,,,,,,lko;;dNMMM" << endl;
	cout << "MMWOc,,,,,,,,,,,,,,,,,',dXNMMMWKd;,,,,,cO0xldKMMMM" << endl;
	cout << "MMMNx;,,,,,,,,,,,,,,,,',lkO0000x:,,,,,:OWMWWWMMMMM" << endl;
	cout << "MMMMXo;;;;;;;;;;;;;;;;;;cddxxkkl,,,,,,dNMMMMMMMMMM" << endl;
	cout << "MMMMWNKKKKKKKKKKkdxxdxxxxkkkkko;,,,,,lKMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMNx:::::::::::::;,,,,,:OWMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMM:;;;;;;;;;;;;;,,,,,MMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl << endl;

	cout << endl;
	cout << endl;

	cout << "**** **** *        *     **   **     *     *****     ***       *     *****     *     *   *  ****" << endl;
	cout << "*    *    *       * *    * * * *    * *      *       *  *     * *      *      * *    **  * *" << endl;
	cout << "**** **** *      *   *   *  *  *   *   *     *       *   *   *   *     *     *   *   * * * *****" << endl;
	cout << "   * *    *     *******  *     *  *******    *       *  *   *******    *    *******  *  ** *   *" << endl;
	cout << "**** **** **** *       * *     * *       *   *       ***   *       *   *   *       * *   *  ***" << endl;

	cout << endl;

	cout << "                                              ***   *" << endl;
	cout << "                                              *  *  *" << endl;
	cout << "                                              *   * *" << endl;
	cout << "                                              *  *  *" << endl;
	cout << "                                              ***   *" << endl;

	cout << endl;
	cout << endl;

	  
	cout << "               *     ***   *   * *   *     *     *    **   **     *     ****  *****" << endl;
	cout << "              * *    *  *  *   * *   *    * *    *    * * * *    * *    *   *   *" << endl;
	cout << "             *   *   *   * *   * *****   *   *   *    *  *  *   *   *   ****    *" << endl;
	cout << "            *******  *  *  *   * *   *  *******  *    *     *  *******  *  *    *" << endl;
	cout << "           *       * ***    ***  *   * *       * *    *     * *       * *   *   *" << endl;


	cout << endl;
	cout << endl;

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;


	


	cout << " " << endl;
	
	cout << "|=========================================================================================================================|" << endl;
	cin.get();
}


void daftar_produk()
{
	system("cls");
	int a, masuk;
	int hargasementara;

	set_xy(5, 6);
	cout << "No\t\t\t" << "Harga \t\t" << "Nama Barang\t\t" << endl;
	cout << endl;
	for (int n = 0; n < 8; n++)
	{
		cout << setw(7) << n + 1 << setw(22) << harga_produk[n] << setw(18) << nama_produk[n];
		cout << endl;
	}
	cout << endl << endl;

	cout << "CATATAN !!! TEKAN ANGKA 9 UNTUK MELAKUKAN PEMBAYARAN\n\n\n";

	cout << endl;

jump:
	cout << "Masukkan Nomor urut sebagai barang yang dipilih : ";
	cin >> a;
	
	switch (a)
	{
	case 1:
		produk[counter] = nama_produk[0];
		counter++;
		harga[price] = 20000;
		price++;
		
		goto label;
		break;
	case 2:
		produk[counter] = nama_produk[1];
		counter++;
		harga[price] = 15000;
		price++;
		
		goto label;
		break;
	case 3:
		produk[counter] = nama_produk[2];
		counter++;
		harga[price] = 24000;
		price++;
		
		goto label;
		break;
	case 4:
		produk[counter] = nama_produk[3];
		counter++;
		harga[price] = 10000;
		price++;
		
		goto label;
		break;
	case 5:
		produk[counter] = nama_produk[4];
		counter++;
		harga[price] = 15000;
		price++;
		
		goto label;
		break;
	case 6:
		produk[counter] = nama_produk[5];
		counter++;
		harga[price] = 5000;
		price++;
		
		goto label;
		break;
	case 7:
		produk[counter] = nama_produk[6];
		counter++;
		harga[price] = 7500;
		price++;
		
		goto label;
		break;
	case 8:
		produk[counter] = nama_produk[7];
		counter++;
		harga[price] = 7500;
		price++;
		
		goto label;
		break;
	case 9:
		goto end;
		break;
	default:
		break;
	}
label:
	cout << "Masukan jumlah barang : ";
	cin >> masuk;
	jumlah[addition] = masuk;
	addition++;
	cout << endl;
	for (int s = 0; s < counter; s++)
	{
		hargasementara = (harga[s] * masuk);
		tot_harga[value] = tot_harga[value] + hargasementara;
	}
	goto jump;

end:
	for (int p = 0; p <= 1; p++)
	{
		if (p == 0)
		{
			break;
		}
	}

	cin.get();
	system("cls");
}


void menampilkan_daftar_produk()
{

	set_xy(26, 2);
	cout << "Aduhai Mart" << endl << endl;
	set_xy(5, 6);
	cout << "No\t\t" << "Nama Barang\t\t" << "Jumlah\t\t" << "Harga Per-item atau Per-Kg\t\t" << endl;

	for (int h = 0; h < counter; h++)
	{
		cout << setw(7) << h + 1 << setw(19) << produk[h] << setw(18) << jumlah[h] << setw(18) << harga[h];
		cout << endl;
	}

	set_xy(38, 9);
	cout << "Total Harga	 " << tot_harga[value] << endl << endl;
	cout << "__________________________________________________________________________" << endl;
	cout << endl << endl;


}

void harga_barang()
{
	int k;

	cout << "Pembayaran		: ";
	cin >> pay;
	cout << endl;


	cout << "Pembayaran		: " << "Rp." << pay << endl;
	cout << "Sisa			: " << "Rp." << pay - tot_harga[value] << endl;
	cout << endl;
	cout << "===========================================================================" << endl;
	cout << "\t\t\tTerima Kasih Telah Berkunjung\n\n\n\n\n";

	
	cout << "Silahkan Pilih !!" << endl << endl;
	cout << "1. Melihat History" << endl;
	cout << "2. Keluar program" << endl;
	
	cin >> k;
	if (k == 1)
	{
		history_belanja();
	}
	else if (k == 2)
	{
		goto exit;
	} 
	else {}

exit:
	for (int l = 0; l <= 1; l++)
	{
		if (l == 0)
		{
			break;
			
		}
	}
}

void history_belanja()
{
	int v = 20000;
	system("cls");
	set_xy(5, 4);
	cout << "No\t\t" << "Total Pendapatan\n\n";
	for (int r = 0; r < 1; r++)
	{
		cout << setw(5) << r + 1 << setw(22) << (tot_harga[r] - v) <<  endl;
	}
	cout << endl << endl;
}