#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int proses_perhitungan (int perhitungan){

    float a;
    float b;
    float hasil;

printf("\t\t==========================================\n");
input_float(&a,"\n\t\tMasukan angka pertama: \t");
input_float(&b,"\n\t\tMasukan angka kedua: \t");
printf("\n\t\t===========================================\n");

if(perhitungan == 1){
    hasil = a + b;
        }else if(perhitungan == 2){
            hasil = a - b;
            }else if(perhitungan == 3){
                hasil = a * b;
                }else if(perhitungan == 4){
                    hasil = a / b;
                    }

printf("\n\t\tHasil perhitungan\t: %.2f\n", hasil);
printf("\t\t===========================================\n");
}

int proses_modulus (int perhitungan){

int c;
int d;
int hasilmodulus;

printf("\t\t==========================================\n");
while(1){
input_int(&c,"\n\t\tMasukan angka pertama: \t");
if(c > 0)
    break;
printf("\n\t\tJangan negatif kalau modulus\n");
}
while(1){
input_int(&d,"\n\t\tMasukan angka kedua: \t");
if(d > 0)
    break;
printf("\n\t\tJangan negatif kalau modulus\n");
}
printf("\t\t===========================================\n");

if (perhitungan == 5){
    hasilmodulus = c % d;
    }
printf("\n\t\tHasil perhitungan\t: %d\n", hasilmodulus);
printf("\t\t===========================================\n");
}

float valid_float(float *var)
{
    char buff[20];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin)!= NULL)
    {
        if(sscanf(buff,"%f %c",var,&cek)== 1)
        {
            return 1;
        }
    }
    return 0;
}

//validasi ulang float
void input_float(float *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_float(var))
            break;
        printf("\n\t\t!Masukan angka saja, jangan yang lain!\n");
        printf("\n");
    }
}

int valid_int(int *var){
    char buff[20];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin)!=NULL){
        if(sscanf(buff, "%d %c", var, &cek)==1){
            return 1;
        }
    }
    return 0;
}
//validasi ulang integer
void input_int(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\n\t\t!Masukan angka saja, jangan yang lain!\n");
        printf("\n");
    }
}

//validasi ulang pilihan
void input_pilihan(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\n\t\tPilih angka yang diatas saja ya!\n");
        printf("\n");
    }
}

int main(){
int perhitungan;

printf("\t\t==========================================\n");
printf("\t\t||           Kalkulator Simple          ||\n");
printf("\t\t|| Silahkan input angka yang diinginkan ||\n");
printf("\t\t||--------------------------------------||\n");
printf("\t\t|| 1. penjumlahan                       ||\n");
printf("\t\t|| 2. pengurangan                       ||\n");
printf("\t\t|| 3. perkalian                         ||\n");
printf("\t\t|| 4. pembagian                         ||\n");
printf("\t\t|| 5. modulus                           ||\n");
printf("\t\t==========================================\n");
input_pilihan(&perhitungan, "\t\tPilih operasi yang diinginkan: ");

if (perhitungan == 1 || perhitungan == 2 || perhitungan == 3 || perhitungan == 4){
    proses_perhitungan(perhitungan); //memanggil fungsi proses_perhitungan selain modulus

}else if (perhitungan == 5){
proses_modulus(perhitungan); //memanggil fungsi perhitungan modulus

}else if(perhitungan > 5){
    printf("\n\t\tOperasi tidak tersedia!\n");
    printf("\t\t==========================================\n");
    }
    ulang(); //untuk memanggil prosedur pengulangan program
return 0;
}

//prosedur mengulang program
void ulang(){
    int mengulang;

    printf("\t\tIngin mengulang kalkulasi?\n\t\t1. YA \n\t\t2. Tidak\n");
    printf("\t\t=> ");
    scanf("%d", &mengulang);
        if (mengulang == 1 ){
            system("cls");
            main();
        }else if(mengulang ==2){
            printf("\t\t*************** Terima Kasih ***************\n");
        }
}
