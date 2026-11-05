/*
 *Program   : sistem seleksi beasiswa mahasiswa si
 * Nama     : Rafi zaini arrasyid
 * NIM      : 12046126006
 * Deskripsi: menggunakan if-esle if dengan operatol logika AND
 */


#include <stdio.h>
#include <string.h>
 
int main() {
	char nama[100];
	float ipk;
	long pendapatan;
	printf("=== SISTEM SELEKSI BEASISWA MAHASISWA SI ===\n");
 
	printf("Masukkan nama lengkap  	: ");
	fgets(nama, sizeof(nama), stdin);
	nama[strcspn(nama, "\n")] = '\0';   // hapus karakter enter
 
	printf("Masukkan IPK           	: ");
	scanf("%f", &ipk);
 
	printf("Pendapatan orang tua (Rp)  : ");
	scanf("%ld", &pendapatan);
 
	printf("\n--- HASIL SELEKSI ---\n");
	printf("Nama   	: %s\n", nama);
	printf("IPK    	: %.2f\n", ipk);
	printf("Pendapatan : Rp %ld\n", pendapatan);
 
	if (ipk >= 3.50 && pendapatan < 3000000) {
    	printf("Hasil  	: Beasiswa Penuh (A)\n");
	} else if (ipk >= 3.00 && pendapatan < 5000000) {
    	printf("Hasil  	: Beasiswa 50%% (B)\n");
	} else if (ipk >= 2.75 && pendapatan < 7000000) {
    	printf("Hasil  	: Beasiswa 25%% (C)\n");
	} else {
    	printf("Hasil  	: Tidak Mendapat Beasiswa\n");
	}
	return 0;
}
