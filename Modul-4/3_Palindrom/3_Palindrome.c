#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void pesanError();
void mainMenu();
void namaKelompok();
void goodBye();
int validasiString(char string[]);
int ulang();
int validasiRange();
int frequency(char string[], int frequency[]);
int display(char string[], int frequency[]);
bool palindrom(char string[]);
bool hasil;

int main(){
    namaKelompok();
    mainMenu();
}

bool palindrom(char string[]){
    int len = strlen(string)-1;
    int middle = len / 2;
    int salah = 0;
    for(int i = 0; i < strlen(string);i++){
        if( i == middle-1) break;
        else if(string[i] != string[len-1]) salah++;
        len--;
    }
    if( salah > 0) return false;
    else return true;
}

int frequency(char *string, int frequency[]){
    char c;
    int len = strlen(string)-1;
    int whitespace = 0;
    if(len < 2) pesanError();
    for(int i = 0; i < len; i++){
        if((int)string[i] == 32 || (int)string[i] == 10 || (int)string[i] == 9 )whitespace++;
        c = tolower(string[i]);
        if( (int)c >= 97 && (int)c <= 122) frequency[c-97]++;    
        else pesanError();
    }
    if(whitespace > 0) pesanError();
    
}

int display(char *string, int frequency[]){
    int redundansi;
    char a[100];
    int len = strlen(string)-1;
    FILE *f = fopen("kamuskata.txt","ab");
    fprintf(f,"%s(%d) : ",string,len);
    for(int i = 0; i < len; i++){
        a[i] = string[i];
        redundansi = 0;
        for(int j =0;j<i;j++){
            if(a[i] == string[j]) redundansi++;
        }
        if(redundansi == 0) fprintf(f,"%c = %d ",string[i],frequency[string[i]-97]);        
    }
    if (hasil == true) fprintf(f,": Palindrom\n");
    else fprintf(f,": bukan Palindrom\n");  
    fclose(f);
}
void pesanError(){
    system("cls");
    printf("\t\t ______________________________________________________________  \n");
    printf("\t\t   __________________________________________________________  \n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |                  Maaf Input  Anda Salah !                | |\n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |                 Mohon hanya inputkan huruf               | |\n");            
    printf("\t\t| |__________________________________________________________| |\n");
    printf("\t\t________________________________________________________________ \n");
    system("pause");
    mainMenu();
}

void mainMenu(){
        int pilihan;
        int read;
        char string[255] = "";
        do{
        int letterFrequency[26] = {0};
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                       PALINDROM CHECKER                      | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n\n");
        printf("\t\tMasukan kata : ");
        fgets(string,sizeof(string),stdin);
        // scanf("%s",&string);
        hasil = palindrom(string);
        frequency(string,letterFrequency);
        display(string,letterFrequency);
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                       PROGRAM SUKSES!!!                      | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |           untuk hasil bisa di cek pada kamuskata.txt         | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n\n");
        system("pause");
        read = ulang();
        }while(read == 1);        
}

void namaKelompok(){
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	    printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                      ENKRIPSI DAN DEKRIPSI                   | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |..............................................................| |\n");
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

int ulang(){
    system("cls");
    int pilihan;
    printf("\t\t ______________________________________________________________  \n");
    printf("\t\t   __________________________________________________________  \n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |               Apakah anda ingin mencoba lagi?            | |\n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |                   (1 = ya / 2 = tidak)                   | |\n");            
    printf("\t\t| |__________________________________________________________| |\n");
    printf("\t\t________________________________________________________________ \n");
    pilihan = validasiRange();   
    switch (pilihan) {
    case 1:
        system("cls");
        return 1;
        break;
    case 2:
        goodBye();
        break;
    default:
        printf("\t\t ______________________________________________________________  \n");
        printf("\t\t   __________________________________________________________  \n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                   Maaf Iput anda salah !                | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                 Masukan Input Dengan Benar               | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        ulang();
        break;
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
        printf("\t\t| |              Masukan Angka Dengan Benar                  | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        validasiRange();
    }
}

void goodBye(){
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
