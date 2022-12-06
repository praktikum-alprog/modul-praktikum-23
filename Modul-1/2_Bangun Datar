#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>



int validasiInt(float *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) !=NULL)
    {
        if(sscanf(buff, "%f %c", var, &cek)==1)
        {
            return*var;
        }
    }
    return 0;
}


void inputInt(float *var, char *nama)
{
    while (1)
    {
        fflush(stdin);
        if (validasiInt(var))
            break;
        printf("\n\t\t Maaf, input Anda salah. Silahkan coba lagi");
        printf("\n\t\t Masukkan input yang sesuai: ");
    }
}


void inputNegatif(float *var, char *nama){
    while (1)
    {
        inputInt(var, nama);
        fflush(stdin);
        if (*var >= 0)
            break;
        printf("\n\t\t Maaf, input Anda salah. Silahkan coba lagi.\n");
        printf("\n\t\t Masukkan input yang sesuai: ");
    }
}


void rangeValidasiInt(float *var, int range1, int range2, char *nama)
{
    while (1)
    {
        inputInt(var, nama);
        fflush(stdin);
        if (*var >= range1 && *var <= range2)
            break;
        system("cls");
        printf("\n\t\t Maaf, input Anda salah. Silahkan coba lagi.\n");
        sleep(2);

}
}

 void menu()
 {
    float pilihanMenu;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                   P R O G R A M  K A L K U L A T O R                 ||\n");
    printf("\t\t||                        B I D A N G   D A T A R                       ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||               Menghitung Keliling dan Luas Bidang Datar              ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                          Daftar Bangun Datar                         ||\n");
    printf("\t\t|| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ||\n");
    printf("\t\t|| [1] Segitiga Sembarang                                               ||\n");
    printf("\t\t|| [2] Belah Ketupat                                                    ||\n");
    printf("\t\t|| [3] Jajar Genjang                                                    ||\n");
    printf("\t\t|| [4] Trapesium                                                        ||\n");
    printf("\t\t|| [5] Lingkaran                                                        ||\n");
    printf("\t\t|| [6] Kredit                                                           ||\n");
    printf("\t\t|| [7] Keluar                                                           ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t Pilih kalkulasi bangun datar yang diinginkan: ");
    rangeValidasiInt(&pilihanMenu, 1, 7, " ");
    system("cls");

    if(pilihanMenu==1){
        system("cls");
        segitigaSembarang();
    }else if(pilihanMenu==2){
        system("cls");
        belahKetupat();
    }else if(pilihanMenu==3){
        system("cls");
        jajarGenjang();
    }else if(pilihanMenu==4){
        system("cls");
        trapesium();
    }else if(pilihanMenu==5){
        system("cls");
        lingkaran();
    }else if(pilihanMenu==6){
        system("cls");
        kredit();
    }else if(pilihanMenu==7){
        system("cls");
        keluar();
    }
    repeat();
 }


void segitigaSembarang()
{
    float ab, bc, ca;
	float setengah_ss;
	float luas_ss;
	float keliling_ss;

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||            - - -Kalkulator Bidang Segitiga Sembarang- - -            ||\n");
    printf("\t\t||______________________________________________________________________||\n");

 printf("\t\t  ______________________________________________________________________  \n");
        printf("\n\t\t Masukkan sisi AB   : ");
        inputNegatif(&ab, " ");
        printf("\t\t Masukkan sisi BC   : ");
        inputNegatif(&bc, " ");
        printf("\t\t Masukkan sisi CA   : ");
        inputNegatif(&ca, " ");
        if(ab+bc<ca || bc+ca<ab || ca+ab<bc)
        {
            printf("\t\t Jumlah sisi tidak sesuai dengan aturan segitiga sembarang.");
            printf("\n\t\t Aturan: jumlah dua sisi harus lebih besar dari sisi satunya.");
            printf("\n\t\t Mohon masukkan sisi yang benar.");
            sleep(2);
            system("cls");
            segitigaSembarang();
        } else {
            printf("\t\t  ______________________________________________________________________  \n");
            setengah_ss = ((ab + bc + ca)/2);
            luas_ss = sqrt(setengah_ss * (setengah_ss - ab) * (setengah_ss - bc) * (setengah_ss - ca));
            keliling_ss = ab + bc + ca;

            printf("\n\t\t Nilai keliling segitiga sembarang: %.2f \n", keliling_ss);
            printf("\n\t\t Nilai luas segitiga sembarang    : %.2f \n", luas_ss);
            printf("\t\t  ______________________________________________________________________  \n");
        }
}


void belahKetupat()
{
    float d1,d2,sisi;
	float luas_bk;
	float keliling_bk;

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                - - -Kalkulator Bidang Belah Ketupat- - -             ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\n\t\t Masukkan panjang diagonal 1   : ");
    inputNegatif(&d1, " ");
    printf("\t\t Masukkan panjang diagonal 2   : ");
    inputNegatif(&d2, " ");
    printf("\t\t Masukkan panjang sisi         : ");
    inputNegatif(&sisi, " ");

    printf("\t\t  ______________________________________________________________________  \n");
    luas_bk = 0.5 * d1 * d2;
    keliling_bk = 4 * sisi;

    printf("\n\t\t Nilai keliling belah ketupat: %.2f \n", keliling_bk);
    printf("\n\t\t Nilai luas belah ketupat    : %.2f \n", luas_bk);
    printf("\t\t  ______________________________________________________________________  \n");
}


void jajarGenjang()
{
    float alas, tinggi, sisipendek, sisipanjang;
	float luas_jg;
	float keliling_jg;

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                - - -Kalkulator Bidang Jajar Genjang- - -             ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\n\t\t Masukkan panjang alas         : ");
    inputNegatif(&alas, " ");
    printf("\t\t Masukkan panjang tinggi       : ");
    inputNegatif(&tinggi, " ");
    printf("\t\t Masukkan panjang sisi pendek  : ");
    inputNegatif(&sisipendek, " ");
    printf("\t\t Masukkan panjang sisi panjang : ");
    inputNegatif(&sisipanjang, " ");

    printf("\t\t  ______________________________________________________________________  \n");
    luas_jg = alas * tinggi;
    keliling_jg = 2 * (sisipendek + sisipanjang);

    printf("\n\t\t Nilai keliling jajar genjang: %.2f \n", keliling_jg);
    printf("\n\t\t Nilai luas jajar genjang    : %.2f \n", luas_jg);
    printf("\t\t  ______________________________________________________________________  \n");
}


 void trapesium()
{
    float pilihan;
    float alasAtas, alasBawah, tinggiT, sisiMiring;

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                  - - -Kalkulator Bidang Trapesium- - -               ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| Pilih perhitungan yang diinginkan:                                   ||\n");
    printf("\t\t|| [1] Keliling Trapesium                                               ||\n");
    printf("\t\t|| [2] Luas Trapesium                                                   ||\n");
    printf("\t\t|| [3] Keliling dan Luas Trapesium                                      ||\n");
    printf("\t\t|| [4] Kembali                                                          ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    rangeValidasiInt(&pilihan, 1, 4, "\n\t\t Pilih perhitungan yang diinginkan: ");

    if(pilihan==1){
        system("cls");
        kelilingT();
    }else if(pilihan==2){
        system("cls");
        luasT();
    }else if(pilihan==3){
        system("cls");
        kllDanLuasT();
    }else if(pilihan==4){
        system("cls");
        menu();
    }
}


void kelilingT(float alasAtas, float alasBawah, float tinggiT, float sisiMiring)
{
    float kllTrapesium;
        printf("\t\t  ______________________________________________________________________  \n");
        printf("\n\t\t Masukkan nilai sisi alas atas trapesium   : ");
        inputNegatif(&alasAtas, " ");
        printf("\t\t Masukkan nilai sisi alas bawah trapesium  : ");
        inputNegatif(&alasBawah, " ");
        printf("\t\t Masukkan nilai sisi tinggi trapesium      : ");
        inputNegatif(&tinggiT, " ");
        printf("\t\t Masukkan nilai sisi miring trapesium      : ");
        inputNegatif(&sisiMiring, " ");
        printf("\t\t  ______________________________________________________________________  \n");

        kllTrapesium = alasAtas + alasBawah + tinggiT + sisiMiring;

        printf("\n\t\t Nilai keliling trapesium: %.2f \n", kllTrapesium);
        printf("\t\t  ______________________________________________________________________  \n");
}


void luasT(float alasAtas, float alasBawah, float tinggiT)
{
    float luasTrapesium;
        printf("\t\t  ______________________________________________________________________  \n");
        printf("\n\t\t Masukkan nilai sisi alas atas trapesium   : ");
        inputNegatif(&alasAtas, " ");
        printf("\t\t Masukkan nilai sisi alas bawah trapesium  : ");
        inputNegatif(&alasBawah, " ");
        printf("\t\t Masukkan nilai sisi tinggi trapesium      : ");
        inputNegatif(&tinggiT, " ");
        printf("\t\t  ______________________________________________________________________  \n");

        luasTrapesium = 0.5 * tinggiT * (alasAtas + alasBawah);

        printf("\n\t\t Nilai luas trapesium: %.2f \n", luasTrapesium);
        printf("\t\t  ______________________________________________________________________  \n");
}

void kllDanLuasT(float alasAtas, float alasBawah, float tinggiT, float sisiMiring)
{
    float kllTrapesium;
    float luasTrapesium;

        printf("\t\t  ______________________________________________________________________  \n");
        printf("\n\t\t Masukkan nilai sisi alas atas trapesium   : ");
        inputNegatif(&alasAtas, " ");
        printf("\t\t Masukkan nilai sisi alas bawah trapesium  : ");
        inputNegatif(&alasBawah, " ");
        printf("\t\t Masukkan nilai sisi tinggi trapesium      : ");
        inputNegatif(&tinggiT, " ");
        printf("\t\t Masukkan nilai sisi miring trapesium      : ");
        inputNegatif(&sisiMiring, " ");
        printf("\t\t  ______________________________________________________________________  \n");

        kllTrapesium = alasAtas + alasBawah + tinggiT + sisiMiring;
        luasTrapesium = 0.5 * tinggiT * (alasAtas + alasBawah);

        printf("\n\t\t Nilai keliling trapesium    : %.2f \n", kllTrapesium);
        printf("\t\t Nilai luas trapesium        : %.2f \n", luasTrapesium);
        printf("\t\t  ______________________________________________________________________  \n");
}


void lingkaran()
{
    float pilihan;

    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                  - - -Kalkulator Bidang Lingkaran- - -               ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| Pilih perhitungan yang diinginkan:                                   ||\n");
    printf("\t\t|| [1] Keliling Lingkaran                                               ||\n");
    printf("\t\t|| [2] Luas Lingkaran                                                   ||\n");
    printf("\t\t|| [3] Keliling dan Luas Lingkaran                                      ||\n");
    printf("\t\t|| [4] Kembali                                                          ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    rangeValidasiInt(&pilihan, 1, 4, "\n\t\t Pilih perhitungan yang diinginkan: ");

    if(pilihan==1){
        kelilingL();
    }else if(pilihan==2){
        system("cls");
        luasL();
    }else if(pilihan==3){
        system("cls");
        kllDanLuasL();
    }else if(pilihan==4){
        system("cls");
        menu();
    }
}

void kelilingL()
{
    float kllLingkaran;
    float radius;
    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t Masukkan nilai radius lingkaran: ");
    inputNegatif(&radius, " ");
    kllLingkaran = 3.14 * 2 * radius;
    printf("\n\t\t Nilai keliling lingkaran: %.2f\n", kllLingkaran);
    printf("\t\t  ______________________________________________________________________  \n");
}

void luasL()
{
    float luasLingkaran;
    float radius;
    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t Masukkan nilai radius lingkaran: ");
    inputNegatif(&radius, " ");
    luasLingkaran = 3.14 * pow(radius,2);
    printf("\n\t\t Nilai luas lingkaran: %.2f\n", luasLingkaran);
    printf("\t\t  ______________________________________________________________________  \n");
}

void kllDanLuasL()
{
    float kllLingkaran, luasLingkaran;
    float radius;
    printf("\t\t  ______________________________________________________________________  \n");
    printf("\t\t Masukkan nilai radius lingkaran: ");
    inputNegatif(&radius, " ");
    luasLingkaran = 3.14 * pow(radius,2);
    kllLingkaran = 3.14 * 2 * radius;
    printf("\n\t\t Nilai luas lingkaran    : %.2f\n", luasLingkaran);
    printf("\t\t Nilai keliling lingkaran  : %.2f\n", kllLingkaran);
    printf("\t\t  ______________________________________________________________________  \n");
}


void repeat()
{
    float pilihanUlang;
    printf("\n\n\t\t Apakah Anda ingin kembali ke menu utama?");
    printf("\n\t\t Ketik [1] untuk 'Ya' dan [2] untuk 'Tidak' :");
    rangeValidasiInt(&pilihanUlang, 1, 2, " ");
    if(pilihanUlang==1){
        system("cls");
        menu();
    }else if(pilihanUlang==2){
        system("cls");
        keluar();
    }
}


void kredit()
{
    int pilihanKredit;
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         K E L O M P O K  2 3                         ||\n");
    printf("\t\t||        P R O G R A M  K A L K U L A S I  B I D A N G  D A T A R      ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                         Nama Anggota Kelompok                        ||\n");
    printf("\t\t|| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ||\n");
    printf("\t\t|| > 2205551005 Gede Made Rapriananta Pande                             ||\n");
    printf("\t\t|| > 2205551003 Ida Bagus Paalakaa RNB                                  ||\n");
    printf("\t\t|| > 2205551069 Ni Kadek Ari Diah Lestari                               ||\n");
    printf("\t\t|| > 2205551072 I Gusti Ayu Krisna Kusuma Dewi                          ||\n");
    printf("\t\t|| > 2205551076 Kadek Yogi Dwi Putra Utama                              ||\n");
    printf("\t\t|| > 2205551079 Anak Agung Indi Kusuma Putra                            ||\n");
    printf("\t\t||______________________________________________________________________||\n");

    system("pause");
    system("cls");
    menu();

}


void keluar()
{
    printf("\t\t  ______________________________________________________________________\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       T E R I M A  K A S I H                         ||\n");
    printf("\t\t||                    Sampai jumpa di lain waktu!                       ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t  ______________________________________________________________________  \n");
    exit(0);
}

int main()
{
    menu();
    return 0;
}
