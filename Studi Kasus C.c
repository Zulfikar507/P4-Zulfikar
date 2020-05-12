#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    printf("NAMA : ZULFIKAR \nNIM : F1B019147 \nKELOMPOK : 28 \n\n\n");

    int kode , harga , i=1 , total_pembelian=0, diskon, total_bayar;
	char kar= 'y' ;
    printf("+================================+\n");
    printf("|kode|    Barang  |    Harga     |\n");
    printf("|================================|\n");
    printf("| 1  |  Garpu     | Rp. 4500     |\n");
    printf("| 2  |  Sendok    | Rp. 3000     |\n");
    printf("| 3  |  Gelas     | Rp. 3500     |\n");
    printf("| 4  |  Cangkir   | Rp. 5000     |\n");
    printf("| 5  |  Piring    | Rp. 7000     |\n");
    printf("| 6  |  Mangkuk   | Rp. 5500     |\n");
    printf("| 7  |  Pengaduk  | Rp. 3400     |\n");
    printf("| 8  |  Pisau     | Rp. 25000    |\n");
    printf("| 9  |  Wajan     | Rp. 9000     |\n");
    printf("| 10 |  Panci     | Rp. 10000    |\n");
    printf("| 11 |  Kompor    | Rp. 25000    |\n");
    printf("| 12 |  Nare      | Rp. 7500     |\n");
    printf("| 13 |  Ulekan    | Rp. 1000     |\n");
    printf("| 14 |  Spatula   | Rp. 5000     |\n");
    printf("| 15 |  Kocor     | Rp. 2500     |\n");
    printf("|----|------------|--------------|\n");
    printf("+================================+\n");

	printf("masukkan kode barang :");


while (kar=='y'){

	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
		printf("barang yang anda pilih adalah : Garpu\n");
	harga= 4500;
	printf("Harga Garpu = %d\n ", harga);
}else if (kode==2){
	printf("barang yang anda pilih adalah : sendok\n");
		harga= 3000;
	printf("Harga Sendok = %d\n ", harga);
}else if ( kode == 3){
	printf("barang yang anda pilih adalah : Gelas\n");
		harga= 3500;
	printf("Harga Gelas = %d ", harga);
}else if ( kode == 4){
	printf("barang yang anda pilih adalah : Cangkir\n");
	harga= 5000;
	printf("Harga Cangkir = %d ", harga);
}else if ( kode == 5){
	printf("barang yang anda pilih adalah : Piring\n");
	harga= 7000;
	printf("Harga Piring = %d ", harga);
}else if ( kode == 6){
	printf("barang yang anda pilih adalah : Mangkuk\n");
	harga= 5500;
	printf("Harga Mangkuk = %d ", harga);
}else if ( kode == 7){
	printf("barang yang anda pilih adalah : Pengaduk\n");
	harga= 3400;
	printf("Harga Pengaduk = %d ", harga);
}else if ( kode == 8){
	printf("barang yang anda pilih adalah : Pisau\n");
	harga= 25000;
	printf("Harga Pisau = %d ", harga);
}else if ( kode == 9){
	printf("barang yang anda pilih adalah : Wajan\n");
	harga= 9000;
	printf("Harga Wajan = %d ", harga);
}else if ( kode == 10){
	printf("barang yang anda pilih adalah : Panci\n");
	harga= 10000;
	printf("Harga Panci = %d ", harga);
}else if ( kode == 11){
	printf("barang yang anda pilih adalah : Kompor\n");
	harga= 25000;
	printf("Harga Kompor = %d ", harga);
}else if ( kode == 12){
	printf("barang yang anda pilih adalah : Nare\n");
	harga= 7500;
	printf("Harga Nare = %d ", harga);
}else if ( kode == 13){
	printf("barang yang anda pilih adalah : Ulekan\n");
	harga= 1000;
	printf("Harga Ulekan = %d ", harga);
}else if ( kode == 14){
	printf("barang yang anda pilih adalah : Spatula\n");
	harga= 5000;
	printf("Harga Spatula = %d ", harga);
}else if ( kode == 15){
	printf("barang yang anda pilih adalah : Kocor\n");
	harga= 2500;
	printf("Harga Kocor = %d ", harga);
}else{
	printf("input salah!!!! ");
}
total_pembelian=total_pembelian+harga;
printf("MAU BELI BARANG LAGI?? [y/t]:");
scanf("%c", &kar);
i++;


}
printf("................................................\n");
printf("................................................\n");
printf("total pembelian = %d\n ", total_pembelian);
if (total_pembelian > 1000000){
	diskon=0.1*total_pembelian;
	printf ("diskon : %d\n", diskon);
	total_bayar=total_pembelian-diskon;
}else{
	total_bayar=total_pembelian;
}

printf("************************************************\n");
printf("************************************************\n");
printf("total bayar=%d\n",total_bayar);
}

