#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
 
//Deklarasi Variabel Global
int panjangsisi;
int pilihan;
 
//Deklarasi stuct
typedef struct {
    int panjang, luasPermukaan, volume;
}kubusStruct;
 
//Deklarasi union
typedef union{
    int panjang, luasPermukaan, volume;
}kubusUnion;
 
int main();
 
//Validasi 
int input(){
char cek;

if(cek=scanf("%d%c", &pilihan, &cek)!=2 || pilihan<1){
fflush(stdin);
printf("\n\t\tMASUKKAN ANGKA YANG BENAR !");
printf("\n\t\tMasukkan pilihan   : ");
return input();
}else{
return pilihan;
}
}
 
int inputsisi(){
char cek;

if(cek=scanf("%d%c", &panjangsisi, &cek)!=2 || panjangsisi<0){
system("cls");
fflush(stdin);
printf("\n\t\tMASUKKAN ANGKA YANG BENAR !");
printf("\n\t\tMasukkan sisi   : ");
return inputsisi();
}else{
return panjangsisi;
}
}
 
 
void repeat(){
    char pil[3];
    printf("\nApakah anda ingin mengulang program ini? (yes/no) \n");
    scanf("%s",&pil);
    if(strcmp(pil,"yes")==0){
        system("cls");
        main();
    }else if(strcmp(pil,"no")==0){
    	system("cls");
        printf("\n");
        printf("+===========================================+\n");
        printf("|               Terima  Kasih               |\n");
        printf("+===========================================+\n\n");
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
        exit(1);
    }else{
        printf("Silahkan Masukkan Pilihan Yang Benar!! ");
        repeat();
    }
getch();
}
 
void kubus(){
printf("\t\tMasukkan sisi : ");
inputsisi();
printf("\n");

kubusStruct structs = {.panjang = panjangsisi,
                           .luasPermukaan = 6 * panjangsisi * panjangsisi,
                           .volume = panjangsisi * panjangsisi * panjangsisi};
    
kubusUnion unions[3];
    unions[0].panjang = panjangsisi;
    unions[1].luasPermukaan = 6 * panjangsisi * panjangsisi;
    unions[2].volume = panjangsisi * panjangsisi * panjangsisi;

printf("\t\tPanjang Sisi   : %d\n", structs.panjang);
    printf("\t\tLuas Permukaan : %d\n", structs.luasPermukaan);
    printf("\t\tVolume         : %d\n\n", structs.volume);

printf("\t\tPanjang Sisi   : %d\n", unions[0]);
    printf("\t\tLuas Permukaan : %d\n", unions[1]);
    printf("\t\tVolume Kubus   : %d\n\n", unions[2]);

printf("\t\tUkuran Memory pada Kubus Struct : %d\n\n", sizeof(structs));
printf("\t\tUkuran Memory pada Kubus Union  : %d\n\n", sizeof(unions[0]));
repeat();                       
                           
}
 
void cover(){
    printf("+===========================+\n");
    printf("| PROGRAM PERHITUNGAN KUBUS |\n");
    printf("|   DENGAN STRUCT & UNION   |\n");
    printf("+===========================+\n\n");
    printf("+===========================+\n");
    printf("|         MAIN  MENU        |\n");
    printf("+===========================+\n");
    printf("| 1. Kubus Struct dan Union |\n");
    printf("| 2. Tutup program          |\n");
    printf("+===========================+\n\n");
}
 
int main(){

system("color B");
cover();
    
printf("\n\t\tMasukkan pilihan   : ");
input();
    
    
if(pilihan == 1){
system("cls");
kubus();
}else if(pilihan == 2){
printf("\n");
        printf("+===========================================+\n");
        printf("|               Terima  Kasih               |\n");
        printf("+===========================================+\n\n");
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
        exit(1);
}else{
system("cls");
printf("MASUKKAN ANGKA YANG TEPAT !\n");
main();
}
    return 0;

}
