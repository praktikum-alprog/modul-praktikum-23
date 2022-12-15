#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

float input();
int pertanyaanHapus();
int validasiNim();
int cekNim();
int cekNimEdit();
int prosesReadDataTmp();
int main();
void keluar();
void setDefaultDataTmp();
void prosesTambahData();
void prosesLihatData();
void prosesPerbaharuiData();
void prosesHapusData();
void tambahData();
void lihatData();
void perbaharuiData();
void hapusData();
void menuUtama();

struct mahasiswa{
    int nim;
    char nama[50];
};

float input(int desimal, int min, int batasAkhir){
    char masukkan[100];
    int i = 0;
    int belakang = 0;
    int isiDepan = 0;
    int isiBelakang = 0;
    int status = 0;
    int titik = 0;
    int minus = 0;
    int salah = 0;
    float hasil;

    scanf("%[^\n]", &masukkan);
    fflush(stdin);

    while(masukkan[i] != '\0'){

    if(masukkan[0] == '.'){
        salah = 1; masukkan[0] = '\0';
    }else if(masukkan[i]>='0' && masukkan[i]<='9' || masukkan[i] == '.' || (masukkan[0] == '-' && min == 1)){
        if((masukkan[i] == '.') && (desimal == 1)){
            titik = titik + 1;
                if(titik > 1 || masukkan[i+1] == '\0'){
                    salah = 1;
                    masukkan[i] = '\0';
                }
                status = 1;
        }else if((masukkan[i] == '.') && (desimal == 0)){
            salah = 1;
            masukkan[i] = '\0';
        }

        if(masukkan[0] == '-' && min == 1){
            minus = 1;
        }else if(masukkan[0] == '-' && min == 0){
            salah = 1;
            masukkan[i] = '\0';
        }
        if(masukkan[i]>='0' && masukkan[i]<='9'){
            if(status == 1){
                isiBelakang = (isiBelakang * 10) + (masukkan[i] - 48);
                belakang = belakang + 1;
            }else{
                isiDepan = (isiDepan * 10) + (masukkan[i] - 48);
            }
        }
        i++;
    }else{
        salah = 1;
        masukkan[i] = '\0';
    }
}

    if(titik == 1){
        hasil = (float)isiDepan + (isiBelakang / (pow(10, belakang)));
    }else{
        hasil = isiDepan;
    }

    if(minus == 1 && min == 1){
        hasil = hasil - (hasil * 2);
    }else if(minus == 1 && min == 0){
        salah = 1;
        masukkan[i] = '\0';
    }

    if(salah == 1){
        printf("\t\tInput SALAH! \n\t\tMasukkan angka yang benar : ");
        return input(desimal, min, batasAkhir);
    }else if(min == 0 && hasil == 0){
        printf("\t\tInput TIDAK BOLEH 0! \n\t\tMasukkan nilai yang benar : ");
        return input(desimal, min, batasAkhir);
    }else if(batasAkhir != 0 && hasil > batasAkhir){
        printf("\t\tInput TIDAK BOLEH LEBIH DARI %d! \n\t\tMasukkan nilai yang benar : ", batasAkhir);
        return input(desimal, min, batasAkhir);
    }else{
        return hasil;
    }
}

void pilihanUlang(int ulang){
    char hurufUlang[1];
    char valid, notValid;

    printf("\t\tApakah ingin mengulang proses? (y = iya / b = menu / o = keluar): ");
    scanf("%[^\n]", &hurufUlang);
    if(sscanf(hurufUlang, "%c%c", &valid, &notValid) == 1);

    fflush(stdin);

    if((strcmp(hurufUlang, "y" ) != 0) && (strcmp(hurufUlang, "Y") != 0) && (strcmp(hurufUlang, "b") != 0) && (strcmp(hurufUlang, "B" ) != 0) && (strcmp(hurufUlang, "o" ) != 0) && (strcmp(hurufUlang, "O" ) != 0)){
        printf("\t\tMasukkan anda salah! Masukkan dengan benar!\n");
        pilihanUlang(ulang);
    }else if((strcmp(hurufUlang, "y") == 0) || (strcmp(hurufUlang, "Y") == 0)){
        system("cls");
        if(ulang == 1){
            tambahData();
        }else if(ulang == 2){
            lihatData();
        }else if(ulang == 3){
            perbaharuiData();
        }else if(ulang == 4){
            hapusData();
        }
    }else if((strcmp(hurufUlang, "b") == 0) || (strcmp(hurufUlang, "B" ) == 0)){
        system("cls");
        menuUtama();
    }else{
    keluar();
    }
}

int pertanyaanHapus(){
    char hurufHapus[1];
    int hasil = 0;
    char valid, notValid;

    printf("\t\tApakah anda yakin ingin menghapus data ini? (y = iya / n = tidak): ");
    scanf("%[^\n]", &hurufHapus);
    if(sscanf(hurufHapus, "%c%c", &valid, &notValid) == 1);

    fflush(stdin);

    if((strcmp(hurufHapus, "y") != 0) && (strcmp(hurufHapus, "Y") != 0) && (strcmp(hurufHapus, "n") != 0) && (strcmp(hurufHapus, "N") != 0)){
        printf("\t\tMasukkan anda salah! Masukkan dengan benar!\n\n");
        pertanyaanHapus();
    }else if((strcmp(hurufHapus, "y") == 0) || (strcmp(hurufHapus, "Y") == 0)){
        hasil = 1;
    }else{
        hasil = 0;
    }
return hasil;
}

void setDefaultDataTmp(struct mahasiswa dataTmp[]){
    int i;

    for(i = 0; i < 100; i++){
        dataTmp[i].nim = 0;
    }
}

int validasiNim(){
    char masukkan[100];
    int i = 0;
    int salah = 0;
    int hasil = 0;

    scanf("%[^\n]", &masukkan);
    fflush(stdin);

    while(masukkan[i] != '\0'){
        if(masukkan[i] >= '0' && masukkan[i] <= '9'){
            hasil = (hasil * 10) + (masukkan[i] - 48);
            i++;
        }else{
            salah = 1;
            masukkan[i] = '\0';
        }
    }

    if(salah == 1){
        printf("\t\tFormat NIM salah! \n\t\tMasukkan format yang benar : ");
        return validasiNim();
    }else if(i != 10){
        printf("\t\tNIM harus 10 digit! \n\t\tMasukkan NIM yang benar : ");
        return validasiNim();
    }else{
        return hasil;
    }
}

int validasiNama(char masukkan[]){
    int i = 0;
    int salah = 0;

    while(masukkan[i] != '\0'){
        if((masukkan[i] >= 65 && masukkan[i] <= 90) || (masukkan[i] >= 97 && masukkan[i] <= 122) || masukkan[i] == ' ' || masukkan[i] == '.' || masukkan[i] == ','){
            i++;
        }else{
            salah = 1;
            masukkan[i] = '\0';
        }
    }

    if(salah == 1){
        return 0;
    }else{
        return 1;
    }
}

int cekNim(struct mahasiswa data, struct mahasiswa dataTmp[], int jumlah){
    int i;
    int ditemukan = 0;

    for(i = 0; i < jumlah; i++){
        if(data.nim == dataTmp[i].nim){
            ditemukan = 1;
            break;
        }else{
            ditemukan = 0;
        }
    }
return ditemukan;
}

int cekNimEdit(struct mahasiswa data, struct mahasiswa dataTmp[], int jumlah, int nomorEdit){
    int i;
    int ditemukan = 0;

    for(i = 0; i < jumlah; i++){
        if((data.nim == dataTmp[i].nim) && (dataTmp[i].nim != dataTmp[nomorEdit].nim)){
            ditemukan = 1;
            break;
        }else{
            ditemukan = 0;
        }
    }
return ditemukan;
}

int prosesReadDataTmp(struct mahasiswa dataTmp[]){
    int jumlah = 0;
    FILE *readTmp = fopen("dataMahasiswa.txt","r");

    if(!readTmp){
        jumlah = 1;
    }else{
        while(!feof(readTmp)){
            fscanf(readTmp,"%d#%[^\n]\n", &dataTmp[jumlah].nim, &dataTmp[jumlah].nama);
        jumlah++;
        }
    }
fclose(readTmp);
return jumlah;
}

void prosesTambahData(struct mahasiswa data){
    FILE *tambah = fopen("dataMahasiswa.txt", "a");
        fprintf(tambah,"%lu#%s\n", data.nim, data.nama);
        fclose(tambah);
}

void prosesLihatData(struct mahasiswa dataTmp[], int jumlah){
    int i;

    if(jumlah == 1 && dataTmp[0].nim == 0){
        printf("\t\tTidak ada data mahasiswa\n");
    }else{
        for(i = 0; i < jumlah; i++){
        printf("\t\t %d. %lu - %s\n", i+1, dataTmp[i].nim, dataTmp[i].nama);
        }
    }
}

void prosesPerbaharuiData(struct mahasiswa dataEdit, struct mahasiswa dataTmp[], int jumlah, int nomorEdit){
    int i, j;
    dataTmp[nomorEdit].nim = dataEdit.nim;

    for(i = 0; i < 50; i++){
        dataTmp[nomorEdit].nama[i] = dataEdit.nama[i];
    }

    FILE *perbaharui = fopen("dataMahasiswa.txt","w");
    for(i = 0; i < jumlah; i++){
        fprintf(perbaharui, "%lu#%s\n", dataTmp[i].nim, dataTmp[i].nama);
    }
    fclose(perbaharui);
}

void prosesHapusData(struct mahasiswa dataTmp[], int jumlah, int nomorHapus){
    int i;
    FILE *hapus = fopen("dataMahasiswa.txt","w");

    for(i = 0; i < jumlah; i++){
        if(i == nomorHapus){
            continue;
        }else{
            fprintf(hapus, "%lu#%s\n", dataTmp[i].nim, dataTmp[i].nama);
        }
    }
    fclose(hapus);
}

void tambahData(){
    int statusNim;
    int statusNama;
    struct mahasiswa data;
    struct mahasiswa dataTmp[100];
    setDefaultDataTmp(dataTmp);
    int jumlah = prosesReadDataTmp(dataTmp);

    printf("\t\t  _______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                    TAMBAH DATA MAHASISWA                    | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");;
    printf("\t\t___________________________________________________________________ \n\n");
    printf("\t\tMasukkan NIM: ");
    data.nim = validasiNim();

    statusNim = cekNim(data, dataTmp, jumlah);
    while(statusNim == 1){
        printf("\n\t\tNIM sudah ada dalam DATABASE! \n\t\tMasukkan NIM yang berbeda: ");
        data.nim = validasiNim();
        statusNim = cekNim(data, dataTmp, jumlah);
    }
    printf("\t\tMasukkan Nama : ");
    scanf("%[^\n]", &data.nama);
    fflush(stdin);

    statusNama = validasiNama(data.nama);
    while(statusNama == 0){
        printf("\n\t\tFormat Nama SALAH! \n\t\tMasukkan Nama dengan benar: ");
        scanf("%[^\n]", &data.nama);
        fflush(stdin);
        statusNama = validasiNama(data.nama);
    }
    prosesTambahData(data);

	printf("\n\t\tBerikut ini Input yang sudah diilakukan!                     \n");
    printf("\t\t  _____________________________________________________________   \n");
    printf("\t\t  NIM    : %lu\n", data.nim);
    printf("\t\t  Nama   : %s\n", data.nama);
    printf("\t\t  Data sudah BERHASIL ditambahkan!\n");
    printf("\t\t  _____________________________________________________________\n");;
    printf("\t\t_________________________________________________________________ \n\n");

    pilihanUlang(1);
}

void lihatData(){
    struct mahasiswa dataTmp[100];
    setDefaultDataTmp(dataTmp);
    int jumlah = prosesReadDataTmp(dataTmp);

    printf("\t\t  _______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                     LIHAT DATA MAHASISWA                    | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");;
    printf("\t\t___________________________________________________________________ \n\n");

    prosesLihatData(dataTmp, jumlah);

    if(jumlah != 1 || dataTmp[0].nim != 0){
        printf("\n\t\tJumlah Mahasiswa: %d\n", jumlah);
    }
	printf("\t\t___________________________________________________________________ \n\n");
    pilihanUlang(2);
}

void perbaharuiData(){
    int cekNimEditStatusNim, statusNim, statusNama;
    struct mahasiswa dataEdit;
    struct mahasiswa dataTmp[100];
    setDefaultDataTmp(dataTmp);
    int jumlah = prosesReadDataTmp(dataTmp);
    int nomorEdit = 0;

    printf("\t\t  _______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                  PERBAHARUI DATA MAHASISWA                  | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");;
    printf("\t\t___________________________________________________________________ \n\n");
    printf("\t\tDaftar Data Mahasiswa:\n\n");
    prosesLihatData(dataTmp, jumlah);
    printf("\n");

    if(jumlah != 1 || dataTmp[0].nim != 0){
        printf("\t\tPilih data yang ingin diperbarui! (1 - %d) : ", jumlah);
        nomorEdit = input(0, 0, jumlah);
        nomorEdit = nomorEdit - 1;

        printf("\n\t\t__________________________________________________________________ \n");
        printf("\t\tInput Pembaharuan Data\n");
        printf("\t\tMasukan NIM: ");
        dataEdit.nim = validasiNim();

        statusNim = cekNimEditStatusNim == (dataEdit, dataTmp, jumlah, nomorEdit);
            while(statusNim == 1){
                printf("\t\tNIM masih sama! \n\t\tMasukan NIM yang berbeda: ");
                dataEdit.nim = validasiNim();
                statusNim = cekNimEdit(dataEdit, dataTmp, jumlah, nomorEdit);
            }
        printf("\t\tMasukan Nama : ");
        scanf("%[^\n]", &dataEdit.nama);
        fflush(stdin);
        statusNama = validasiNama(dataEdit.nama);

        while(statusNama == 0){
            printf("\t\tFormat Nama SALAH! \n\t\tMasukan Nama yang benar : ");
            scanf("%[^\n]", &dataEdit.nama);
            fflush(stdin);
            statusNama = validasiNama(dataEdit.nama);
        }
        printf("\n");

    prosesPerbaharuiData(dataEdit, dataTmp, jumlah, nomorEdit);
    printf("\t\tData BERHASIL diperbaharui!\n");

    }else if(jumlah == 1 && dataTmp[0].nim == 0){
        printf("\t\tMasukkan data terlebih dahulu!\n");
    }
    printf("\t\t__________________________________________________________________ \n\n");
    pilihanUlang(3);
}

void hapusData(){
    struct mahasiswa dataTmp[100];
    setDefaultDataTmp(dataTmp);
    int jumlah = prosesReadDataTmp(dataTmp);
    int nomorHapus = 0;
    int yakinHapus = 0;

    printf("\t\t  _______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |                     HAPUS DATA MAHASISWA                    | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");;
    printf("\t\t___________________________________________________________________ \n\n");
    printf("\t\tData Mahasiswa:\n\n");
    prosesLihatData(dataTmp, jumlah);

    printf("\n");
    if(jumlah != 1 || dataTmp[0].nim != 0){
        printf("\t\tPilih data yang ingin dihapus! (1 - %d) : ", jumlah);
        nomorHapus = input(0, 0, jumlah);
        nomorHapus = nomorHapus - 1;
        yakinHapus = pertanyaanHapus();
        printf("\n");
            if(yakinHapus == 1){
                prosesHapusData(dataTmp, jumlah, nomorHapus);
                printf("\t\tData BERHASIL dihapus!\n");
            }else{
                printf("\t\tData TIDAK BERHASIL dihapus!\n");
            }
    }else if(jumlah == 1 && dataTmp[0].nim == 0){
        printf("\t\tMasukkan data terlebih dahulu!\n");
    }
    printf("\t\t___________________________________________________________________ \n\n");
    pilihanUlang(4);
}

int main(){
    system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                           PROGRAM                            | |\n");
        printf("\t\t| |                        DATA MAHASISWA                        | |\n");
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
    menuUtama();

    return 0;
}

void menuUtama(){
    int pilihan;
    printf("\t\t____________________________________________________________________ \n");
	printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                           PROGRAM                            | |\n");
    printf("\t\t| |                        DATA MAHASISWA                        | |\n");
    printf("\t\t| |..............................................................| |\n");
    printf("\t\t| |             PILIH MENU DI BAWAH UNTUK SELANJUTNYA            | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1. Tambah Data Mahasiswa                                     | |\n");
	printf("\t\t| | 2. Lihat Data Mahasiswa                                      | |\n");
	printf("\t\t| | 3. Update Data Mahasiswa                                     | |\n");
    printf("\t\t| | 4. Hapus Data Mahasiswa                                      | |\n");
    printf("\t\t| | 5. Keluar                                                    | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n\n");
    printf("\t\tPilihan : ");
    pilihan = input(0,0,5);

    if(pilihan == 1){
        system("cls");
        tambahData();
    }else if(pilihan == 2){
        system("cls");
        lihatData();
    }else if(pilihan == 3){
        system("cls");
        perbaharuiData();
    }else if(pilihan == 4){
        system("cls");
        hapusData();
    }else if(pilihan == 5){
        keluar();
    }
}

void keluar(){
    system("cls");
    printf("\t\t __________________________________________________________________  \n");
    printf("\t\t  _______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |       Terima Kasih Telah Menggunakan Program ini Ya!!!      | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");
    printf("\t\t___________________________________________________________________ \n");
    system("exit");
}
