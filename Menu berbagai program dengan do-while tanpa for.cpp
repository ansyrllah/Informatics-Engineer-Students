#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int pil; 
	char ulangi;
	
	do 
	{
	    cout << "Menu Berbagai Program (cuma pakai do-while)" << endl;
	    cout << "*******************************************" << endl;
		cout << "Pilih program \n1. Program Bintang \n2. Program Bilangan Faktorial \n3. Program Bilangan Prima 1-1000"<<endl;
		cout << "Masukkan pilihan : "; cin >> pil;
		
		if (pil == 1) 
		{
			// Mencetak bintang persegi
			int tinggi = 0;
			do // Outer loop/pengulangan tinggi
			{
			    int lebar = 0;
			    do // Inner loop/pengulangan lebar
			    {
			        cout << "*";
			        lebar++;
			    } 
			    while (lebar < 17);
			    tinggi++;
			    cout << endl; 
			} while (tinggi < 14);
		}
		else if( pil == 2)
		{
		    //Mencetak faktorial
		    int angka = 1;
		    do // Outer loop: mencari faktorial dari angka
		    { 
		        int faktorial = 1;
		        int count = 1;
		        do // Outer loop: perulangan perkalian faktorial
		        {
		            faktorial *= count;
		            count++;
		        }
		        while (count <= angka);
		        // mencetak faktorial dari angka
		        cout << " Angka = " << angka
		        << " Factorial = " << faktorial << endl;
		        angka++;
		    }
		    while (angka <= 15);
			
		}
		else if (pil == 3)
		{
		    // perulangan dari rentang angka 2-1000
			int angka = 2;
			do
			{
			    int faktor = 2;
			    bool prima = true;
			    do 
			    {
			        if ((angka > faktor) && (angka % faktor == 0))
			        {
			            prima = false;
			        }
			        faktor++;
			    }
			    while (faktor <= sqrt(angka));
			    if (prima) cout << angka << ", ";
			    angka++;
			}
			while (angka < 1000);
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
