#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


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


void decimalToBinary(){
    int a;
    int n;
    int hasil[100] = {};
    printf("\n\n\t\t| |          Masukan Nilai Desimal :                  | |\n");
    a = validasi();
    int desimal = a;
    int binary = 0;
    for(int i = 0; a > 0; i++){
        n = a%2;
        a/= 2;
        hasil[i] = n;
    }
    for (int i = 0; i < sizeof(hasil)/sizeof(hasil[0]); i++) {
        // printf("biner awal = %d\n",binary);
        // printf("hasil ke %d = %d\n",i,hasil[i]);
        // if ( i == 2) hasil[i] = (hasil[i] * pow(10,2));
        // else if( i == 4) hasil[i] = (hasil[i] * pow(10,4));
        // else if( i == 7) hasil[i] = (hasil[i] * pow(10,7));
        // else if( i == 10 && hasil[i] == 1) hasil[i] = 1000000000;
        hasil[i] = (hasil[i] * pow(10,i));
        //printf("hasil pangkat %d = %d\n",i,hasil[i]);
        binary += hasil[i];
        // printf("biner + %d = %d\n",hasil[i],binary);
        
    }
    // for (int i = 7 ; i > 0 ; i--){
    //     printf("%d",hasil[i]);
    // }
    system("cls");
    printf("\t\t_______________________________________________________ \n");
    printf("\t\t   _________________________________________________\n\n");
    printf("\t\t            Bilangan Desimal : %d                  \n ",desimal);  
    printf("\t\t            Bilangan Biner   : %d                   ",binary);            
    printf("\n\t\t   _________________________________________________\n");
    printf("\t\t_______________________________________________________ \n");

}

void binarytoDec(){
    int a = 0;
    char biner[100] = {0};
    int hasil = 0;  
    printf("masukan nilai biner : ");
    scanf("%[^\n]", &biner);
    getchar();
    for(int i = 0; i < strlen(biner); i++){
        if(biner[i] != '1' && biner[i] != '0'){
            a++;
            // printf("i = %d, a = %d, biner = %c",i,a,biner[i]);
        }
        else if(biner[i] == '1' ){     
            hasil += (pow(2,strlen(biner)-1-i)); 
        }
    }
    if(a > 0){
        system("cls");
        printf("\t\t ______________________________________________________________  \n");
        printf("\t\t   __________________________________________________________  \n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                Maaf Input anda salah !                   | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |              Masukan Input Dengan Benar                  | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        binarytoDec();
    }
    else {
        printf("\n%d\n", hasil );
        system("cls");
    printf("\t\t_______________________________________________________ \n");
    printf("\t\t   _________________________________________________\n\n");
    printf("\t\t            Bilangan Biner   : %s                  \n ",biner);  
    printf("\t\t            Bilangan Desimal : %d                   ",hasil);        
    printf("\n\t\t   _________________________________________________\n");
    printf("\t\t_______________________________________________________ \n");
    }    
}

void namaKelompok(){
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
	    printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                        KONVERSI BINER                        | |\n");
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
void mainMenu(){
        int pilihan;
        int read;
    do{
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                        KONVERSI BINER                        | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t| |                  |                                           | |\n");
        printf("\t\t| |     1.           |      Desimal ke Biner                     | |\n");
        printf("\t\t| |                  |                                           | |\n");
        printf("\t\t| |     2.           |      Biner ke Desimal                     | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n\n");
        printf("\t\t\t\t\tPilih Konversi : ");
        pilihan = validasiRange();
        switch (pilihan){
            case 1:
            decimalToBinary();
            break;
            case 2:
            binarytoDec();
            break;
            default:
            printf("\t\t ______________________________________________________________  \n");
            printf("\t\t   __________________________________________________________  \n");
            printf("\t\t| |                                                          | |\n");
            printf("\t\t| |                   Maaf Input anda s4lah !                | |\n");
            printf("\t\t| |                                                          | |\n");
            printf("\t\t| |                 Masukan Input Dengan Benar               | |\n");            
            printf("\t\t| |__________________________________________________________| |\n");
            printf("\t\t________________________________________________________________ \n");
            mainMenu();
        }
        system("\npause");
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

int main(){
    namaKelompok();
    mainMenu();
}
