#include <iostream>
#include <string.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	cout<<"| SELAMAT DATANG DI PROGRAM KASIR KELOMPOK : 28 | \n\n"<<endl;
	
	int kode, harga, i=1, total_pembelian=0, diskon, total_bayar;
	int z;
	int login=0;
	string user, pass;
	char kar= 'y';
	z = 1;
   do {
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user =="admin" && pass =="array"){
           cout << "--------------------\n";
           cout << "Anda Berhasil Login" <<endl;
           cout << "--------------------\n\n";
           z=4;
           login=1;
  }
       else {
           cout << "------------------------\n";          
           cout << "Maaf ID & PASSWORD Salah!" <<endl;
     cout << "-------------------------\n\n";          
           z = z +1;
       }
    }while (z <= 3);
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
       cout << "Mohon Maaf Akun Anda Kami Blockir Untuk Sementara\n";
    cout<<"silahkan hubungi kami melalui e-mail kepodora@yahoo.com terima kasih";
    }
	cout<<"+================================+\n"<<endl;
    cout<<"|kode|    Barang  |    Harga     |\n"<<endl;
    cout<<"|================================|\n"<<endl;
    cout<<"| 1  |  Garpu     | Rp. 4500     |"<<endl;
    cout<<"| 2  |  Sendok    | Rp. 3000     |"<<endl;
    cout<<"| 3  |  Gelas     | Rp. 3500     |"<<endl;
    cout<<"| 4  |  Cangkir   | Rp. 5000     |"<<endl;
    cout<<"| 5  |  Piring    | Rp. 7000     |"<<endl;
    cout<<"| 6  |  Mangkuk   | Rp. 5500     |"<<endl;
    cout<<"| 7  |  Pengaduk  | Rp. 3400     |"<<endl;
    cout<<"| 8  |  Pisau     | Rp. 25000    |"<<endl;
    cout<<"| 9  |  Wajan     | Rp. 9000     |"<<endl;
    cout<<"| 10 |  Panci     | Rp. 10000    |"<<endl;
    cout<<"| 11 |  Kompor    | Rp. 25000    |"<<endl;
    cout<<"| 12 |  Nare      | Rp. 7500     |"<<endl;
    cout<<"| 13 |  Ulekan    | Rp. 1000     |"<<endl;
    cout<<"| 14 |  Spatula   | Rp. 5000     |"<<endl;
    cout<<"| 15 |  Kocor     | Rp. 2500     |"<<endl;
    cout<<"|----|------------|--------------|"<<endl;
    cout<<"+================================+"<<endl;

	cout<<"masukkan kode barang :"<<endl;

while (kar=='y'){

	cin>>kode;
	fflush (stdin);
	if (kode==1)	{
		cout<<"barang yang anda pilih adalah : Garpu\n"<<endl;
	harga= 4500;
	cout<<"Harga Garpu = \n "<<harga<<endl;
}else if (kode==2){
	cout<<"barang yang anda pilih adalah : sendok\n"<<endl;
		harga= 3000;
	cout<<"Harga Sendok = \n "<<harga<<endl;
}else if ( kode == 3){
	cout<<"barang yang anda pilih adalah : Gelas\n"<<endl;
		harga= 3500;
	cout<<"Harga Gelas = \n "<<harga<<endl;
}else if ( kode == 4){
	cout<<"barang yang anda pilih adalah : Cangkir\n"<<endl;
	harga= 5000;
	cout<<"Harga Cangkir = \n "<<harga<<endl;
}else if ( kode == 5){
	cout<<"barang yang anda pilih adalah : Piring\n"<<endl;
	harga= 7000;
	cout<<"Harga Piring = \n "<<harga<<endl;
}else if ( kode == 6){
	cout<<"barang yang anda pilih adalah : Mangkuk\n"<<endl;
	harga= 5500;
	cout<<"Harga Mangkuk = \n "<<harga<<endl;
}else if ( kode == 7){
	cout<<"barang yang anda pilih adalah : Pengaduk\n"<<endl;
	harga= 3400;
	cout<<"Harga Pengaduk = \n "<<harga<<endl;
}else if ( kode == 8){
	cout<<"barang yang anda pilih adalah : Pisau\n"<<endl;
	harga= 25000;
	cout<<"Harga Pisau = \n "<<harga<<endl;
}else if ( kode == 9){
	cout<<"barang yang anda pilih adalah : Wajan\n"<<endl;
	harga= 9000;
	cout<<"Harga Wajan = \n "<<harga<<endl;
}else if ( kode == 10){
	cout<<"barang yang anda pilih adalah : Panci\n"<<endl;
	harga= 10000;
	cout<<"Harga Panci = \n "<<harga<<endl;
}else if ( kode == 11){
	cout<<"barang yang anda pilih adalah : Kompor\n"<<endl;
	harga= 25000;
	cout<<"Harga Kompor = \n "<<harga<<endl;
}else if ( kode == 12){
	cout<<"barang yang anda pilih adalah : Nare\n"<<endl;
	harga= 7500;
	cout<<"Harga Nare = \n "<<harga<<endl;
}else if ( kode == 13){
	cout<<"barang yang anda pilih adalah : Ulekan\n"<<endl;
	harga= 1000;
	cout<<"Harga Ulekan = \n "<<harga<<endl;
}else if ( kode == 14){
	cout<<"barang yang anda pilih adalah : Spatula\n"<<endl;
	harga= 5000;
	cout<<"Harga Spatula = \n "<<harga<<endl;
}else if ( kode == 15){
	cout<<"barang yang anda pilih adalah : Kocor\n"<<endl;
	harga= 2500;
	cout<<"Harga Kocor = \n "<<harga<<endl;
}else{
	cout<<"input salah!!!! "<<endl;
}
total_pembelian=total_pembelian+harga;
cout<<"MAU BELI BARANG LAGI?? [y/t]:"<<endl;
cin>>kar;
i++;


}
cout<<"................................................\n"<<endl;
cout<<"................................................"<<endl;
cout<<"total pembelian = \n "<<total_pembelian<<endl;
if (total_pembelian > 1000000){
	diskon=0.1*total_pembelian;
	cout<<"diskon : \n"<<diskon<<endl;
	total_bayar=total_pembelian-diskon;
}else{
	total_bayar=total_pembelian;
}

cout<<"************************************************\n"<<endl;
cout<<"************************************************"<<endl;
cout<<"total bayar=\n"<<total_bayar<<endl;
}

