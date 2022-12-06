#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define maks 100
 
void menu();
void perkalian();
void penjumlahan();
void tranpose();
void restart();
void matriksKali();
void matriksJumlah();
void pilihan();
 
int matriks1[maks][maks], matriks2[maks][maks];
int bil, i,j, baris1, kolom1, baris2, kolom2, isMatriks2=0, isOrdo=0;
 
 
void cover(){
    
}
 
 
int main (void){
system("cls");
    cover();  
    system("pause");
    menu();
return (0);
}
 
void header(){
    printf("|====================================|\n");
    printf("|	         Program Matriks         |\n");
    printf("|              Kelompok 23           |\n");
    printf("|====================================|\n");
}
 
void menu (void){
int pil;
    system("cls");
    header();
printf("|====================================|\n");
printf("|       [1] Perkalian Matriks        |\n");
printf("|       [2] Penjumlahan Matriks      |\n");
printf("|       [3] Tranpose Matriks         |\n");
printf("|       [0] Keluar                   |\n");
printf("|====================================|\n\n");
printf("Menu Pilihan Anda : ");
validation(&pil, "");
pilihan(pil);
}
 
int input(int *select){
    char buff[1024];
    char term;
    if(fgets(buff, sizeof(buff), stdin) != NULL && sscanf(buff, "%d %c", select, &term) == 1){
        if(isOrdo==1){
            if(isMatriks2==1){
                if(kolom1 != *select){
                    printf("Jumlah Baris di Matriks Kedua Harus Sama dengan Jumlah Kolom Pada Matriks 1, Yaitu (%d) : ", kolom1);
                    return 0;
                }else if(*select<1){
                    printf("Ordo Tidak Boleh Kurang dari 1! Masukkan Ulang : ");
                    return 0;
                }
            }else if(*select < 1){
                printf("Ordo Tidak Boleh Kurang dari 1! Masukkan Ulang : ");
                return 0;
            }
}
        return 1;
    }
    printf("Inputan Salah, Masukan Angka : ");
    return 0;
}
 
int validation(int *var, char *prompt){
    while(1){
        printf(prompt);
        if(input(var))
        break;
    }
}
 
void pilihan (int pil){
    switch(pil){
        case 1:
        system("cls");
        printf("=======================================\n");
        printf("====       Perkalian Matriks       ====\n");
        printf("=======================================\n\n");
        matriksKali();
        perkalian(baris1,kolom1,baris2,kolom2,matriks1,matriks2);
        restart();
        break;
 
        case 2:
        system("cls");
        printf("=======================================\n");
        printf("====      Penjumlahan Matriks      ====\n");
        printf("=======================================\n\n");
        matriksJumlah();
        penjumlahan(baris1,kolom1,baris2,kolom2,matriks1,matriks2);
        restart();
        break;
 
        case 3:
        system("cls");
        printf("=======================================\n");
        printf("====       Tranpose  Matriks       ====\n");
        printf("=======================================\n\n");
        tranpose();
        restart();
        break;
 
        case 0:
        system("cls");
        printf("Terimakasih, Sampai Jumpa!\n\n");
    printf("|===========================================|\n");
    printf("|                 KELOMPOK 23               |\n");
    printf("|===========================================|\n");
    printf("|           Nama Anggota Kelompok           |\n");
    printf("|===========================================|\n");
    printf("|2205551005 Gede Made Rapriananta Pande     |\n");
    printf("|2205551003 Ida Bagus Paalakaa RNB          |\n");
    printf("|2205551069 Ni Kadek Ari Diah Lestari       |\n");
    printf("|2205551072 I Gusti Ayu Krisna Kusuma Dewi  |\n");
    printf("|2205551076 Kadek Yogi Dwi Putra Utama      |\n");
    printf("|2205551079 Anak Agung Indi Kusuma Putra    |\n");
    printf("|===========================================|\n\n");
        break;
 
        default:
        printf("Pilihan Tidak Tersedia!\n\n");
        system("pause");
        system("cls");
        menu();
        break;
    }         
}
 
void matriksKali (void){
    isOrdo=1;
    printf("Masukkan Ordo Matriks Pertama : \n");
    printf("Baris : ");
    validation(&baris1, "");
    printf("Kolom : ");
    validation(&kolom1, ""); 
    isOrdo=0;
 
    printf("Masukkan Isi Matriks Pertama : \n");
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom1;j++){
            printf("Matriks [%d][%d] :",i,j);
            validation(&matriks1[i][j],""); 
        }
    }    
 
    isOrdo=1;
    printf("\n\nMasukkan Ordo Matriks Kedua\n");
    isMatriks2=1;
    printf("Baris : ");
    validation(&baris2, "");
    isMatriks2=0;
    printf("Kolom : ");
    validation(&kolom2, "");   
    isOrdo=0;   
 
    printf("Masukkan Isi Matriks Kedua : \n");
    for (i=0;i<baris2;i++){
        for (j=0;j<kolom2;j++){
            printf("Matriks [%d][%d] : ",i,j);
            validation(&matriks2[i][j],"");              
        }
    } 
}
 
void matriksJumlah (void){
    isOrdo=1;
    printf("Masukkan Ordo Matriks Yang Ingin Di Jumlahkan\n");
    printf("Baris : ");
    validation(&baris1, "");
    printf("Kolom : ");
    validation(&kolom1, ""); 
    isOrdo=0;
 
    printf("Masukkan Isi Matriks Pertama : \n");
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom1;j++){
            printf("Matriks [%d][%d] :",i,j);
            validation(&matriks1[i][j],""); 
        }
    }      
 
    printf("Masukkan Isi Matriks Kedua : \n");
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom1;j++){
            printf("Matriks [%d][%d] : ",i,j);
            validation(&matriks2[i][j],"");              
        }
    } 
}
 
void perkalian (int baris1,int kolom1, int baris2, int kolom2, int matriks_1[maks][maks] , int matriks_2[maks][maks]){
    int i, j, k, matriks_3[maks][maks];
    system("cls");
    printf("=======================================\n");
    printf("====       Perkalian Matriks       ====\n");
    printf("=======================================\n\n");
    printf("Matriks Pertama : \n");
    for(i=0 ; i<baris1 ; i++){
        for(j=0 ; j<kolom1 ; j++){
            printf("%d", matriks1[i][j]);
            if(j==(kolom1-1)) printf("\n");
            else printf(" ");
        }
    }
    printf("Matriks Kedua : \n");
    for(i=0 ; i<baris2 ; i++){
        for(j=0 ; j<kolom2 ; j++){
            printf("%d", matriks2[i][j]);
            if(j==(kolom2-1)) printf("\n");
            else printf(" ");
        }
    }
 
    printf("Hasil Perkalian Pertama dan Kedua Matriks : \n");
    for (i=0;i<baris1;i++){
        for (j=0;j<kolom2;j++){              
            matriks_3[i][j] = 0;
            for (k=0;k<baris2;k++){
                matriks_3[i][j] =matriks_3[i][j]+(matriks_1[i][k] * matriks_2[k][j]);
            }
            printf("%d", matriks_3[i][j]);            
            if (j == (kolom2-1)) printf("\n");
            else printf(" ");
        }
    }
}
 
void penjumlahan(int barisa, int koloma, int barisb, int kolomb, int matriks_1[maks][maks], int matriks_2[maks][maks]){
    int matriks_3[maks][maks], i, j, barisx, kolomx;
    if(barisa>barisb){
        barisx=barisa;
    }else{
        barisx=barisb;
    }
    if(koloma>kolomb){
        kolomx=koloma;
    }else{
        kolomx=kolomb;
    }
    system("cls");
    printf("=======================================\n");
    printf("====      Penjumlahan Matriks      ====\n");
    printf("=======================================\n\n");
    printf("Matriks Pertama : \n");
    for(i=0 ; i<baris1 ; i++){
        for(j=0 ; j<kolom1 ; j++){
            printf("%d", matriks1[i][j]);
            if(j==(kolom1-1)) printf("\n");
            else printf(" ");
        }
    }
    printf("Matriks Kedua : \n");
    for(i=0 ; i<baris2 ; i++){
        for(j=0 ; j<kolom2 ; j++){
            printf("%d", matriks2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
 
    printf("Hasil Penjumlahan Dari Kedua Matriks : \n");
    for(i=0 ; i<barisx ; i++){
        for(j=0 ; j<kolomx ; j++){
            matriks_3[i][j]=matriks_1[i][j]+matriks_2[i][j];
            printf("%d", matriks_3[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
 
void tranpose (){
    int i, j, baris, kolom;
    isOrdo=1;
    printf("Masukkan Ordo Matriks\n");
    printf("Baris : ");
    validation(&baris, "");
    printf("Kolom : ");
    validation(&kolom, ""); 
    isOrdo=0;
 
    int matriks_1[baris][kolom], matriks_2[kolom][baris];  
 
    printf("Masukkan Isi Matriks\n\n");
    
    for (i=0;i<baris;i++){
        for (j=0;j<kolom;j++){
            printf("Matriks [%d][%d] : ",i,j);
            validation(&matriks_1[i][j],"");    
        }
    }   
 
    for(i=0 ; i<baris ; i++){
        for (j=0; j<kolom ; j++){
            matriks_2[j][i]=matriks_1[i][j];
        }
    }
    system("cls");
    printf("=======================================\n");
    printf("====        Tranpose Matriks       ====\n");
    printf("=======================================\n\n");
    printf("Matriks Sebelum Tranpose : \n");
    for(i=0 ; i<baris ; i++){
        for(j=0 ; j<kolom ; j++){
            printf("%d", matriks_1[i][j]);
            printf(" ");
        }
        printf("\n");
    }
 
    printf("Matriks Setelah Tranpose : \n");
    for(i=0 ; i<kolom ; i++){
        for(j=0 ; j<baris ; j++){
            printf("%d", matriks_2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}
 
void restart (void)
{
    int reset;
    fflush(stdin);
    printf("\nIngin Menghitung Kembali?\n\n");
    printf("[1]. Kembali Menghitung\n");
    printf("[2]. Keluar\n");
    printf("Pilihan anda : ");
    validation(&reset, "");
    if(reset==1)
    {
        system("cls");
        menu();
    }else if(reset==2)
    {
        system("cls");
        printf("Terimakasih, Sampai jumpa!\n\n");
        printf("|===========================================|\n");
    printf("|                 KELOMPOK 23               |\n");
    printf("|===========================================|\n");
    printf("|           Nama Anggota Kelompok           |\n");
    printf("|===========================================|\n");
    printf("|2205551005 Gede Made Rapriananta Pande     |\n");
    printf("|2205551003 Ida Bagus Paalakaa RNB          |\n");
    printf("|2205551069 Ni Kadek Ari Diah Lestari       |\n");
    printf("|2205551072 I Gusti Ayu Krisna Kusuma Dewi  |\n");
    printf("|2205551076 Kadek Yogi Dwi Putra Utama      |\n");
    printf("|2205551079 Anak Agung Indi Kusuma Putra    |\n");
    printf("|===========================================|\n\n");
    }else{
        printf("\nPilihan Tidak Tersedia\n");
        restart();
    }
}
