/*
 *Program   : sistem parkir mall
 * Nama     : Rafi zaini arrasyid
 * NIM      : 12046126006
 * Deskripsi:switc-case (char) + nested if untuk denda
 */

#include <stdio.h>
                
                int main() {
                    char jenis;
                    int lama;
                    int tarif;
                
                    printf("=== SISTEM PARKIR MALL ===\n");
                    printf("jenis kendaraan (M=motor,A=mobil):");
                    scanf("%c",&jenis);
                
                    printf("lama parkir (jam)                 :");
                    scanf ("%d",&lama);
                
                    switch (jenis){
                        case'M':
                        case'm':
                            tarif = tarif + 2000;
                            if (lama>5) {
                                tarif = tarif +10000;
                                printf("anda kena denda Rp 10.000 (parkir >5:jam\n");
                            }
                    printf("total tarif motor :Rp %d\n",tarif);
                    break;
                        
                    case 'A':
                    case 'a':
                
                        tarif =lama * 4000;
                    if(lama >5) {
                        tarif = tarif + 15000;
                        printf("anda kena denda Rp 15000 (parkir>5 jam )\n");
                    }
                
                    printf("total tarif parkir mobil: Rp %d\n", tarif);
                    break;
                    default:
                        printf("ERROR: jenis kendaraan tidakl valid\n");
                        printf("gunakan huruf M atau A saja.\n");
                    }
           
                    printf("\n TERIMA KASIH.\n");
                    
                    return 0;
                    }

