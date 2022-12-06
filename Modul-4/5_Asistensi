#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nama[30];
    float nilai;
} dataMahasiswa;

dataMahasiswa write, read, data[30];


float validasiFloat(float *var)
{
    fflush(stdin);
    char buffer[1024];
    char cek;
    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if(sscanf(buffer, "%f %c", var, &cek) == 1)
        return *var;
    }
    return 0;
}


void validasiInput(float *var)
{
    while (1)
    {
      fflush(stdin);
      if (validasiFloat(var))
        break;
      printf("\t\t Masukan salah. Mohon masukkan bilangan yang sesuai.\n");
      printf("\t\t Masukkan input: ");
    }

}


void validasiRange(float *var, int batas1, int batas2)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (*var >= batas1 && *var <= batas2)
        break;
      printf("\t\t Masukan salah. Mohon masukkan bilangan dengan range yang sesuai.\n");
      printf("\t\t Masukkan input: ");
    }
}


void inputData()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n\n");

    printf("\t\t   Masukkan nama mahasiswa: ");
    fgets(write.nama, 30 , stdin);
    write.nama[strcspn(write.nama, "\n")] = '\0';
    fflush(stdin);

    printf("\t\t   Masukkan nilai mahasiswa: ");
    validasiRange(&write.nilai, 0, 100);
}


void asistenIn()
{
    float pilihan;
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                       INPUT DATA NILAI MAHASISWA                     ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                  Mohon masukkan nama dan nilai mahasiswa.            ||\n");
    printf("\t\t||              Data ini akan tersimpan pada file asistenin.txt         ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n\n");
    while (1)
    {
        inputData();

        FILE *cekInput;
        cekInput = fopen("asistenin.txt", "a+");

        while(!feof(cekInput)) {
            fscanf(cekInput, "%[^\n]\n%f\n", &read.nama, &read.nilai);
            if(strstr(read.nama, write.nama)!= 0){
                printf("\n\t\t   [PERINGATAN]\n");
                printf("\t\t   Tidak dapat memasukkan data yang sama.\n");
                printf("\t\t   Data yang sudah ada:\n");
                printf("\t\t   Nama mahasiswa: %s \n\t\t   Nilai mahasiswa: %.2f\n\n", read.nama, read.nilai);
                printf("\t\t   Mohon masukkan data yang baru.\n");
                printf("\t\t|+ _____________________________________________________________________+|\n");
                printf("\t\t ________________________________________________________________________ \n\n");

                inputData();
            }
        }
        fclose(cekInput);

        FILE *asistenin;
        asistenin = fopen("asistenin.txt", "a");

        fprintf(asistenin, "%s\n%.2f\n", write.nama, write.nilai);
        fclose(asistenin);
        printf("\t\t|+ _____________________________________________________________________+|\n");
        printf("\t\t ________________________________________________________________________ \n\n");
        printf("\t\t   Data telah ditambahkan.\n\n");

        printf("\t\t   Ingin memasukkan data lagi? [1] Ya [2] Tidak\n\t\t   ");
        validasiRange(&pilihan, 1, 2);
        if(pilihan == 2) break;
    }
}


void asistenOut()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                  MENGURUTKAN RANKING NILAI MAHASISWA                 ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||     Di bawah ini adalah data nilai mahasiswa yang sudah diurutkan.   ||\n");
    printf("\t\t||             Data ini akan tersimpan pada file asistenout.txt         ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n\n");

    FILE *asistenin;
    asistenin = fopen("asistenin.txt", "r");

    if(asistenin==NULL){
        printf("\t\t Belum ada masukan data. Silahkan masukkan data terlebih dahulu.\n");
        system("pause");
        system("cls");
        menuAwal();
    } else rewind(asistenin);

    int i = 0;
    while(!feof(asistenin))
    {
        fscanf(asistenin, "%[^\n]\n%f\n", &data[i].nama, &data[i].nilai);
        i++;
    }
    fclose(asistenin);

    int n, j, tempNilai;
    char tempNama[30];
    for (n = 0 ; n < i -1; n++){
        for (j = 0 ; j < i - n - 1 ; j++){
            if(data[j].nilai < data[j+1].nilai){
                tempNilai = data[j].nilai;
                data[j].nilai = data[j+1].nilai;
                data[j+1].nilai = tempNilai;

                strcpy(tempNama, data[n].nama);
				strcpy(data[n].nama, data[j].nama);
				strcpy(data[j].nama, tempNama);
            }
        }
    }

    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t|| NO | Nama Mahasiswa                                         |  Nilai ||\n");
    printf("\t\t|+ -------------------------------------------------------------------- +|\n");

	for (n = 0 ; n < i; n++){
        printf("\t\t|| %-2d.| %-51s    |  %.2f ||\n", n+1, data[n].nama, data[n].nilai);
    }

    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n\n");

    FILE *asistenout;
    asistenout = fopen("asistenout.txt", "w");

    fprintf(asistenout,"\t\t ________________________________________________________________________\n");
    fprintf(asistenout,"\t\t|+ _____________________________________________________________________+|\n");
    fprintf(asistenout,"\t\t||                        DAFTAR RANKING MAHASISWA                      ||\n");
    fprintf(asistenout,"\t\t|+ -------------------------------------------------------------------- +|\n");
    fprintf(asistenout,"\t\t|| NO | Nama Mahasiswa                                         |  Nilai ||\n");
    fprintf(asistenout,"\t\t|+ -------------------------------------------------------------------- +|\n");
	for (n = 0 ; n < i; n++){
        fprintf(asistenout, "\t\t|| %-2d.| %-51s    |  %.2f ||\n", n+1, data[n].nama, data[n].nilai);
	}
    fprintf(asistenout, "\t\t|+ _____________________________________________________________________+|\n");
    fprintf(asistenout, "\t\t ________________________________________________________________________ \n\n");

    fclose(asistenout);

}


void hapusData()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                      MENGHAPUS DATA NILAI MAHASISWA                  ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||               Pilih data nilai mahasiswa yang ingin dihapus          ||\n");
    printf("\t\t||             Aksi ini akan mempengaruhi isi dari asistenin.txt        ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n\n");

    FILE *asistenin;
    asistenin = fopen("asistenin.txt", "r");

    if(asistenin==NULL){
        printf("\t\t Belum ada masukan data. Silahkan masukkan data terlebih dahulu.\n");
        system("pause");
        system("cls");
        menuAwal();
    } else rewind(asistenin);

    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t|| NO | Nama Mahasiswa                                         |  Nilai ||\n");
    printf("\t\t|+ -------------------------------------------------------------------- +|\n");
    int print = 1;
    while(!feof(asistenin))
    {
        fscanf(asistenin, "%[^\n]\n%f\n", &read.nama, &read.nilai);
        printf("\t\t|| %-2d.| %-51s    |  %.2f ||\n", print, read.nama, read.nilai);
        print++;
    }
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n\n");

    printf("\t\t Ketik nama yang ingin dihapus: ");
    fgets(write.nama, 30 , stdin);
    write.nama[strcspn(write.nama, "\n")] = '\0';
    fflush(stdin);

    rewind(asistenin);
    int cari=0;
    while(!feof(asistenin)) {
        fscanf(asistenin, "%[^\n]\n%f\n", &read.nama, &read.nilai);
        if(strstr(read.nama, write.nama)!= 0){
            cari=1;
            break;
        } else cari=0;
    }

    if(cari==0) {
        printf("\t\t Data tidak ditemukan.");
        repeat();
    }


    FILE *tempAsis;
	tempAsis=fopen("tempAsis.txt","w");
	rewind(asistenin);
    while(!feof(asistenin))
    {
        fscanf(asistenin, "%[^\n]\n%f\n", &read.nama, &read.nilai);
        if(strstr(read.nama, write.nama)== 0){
            fprintf(tempAsis,"%s\n%.2f\n", read.nama, read.nilai);
        }
    }
    printf("\t\t Data telah dihapus dari file.\n");
    fclose(asistenin);
    fclose(tempAsis);
    remove("asistenin.txt");
    rename("tempAsis.txt","asistenin.txt");
}

void kredit()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         K E L O M P O K  2 3                         ||\n");
    printf("\t\t||                PROGRAM INPUT DAN RANKING NILAI MAHASISWA             ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t||                         Nama Anggota Kelompok                        ||\n");
    printf("\t\t|| - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  ||\n");
    printf("\t\t|| > 2205551005 | Gede Made Rapriananta Pande                           ||\n");
    printf("\t\t|| > 2205551003 | Ida Bagus Paalakaa RNB                                ||\n");
    printf("\t\t|| > 2205551069 | Ni Kadek Ari Diah Lestari                             ||\n");
    printf("\t\t|| > 2205551072 | I Gusti Ayu Krisna Kusuma Dewi                        ||\n");
    printf("\t\t|| > 2205551076 | Kadek Yogi Dwi Putra Utama                            ||\n");
    printf("\t\t|| > 2205551079 | Anak Agung Indi Kusuma Putra                          ||\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t ________________________________________________________________________ \n");

    system("pause");
    system("cls");
    menuAwal();
}


void repeat()
{
    float pilihanUlang;
    printf("\n\n\t\t Apakah Anda ingin kembali ke menu utama?");
    printf("\n\t\t Ketik [1] untuk 'Ya' dan [2] untuk 'Tidak' :");
    validasiRange(&pilihanUlang, 1, 2);
    if(pilihanUlang==1){
        system("cls");
        menuAwal();
    }else if(pilihanUlang==2){
        system("cls");
        keluar();
    }
}


void keluar()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         T E R I M A  K A S I H                       ||\n");
    printf("\t\t||                      Sampai jumpa di lain waktu!                     ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ _____________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n");
    exit(0);
}


void menuAwal()
{
    float pilihan;
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                 PROGRAM INPUT DAN RANKING NILAI MAHASISWA            ||\n");
    printf("\t\t||               Memasukkan Data Nilai dan Mengurutkan Ranking          ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ -------------------------------------------------------------------- +|\n");
    printf("\t\t||                         Pilih Menu yang Diinginkan                   ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Tambah Data Baru (asistenin.txt)                                 ||\n");
    printf("\t\t|| [2] Hapus Data                                                       ||\n");
    printf("\t\t|| [3] Urutkan Data (asistenout.txt)                                    ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+ -------------------------------------------------------------------- +|\n");
    printf("\t\t||                                Menu Lainnya                          ||\n");
    printf("\t\t|| [4] Kredit                                                           ||\n");
    printf("\t\t|| [5] Keluar dari program                                              ||\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t ________________________________________________________________________\n\n");

    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t Pilih menu yang diinginkan: ");
    validasiRange(&pilihan, 1, 5);

    if(pilihan == 1){
      system("cls");
      asistenIn();
    } else if (pilihan == 2) {
      system("cls");
      hapusData();
    } else if (pilihan == 3){
      system("cls");
      asistenOut();
    } else if (pilihan == 4){
      system("cls");
      kredit();
    } else if (pilihan == 5){
      system("cls");
      keluar();
    }
    repeat();
}


int main(void)
{
    menuAwal();
    return 0;
}
