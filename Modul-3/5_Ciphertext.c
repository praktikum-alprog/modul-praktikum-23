#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void errorPlain(){
    system("cls");
    printf("\t\t ______________________________________________________________  \n");
    printf("\t\t   __________________________________________________________  \n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |            Maaf Input Plaintext Anda Salah !             | |\n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |       Mohon Hanya Inputkan Huruf dalam lowercase         | |\n");            
    printf("\t\t| |__________________________________________________________| |\n");
    printf("\t\t________________________________________________________________ \n");
}
void errorCipher(){
    system("cls");
    printf("\t\t ______________________________________________________________  \n");
    printf("\t\t   __________________________________________________________  \n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |            Maaf Input Ciphertext Anda Salah !            | |\n");
    printf("\t\t| |                                                          | |\n");
    printf("\t\t| |       Mohon Hanya Inputkan Huruf dalam Uppercase         | |\n");            
    printf("\t\t| |__________________________________________________________| |\n");
    printf("\t\t________________________________________________________________ \n");
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

int validasiKey() {
    char input[100], notValid;
    int valid;
    scanf("%[^\n]", input);
    getchar();
    if (sscanf(input, "%d%c", &valid, &notValid) == 1 && valid > 0){
        return valid;      
    }
    else {
        system("cls");
        printf("\t\t ______________________________________________________________  \n");
        printf("\t\t   __________________________________________________________  \n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                  Maaf Input anda salah !                 | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |          Masukan Jumlah Pergeseran Dengan Benar          | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        validasiKey();
    }
}

void plain(char* plainText, int key){
    system("cls");
    int a,salah = 0;
    char hasil[100];
    if((int)plainText[0] == 10) errorPlain();
    for (int i = 0; i < 4; i++ ){
        if((int)plainText[i] == 9) errorPlain();
    }
    for(int i = 0; i < strlen(plainText)-1;i++){
        if ((int)plainText[i] >= 97 && (int)plainText[i] <= 122 || (int)plainText[i] == 32){
            if((int)plainText[i] == 32) a = 32;
            else a = ((int)plainText[i] - 97 + key) % 26 + 65;
            // printf("%c = %d\n",plainText[i],a);
            hasil[i] = (char)(a);
        }
        else{
            salah++;
            break;
        }
        
    }
    if( salah == 0){
    printf("\t\t_______________________________________________________ \n");
    printf("\t\t   _________________________________________________\n\n");
    printf("\t\t\t   Plaintext = ");
    for(int i = 0; i < strlen(plainText)-1;i++){
        printf("%c", plainText[i]);
    }
    printf("\n\t\t\t   Ciphertext = ");
    for(int i = 0; i < strlen(plainText)-1;i++){
        printf("%c", hasil[i]);
    }           
    printf("\n\t\t   _________________________________________________\n");
    printf("\t\t_______________________________________________________ \n\n\n");
    }
    else errorPlain();     
}

void cipher(char* cipherText, int key){
    system("cls");
    int a;
    char hasil[100];
    int salah = 0;
    if((int)cipherText[0] == 10) errorCipher();
    for (int i = 0; i < 4; i++ ){
        if((int)cipherText[i] == 9) errorCipher();
    }
    for(int i = 0; i < strlen(cipherText)-1;i++){
        if ((int)cipherText[i] >= 65 && (int)cipherText[i] <= 90 || (int)cipherText[i] == 32){
            if((int)cipherText[i] == 32) a = 32;
            else a = ((int)cipherText[i] - 65 + key) % 26 + 97;
            //printf("%c = %d ",plainText[i],a);
            hasil[i] = (char)(a);
            // printf("%c", hasil[i]);
        }
        else salah++;
    }
    if( salah == 0){
        printf("\t\t_______________________________________________________ \n");
        printf("\t\t   _________________________________________________\n\n");
        printf("\t\t\t   Ciphertext = ");
        for(int i = 0; i < strlen(cipherText)-1;i++){
            printf("%c", cipherText[i]);
        }
        printf("\n\t\t\t   Plaintext = ");
        for(int i = 0; i < strlen(cipherText)-1;i++){
            printf("%c", hasil[i]);
        }           
        printf("\n\t\t   _________________________________________________\n");
        printf("\t\t_______________________________________________________ \n\n\n");
    }
    else errorCipher();     
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
        printf("\t\t| |                   Maaf Input anda salah !                | |\n");
        printf("\t\t| |                                                          | |\n");
        printf("\t\t| |                 Masukan Input Dengan Benar               | |\n");            
        printf("\t\t| |__________________________________________________________| |\n");
        printf("\t\t________________________________________________________________ \n");
        ulang();
        break;
    }
}
void mainMenu(){
        int pilihan;
        int read;
        int key;
        char plainText[100];
        char ciphertext[100];
        do{
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                       ENKRIPSI DAN DEKRIPSI                  | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t| |                  |                                           | |\n");
        printf("\t\t| |     1.           |      Enkripsi                             | |\n");
        printf("\t\t| |                  |                                           | |\n");
        printf("\t\t| |     2.           |      Dekripsi                             | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n\n");
        printf("\t\t\t\t\tPilih Konversi : ");
        pilihan = validasiRange();
        switch (pilihan){
            case 1:
            system("cls");
            printf("\t\t_______________________________________________________ \n\n");
            printf("\t\tMasukan Plaintext : ");
            fgets(plainText, sizeof(plainText), stdin);
            printf("\t\tMasukan Jumlah Pergeseran : ");
            key = validasiKey();
            plain(plainText, key);
            break;
            case 2:
            system("cls");
                
            printf("\t\tMasukan Ciphertext : ");
            fgets(ciphertext, sizeof(ciphertext), stdin);
            printf("\t\tMasukan Jumlah Pergeseran : ");
            key = validasiKey();
            cipher(ciphertext, key);
            break;
            default:
            printf("\t\t ______________________________________________________________  \n");
            printf("\t\t   __________________________________________________________  \n");
            printf("\t\t| |                                                          | |\n");
            printf("\t\t| |                   Maaf Input anda salah !                | |\n");
            printf("\t\t| |                                                          | |\n");
            printf("\t\t| |                 Masukan Input Dengan Benar               | |\n");            
            printf("\t\t| |__________________________________________________________| |\n");
            printf("\t\t________________________________________________________________ \n");
            mainMenu();
        }
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
int main(){
    namaKelompok();
    mainMenu();
    
}

