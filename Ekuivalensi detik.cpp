// Program untuk menghitung ekuivalensi dari detik ke dalam hari, jam, menit, dan detik
#include <iostream>
using namespace std;

int main() 
{
	int angka, hari, jam, menit, detik;

	for (int i = 1; i < 5; i++) // syarat 4: ada batas
	{
		cout << i << ". Masukkan angka (0 - 1000000) = ";
		cin >> angka;	// syarat 1: memiliki input

		if (angka > 0 && angka < 1000000)	// syarat 3: Pasti, tidak ambigu
		{
			cout << angka << " detik ekuivalen dengan ";

			// Konversi ke hari
			hari = angka / 86400;
			cout << hari << " Hari, "; // syarat 2: memiliki output

			// Konversi ke jam
			jam = (angka % 86400) / 3600;
			cout << jam << " Jam, ";

			// Konversi ke menit
			menit = (angka % 86400) % 3600 / 60;
			cout << menit << " Menit, ";

			// Konversi ke detik
			detik = ((((angka % 86400) % 3600)) % 60);
			cout << detik << " Detik" << endl;
		}
		else
			cout << "Maaf, angka melebihi batas." << endl;
			// syarat 5: efektif
	}
	return 0;
}
