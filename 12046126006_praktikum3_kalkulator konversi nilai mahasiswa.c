/*
 *Program   : kalkulator konversi nilai mahasiswa
 * Nama     : Rafi zaini arrasyid
 * NIM      : 12046126006
 * Deskripsi:esle – if untuk grade dan predikat kelulusan
 */

#include <stdio.h>

int main() {
    long nim;
    float nilai;
    char grade;
    char predikat[15];
    char status[15];

    printf("=== KONVERSI NILAI MAHASISWA SI ===\n");
    printf("Masukkan NIM                 : ");
    scanf("%ld", &nim);

    printf("Masukkan Nilai Akhir (0-100): ");
    scanf("%f", &nilai);

    // Validasi rentang input
    if (nilai < 0 || nilai > 100) {
        printf("\nERROR: Nilai harus di antara 0 - 100!\n");
        return 1;
    }

    // Klasifikasi grade
    if (nilai >= 85) {
        grade = 'A';
        printf(predikat, "Sangat Baik");
        printf(status, "LULUS");
    } else if (nilai >= 75) {
        grade = 'B';
        printf(predikat, "Baik");
        printf(status, "LULUS");
    } else if (nilai >= 65) {
        grade = 'C';
        printf(predikat, "Cukup");
        printf(status, "LULUS");
    } else if (nilai >= 50) {
        grade = 'D';
        printf(predikat, "Kurang");
        printf(status, "TIDAK LULUS");
    } else {
        grade = 'E';
        printf(predikat, "Sangat Kurang");
        printf(status, "TIDAK LULUS");
    }

    printf("\n===================================\n");
    printf("         KARTU HASIL STUDI (KHS)         \n");
    printf("===================================\n");
    printf("NIM             : %ld\n", nim);
    printf("Nilai           : %.2f\n", nilai);
    printf("Grade           : %c\n", grade);
    printf("Predikat        : %s\n", predikat);
    printf("Status          : %s\n", status);
    printf("===================================\n");

    return 0;
}
