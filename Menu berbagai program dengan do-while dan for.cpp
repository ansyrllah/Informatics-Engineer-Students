#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int pil; 
	char ulangi;
	
	do {
	    cout << "      Menu Berbagai Program       " << endl;
	    cout << "**********************************" << endl;
		cout << "Pilih program \n1. Program Bintang Persegi\n2. Program Bilangan Faktorial \n3. Program Bilangan Prima 1-1000"<<endl;
		cout << "Masukkan pilihan : "; cin >> pil;
		
		if (pil == 1) 
		{
			// Mencetak bintang persegi
			for (int tinggi=0; tinggi < 14; tinggi++)
			{
			    // Outer loop/pengulangan tinggi
			    for (int lebar=0; lebar < 17; lebar++)
			    {
			        // Inner loop/pengulangan lebar
			        cout << "*";
			    }
			    cout << endl;
			}	
		}
		else if( pil == 2)
		{
			// Mencetak Faktorial
			for (int angka = 1; angka <= 15; angka++)
			{
    			// Outer loop/perulangan mencari faktorial dari angka
    			int faktorial = 1;
    			for (int Count = 1; Count <= angka; Count++)
    			{
        			// Inner loop/perulangan perkalian faktorial
        			faktorial *= Count;
    			}
    			cout << " Angka = " << angka
    			<< " Factorial = " << faktorial << endl;
			}
		}
		else if (pil == 3)
		{
			// perulangan dari rentang angka 2-1000
			for (int angka = 2; angka < 1000; angka++)
			{
    			bool Prime = true;
    			// perulangan mengecek angka prima atau bukan
    			for (int faktor = 2; faktor <= sqrt(angka); faktor++)
    			{
    			    if ((angka > faktor) && (angka % faktor == 0))
    			        Prime = false;
    			}
    			if (Prime) cout << angka << " ";
			}
			cout << endl;
		}
		else
			cout << "\nPilihan Program Tidak Tersedia" << endl;
		
		cout << "\nKlik y/Y untuk kembali ke Menu \natau klik selain y/Y untuk meninggalkan Menu: "; 
		cin >> ulangi;	
		cout << endl;
	} 
	while ((ulangi == 'y') || (ulangi == 'Y'));
	
	cout << "Selamat Tinggal!" << endl;
	
	return 0;
}
