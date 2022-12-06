#include <stdio.h>
#include <stdlib.h>

int validasi() {
    char input[100], notValid;
    int valid;
    scanf("%[^\n]", input);
    getchar();
    if (sscanf(input, "%d%c", &valid, &notValid) == 1) return valid;
    else {
        system("cls");
        printf("\t\t ______________________________________________________________  \n");
        printf("\t\t   __________________________________________________________  \n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                Maaf Input anda salah !                   | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |              Masukan Input Dengan Benar                  | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        validasi();
    
    }
}

int validasiRange() {
    char input[100], notValid;
    int valid;
    scanf("%[^\n]", input);
    getchar();
    if (sscanf(input, "%d%c", &valid, &notValid) == 1 && valid == 1 || valid == 2){
        return valid;      
    }
    else {
        system("cls");
        printf("\t\t ______________________________________________________________  \n");
        printf("\t\t   __________________________________________________________  \n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                Maaf Input anda salah !                   | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |              Masukan Input Dengan Benar                  | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        validasiRange();
    }
}
void namaKelompok(){
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	    printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                      MENGHITUNG ANGSURAN                     | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |..............................................................| |\n");
        printf("\t\t| |                        Mari Kita Coba                        | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t| |             1. Ida Bagus Paalakaa RNB                        | |\n");
        printf("\t\t| |                 2205551003                                   | |\n");
        printf("\t\t| |             2. I Gede Made Rapriananta Pande                 | |\n");
        printf("\t\t| |                 2205551005                                   | |\n");
        printf("\t\t| |             3. Ni Kadek Ari Diah Lestari                     | |\n");
        printf("\t\t| |                 2205551069                                   | |\n");
        printf("\t\t| |             4. I Gusti Ayu Krisna Kusuma Dewi                | |\n");
        printf("\t\t| |                 2205551072                                   | |\n");
        printf("\t\t| |             5. Kadek Yogi Dwi Putra Utama                    | |\n");
        printf("\t\t| |                 2205551076                                   | |\n");
        printf("\t\t| |             6. Anak Agung Indi Kusuma Putra                  | |\n");
        printf("\t\t| |                 2205551079                                   | |\n");
	    printf("\t\t| |______________________________________________________________| |\n");
	    printf("\t\t____________________________________________________________________ \n\n");
        system("pause");
        system("cls");
}

int angsuran(){
    int pokokPinjaman;
    float bungaSetahun;
    int lamaPinjamanBulan;
    int angsuranPokok;
    int bungaBulanY = 0;
    int angsuranPerbulan = 0;
    printf("\t\tMasukan Pokok Pinjaman : ");
    pokokPinjaman = validasi();
    printf("\t\tMasukan Besar Bunga : ");
    bungaSetahun = validasi();
    printf("\t\tMasukan Lama Pinjaman dalam Bulan : ");
    lamaPinjamanBulan = validasi();
    angsuranPokok = pokokPinjaman/lamaPinjamanBulan;
    bungaSetahun = bungaSetahun/100;
    printf("\t\t _____________________________________________________________\n");
    printf("\t\t|        |            |                  |                    |\n");;
    printf("\t\t| Bulan  | Bunga      | Angsuran Pokok   | Angsuran Perbulan  |\n");
    printf("\t\t|________|____________|__________________|____________________|\n");
    for ( int i = 1; i <= lamaPinjamanBulan;i++){
        bungaBulanY = (pokokPinjaman - ((i-1) * angsuranPokok)) * bungaSetahun/12;
        angsuranPerbulan = bungaBulanY + angsuranPokok;
        if( i < 10) printf("\t\t| %d      | Rp. %d   | Rp. %d        | Rp.  %d         |\n", i,bungaBulanY,angsuranPokok,angsuranPerbulan);
        else if( bungaBulanY < 1000) printf("\t\t| %d     | Rp. %d    | Rp. %d        | Rp.  %d         |\n", i,bungaBulanY,angsuranPokok,angsuranPerbulan);
        else printf("\t\t| %d     | Rp. %d   | Rp. %d        | Rp.  %d         |\n", i,bungaBulanY,angsuranPokok,angsuranPerbulan);
        printf("\t\t---------------------------------------------------------------\n");
    }
    system("pause");
}

int main(){
    int read;
    namaKelompok();
    do{
    system("cls");
    printf("\t\t______________________________________________________________\n");
    printf("\t\t   _________________________________________________________  \n");
    printf("\t\t| |                                                         | |\n");
    printf("\t\t| |                    MENGHITUNG ANGSURAN                  | |\n");
    printf("\t\t| |_________________________________________________________| |\n");
    printf("\t\t_______________________________________________________________ \n\n");
    angsuran();
    system("cls");
    printf("\t\t ______________________________________________________________  \n");
    printf("\t\t   __________________________________________________________  \n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |            Apakah anda ingin menghitung lagi?            | |\n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |                   (1 = ya / 2 = tidak)                   | |\n");            
    printf("\t\t| |__________________________________________________________| |\n");
    printf("\t\t________________________________________________________________ \n");       
    read = validasiRange();   
    }while(read == 1);
    system("cls");
    printf("\t\t __________________________________________________________________  \n");
    printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                             | |\n");
	printf("\t\t| |                                                             | |\n");
	printf("\t\t| |    Terima Kasih Telah Menggunakan Program Ini yaaaaaa!!!    | |\n");
    printf("\t\t| |                                                             | |\n");
	printf("\t\t| |                                                             | |\n");
    printf("\t\t| |        \\||||||||||||||||||||   |||||||||||||||||\\           | |\n");
    printf("\t\t| |         \\|||||||||||||||||||   ||||||||||||||||||\\          | |\n");
    printf("\t\t| |          \\||||||||||||||||||   |||||||||||||||||||\\         | |\n");
    printf("\t\t| |                   ||||||||||                                | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||||||||||||/         | |\n");
    printf("\t\t| |                   ||||||||||   ||||||||||||||||||/          | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||||||||||/           | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||                    | |\n");
    printf("\t\t| |                    \\||||||||   |||||||/                     | |\n");
    printf("\t\t| |                     \\|||||||   ||||||/                      | |\n");
    printf("\t\t| |                      \\||||||   |||||/                       | |\n");
    printf("\t\t| |                       \\|||||   ||||/                        | |\n");
    printf("\t\t| |                        \\||||   |||/                         | |\n");
	printf("\t\t| |_____________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
}
