#include <iostream>
using namespace std;

int main() {
	//Inisialisasi variabel
	int jenis, lama, harga, tambahan, jam_berikutnya;
	
	cout<<"PROGRAM PAJAK TARIF PARKIR KENDARAAN"<<endl;
	cout<<"1. Motor"<<endl;
	cout<<"2. Mobil"<<endl;
	cout<<"3. Truk"<<endl;
	cout<<"4. Bus"<<endl;
	cout<<endl;
	cout<<"Masukan Jenis Kendaraan       : ";
	cin>>jenis;
	//Pemilihan dengan switch case
	switch (jenis){
		case 1  : 
			harga=2000;
			tambahan=500;
			break;
		case 2  :
			harga=4000;
			tambahan=1000;
			break;
		case 3	:
			harga=6000;
			tambahan=2000;
			break;
		case 4	:
			harga=6000;
			tambahan=2000;
			break;
		default :
			harga=0;		
	}

	cout<<"Masukan Lama Parkir (Per Jam) : ";
	cin>>lama;
	//Kondisi percabangan
	if (lama>2){
		jam_berikutnya=((lama-2)*tambahan);
	}else {
		jam_berikutnya=0;
	}
	//Menampilkan Hasil
	cout<<"------------------------------------"<<endl;
	cout<<"2 Jam Pertama  Rp:"<<harga<<endl;
	cout<<"Jam Berikutnya Rp:"<<jam_berikutnya<<endl;
	cout<<"Total Bayar    Rp:"<<harga+jam_berikutnya<<endl;
}