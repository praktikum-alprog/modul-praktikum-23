#include <stdio.h>
#include <math.h>

int fibonacciRekursif(int n){
    if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }else{
    return (fibonacciRekursif (n-1)+ fibonacciRekursif (n-2));
    }
}

void fiboRekursif(){
    int n;
    int i;
    int ulang = 1;

printf("\t\t============================================\n");
 input_int(&n, "\t\tMasukan batas bilangan fibonacci: ");
printf("\t\t============================================\n");
    if (n<0){
        fflush(stdin);
        printf("\t\t!Tidak ada fibonacci dibawah nol! \n");
    }else{
        printf("\t\tUrutan bilangan fibonacci:");
        printf("\n\t\t=> ");
        for (i=0; i<n; i++){
            printf(" %d", fibonacciRekursif(i));
        }
    }printf("\n\t\t============================================\n");
}

int fibonacciIteratif(int n){
    int i;
    int fi;
    int f1 = 0;
    int f2 = 1;

        if (n == 0){
            return 0;
        }else if (n == 1){
            return 1;
        }else{
            for (i=1; i<n; i++){
                fi = f1;
                f1 = f2;
                f2 = fi + f1;
                }
        return f2;
        }
}

void fiboIteratif(){
    int n;
    int i;
    int ulang = 1;

printf("\t\t============================================\n");
input_int(&n, "\t\tMasukan batas bilangan fibonacci: ");
printf("\t\t============================================\n");
    if (n<0){
        fflush(stdin);
        printf("\t\t!Tidak ada fibonacci dibawah nol! \n");
    }else{
        printf("\t\tUrutan bilangan fibonacci""\n\t\t=>");
        for (i=0; i<n; i++){
            printf(" %d", fibonacciIteratif(i));
        }
    }printf("\n\t\t============================================\n");
}

int valid_int(int *var){
    char buff[20];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin)!=NULL){
        if(sscanf(buff, "%d %c", var, &cek)==1){
            return 1;
        }
    }
    return 0;
}

void input_int(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\t\t--------------------------------------------");
        printf("\n\t\t!Masukan angka saja, jangan yang lain!\n");
        printf("\t\t--------------------------------------------\n");
        printf("\n");
    }
}

void input_pilihan(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\n\t\tPilih salah satu metode!\n");
        printf("\n");
    }
}

void input_ulang(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\t\tMau mengulang atau tidak?!");
    }
}

int main(){

int pilihan;

printf("\n");
printf("\t\t============================================\n");
printf("\t\t||           Program Fibonacci            ||\n");
printf("\t\t||              Kelompok 23               ||\n");
printf("\t\t============================================\n");
printf("\t\t||         Pilih Salah Satu Opsi          ||\n");
printf("\t\t============================================\n");
printf("\t\t||        1. Fibonacci Rekursif           ||\n");
printf("\t\t||        2. Fibonacci Iteratif           ||\n");
printf("\t\t============================================\n");
input_pilihan(&pilihan, "\t\tMasukan pilihanmu => ");

    if (pilihan <1){
        printf("\t\tMasukan angka yang tersedia!");
    }
    else if (pilihan == 1){
     fiboRekursif (fibonacciRekursif);

    }else if (pilihan == 2){
    fiboIteratif (fibonacciIteratif);

    }else if (pilihan >2){
    printf("\n\t\tPilihan tidak tersedia\n");
    }
 ulang();
return 0;
}

void ulang(){
int mengulang;

    input_ulang(&mengulang, "\n\t\tIngin mengulang program?\n\t\t1. YA \n\t\t2. Tidak\n""\t\t=> ");
        if (mengulang == 1 ){
            system("cls");
            main();
        }else if(mengulang == 2){
            printf("\t\t*************** Terima Kasih ***************\n");
        }
}
