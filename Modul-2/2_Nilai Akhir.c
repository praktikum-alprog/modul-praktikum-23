#include <stdio.h>
#include <stdlib.h>

void nilaiAkhir(); //prototype function nilaiAkhir

float totalNilaiTugas(float tugas1, float tugas2, float tugas3){
	float nilaiTugas;

	nilaiTugas = ((tugas1+tugas2+tugas3)/3)*20/100;
	return  nilaiTugas;
}

float totalNilaiAkhir(int absensi, float nilaiTugas, float quiz, float uts, float uas){
	float nilaiAkhir;

   	quiz = quiz*15/100;
    uts	= uts*30/100;
    uas	= uas*30/100;
    nilaiAkhir = (absensi*5/15) + nilaiTugas + quiz + uts + uas;
	return nilaiAkhir;
}

void namaKelompok(){
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                          MENGHITUNG                          | |\n");
        printf("\t\t| |                    NILAI AKHIR MATA KULIAH                   | |\n");
        printf("\t\t| |..............................................................| |\n");
        printf("\t\t| |                        MARI KITA COBA                        | |\n");
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
        printf("\t\t");
        system("pause");
        system("cls");
}

int validasiInt(int *var){
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL){
        if (sscanf(buff, "%d %c", var, &cek) == 1){
            return 1;
        }
    }
    return 0;
}

int validasiFloat(float *var){
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL){
        if (sscanf(buff, "%f %c", var, &cek) == 1){
            return 1;
        }
    }
    return 0;
}

void inputMenu(int *var, char *nama){
    while (1){
        printf("%s", nama);
        fflush(stdin);
        if (validasiInt(var))
            break;
        system("cls");
    printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |              Masukan Input dengan Angka 1 atau 2             | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void rangeMenu(int *var, int range1, int range2, char *nama){
    while (1){
        inputMenu(var, nama);
        fflush(stdin);
        if (*var >= range1 && *var <= range2)
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |              Masukan Input dengan Angka 1 atau 2             | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void validasiAbsen(int *var, char *nama){
    while (1){
        printf("%s", nama);
        fflush(stdin);
        if (validasiInt(var))
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda salah !                   | |\n");
    printf("\t\t| |                                                              | |\n");
	printf("\t\t| |              Masukkan Jumlah Kehadiran 0 sampai 15           | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void inputAbsen(int *var, char *nama){
    while (1){
        validasiAbsen(var, nama);
        fflush(stdin);
        if (*var >= 0 && *var <= 15)
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda salah !                   | |\n");
    printf("\t\t| |                                                              | |\n");
	printf("\t\t| |              Masukkan Jumlah Kehadiran 0 sampai 15           | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void validasiNilai(float *var, char *nama){
    while (1){
        printf("%s", nama);
        fflush(stdin);
        if (validasiFloat(var))
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda salah !                   | |\n");
    printf("\t\t| |                                                              | |\n");
	printf("\t\t| |               Masukkan dengan Nilai 0 sampai 100             | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}

void inputNilai(float *var, char *nama){
    while (1){
        validasiNilai(var, nama);
        fflush(stdin);
        if (*var >= 0 && *var <= 100)
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                                                              | |\n");
	printf("\t\t| |                    Maaf Input Anda salah !                   | |\n");
    printf("\t\t| |                                                              | |\n");
	printf("\t\t| |               Masukkan dengan Nilai 0 sampai 100             | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    }
}


int main(){
    namaKelompok();

    int input;

	printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                          MENGHITUNG                          | |\n");
    printf("\t\t| |                    NILAI AKHIR MATA KULIAH                   | |\n");
    printf("\t\t| |..............................................................| |\n");
    printf("\t\t| |                      PILIH MENU DI BAWAH                     | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1. Hitung Nilai Akhir                                        | |\n");
	printf("\t\t| | 2. Tutup Program                                             | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");

        rangeMenu(&input,1,2,"\n\t\t\t\t     Pilih Menu Tersebut: ");
        system("cls");
            if(input == 1){
				nilaiAkhir();
			}
			else if(input == 2){
                printf("\nTerima Kasih Telah Mencoba Program Ini Ya!!!\n");
				exit(0);
			}
    return 0;
}

void nilaiAkhir(){
    int absensi;
    float tugas1;
    float tugas2;
    float tugas3;
    float quiz;
    float uts;
    float uas;
    float nilaiTugas;
    float nilaiAkhir;
    int read;

        do{
            printf("\t\t____________________________________________________________________\n");

            inputAbsen(&absensi, "\n\t\tMasukkan Jumlah Kehadiran: ");

            if(absensi == 0){
                tugas1 = 0;
                tugas2 = 0;
                tugas3 = 0;
                quiz = 0;
                uts = 0;
                uas = 0;
            }else if(absensi >= 1 && absensi < 12){
                uas = 0;

                inputNilai(&tugas1, "\n\t\tMasukkan Nilai Tugas 1: ");

                inputNilai(&tugas2, "\n\t\tMasukkan Nilai Tugas 2: ");

                inputNilai(&tugas3, "\n\t\tMasukkan Nilai Tugas 3: ");

                inputNilai(&quiz, "\n\t\tMasukkan Nilai Quiz: ");

                inputNilai(&uts, "\n\t\tMasukkan Nilai UTS: ");
            }else{
                inputNilai(&tugas1, "\n\t\tMasukkan Nilai Tugas 1: ");

                inputNilai(&tugas2, "\n\t\tMasukkan Nilai Tugas 2: ");

                inputNilai(&tugas3, "\n\t\tMasukkan Nilai Tugas 3: ");

                inputNilai(&quiz, "\n\t\tMasukkan Nilai Quiz: ");

                inputNilai(&uts, "\n\t\tMasukkan Nilai UTS: ");

                inputNilai(&uas, "\n\t\tMasukkan Nilai UAS: ");
            }

            system("cls");

            nilaiTugas = totalNilaiTugas(tugas1, tugas2, tugas3);
            nilaiAkhir = totalNilaiAkhir(absensi, nilaiTugas, quiz, uts, uas);

                printf("\t\t __________________________________________________________________  \n");
                printf("\t\t   ______________________________________________________________  \n");
                printf("\t\t| |                          NILAI AKHIR                         | |\n");
                printf("\t\t| |_______________________________|______________________________| |\n");
	            printf("\t\t      Total Jumlah Kehadiran    : %d/15\n", absensi);
	            printf("\t\t      Total Nilai Tugas         : %.2f\n", nilaiTugas);
	            printf("\t\t      Nilai Quiz                : %.2f\n", quiz);
	            printf("\t\t      Nilai UTS                 : %.2f\n", uts);
	            printf("\t\t      Nilai UAS                 : %.2f\n", uas);
                printf("\t\t| |______________________________________________________________| |\n");
	            printf("\t\t\t               Nilai Akhir : %.2f", nilaiAkhir);

            if(nilaiAkhir >= 0 && nilaiAkhir < 45){
                printf(" (E)");
            }
            else if(nilaiAkhir >= 45 && nilaiAkhir < 50){
                printf(" (D)");
            }
            else if(nilaiAkhir >= 50 && nilaiAkhir < 55){
                printf(" (D+)");
            }
            else if(nilaiAkhir >= 55 && nilaiAkhir < 60){
                printf(" (C)");
            }
            else if(nilaiAkhir >= 60 && nilaiAkhir < 65){
                printf(" (C+)");
            }
            else if(nilaiAkhir >= 65 && nilaiAkhir < 75){
                printf(" (B)");
            }
            else if(nilaiAkhir >= 75 && nilaiAkhir < 80){
                printf(" (B+)");
            }
            else if(nilaiAkhir >= 80 && nilaiAkhir <= 100){
                printf(" (A)");
            }

            printf("\n\n\t\t\t\t Apakah kamu ingin menghitung lagi?\n");
            rangeMenu(&read,1,2,"\t\t\t\t      (1 = iya / 2 = tidak):  ");
            system("cls");

        }while(read == 1);

    printf("\t\t __________________________________________________________________  \n");
    printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |       Terima Kasih Telah Menggunakan Program ini Ya!!!      | |\n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |        \\||||||||||||||||||||   ||||||||||||||||||\\          | |\n");
    printf("\t\t| |         \\|||||||||||||||||||   |||||||||||||||||||\\         | |\n");
    printf("\t\t| |          \\||||||||||||||||||   ||||||||||||||||||||\\        | |\n");
    printf("\t\t| |                   ||||||||||                                | |\n");
    printf("\t\t| |                   ||||||||||   ||||||||||||||||||||/        | |\n");
    printf("\t\t| |                   ||||||||||   |||||||||||||||||||/         | |\n");
    printf("\t\t| |                   ||||||||||   ||||||||||||||||||/          | |\n");
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
