#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MenuAkhir();


void seedArray(int arr[], int n) {
    int i;
    srand(0);
    for (i = 0; i <= n; i++) {
        arr[i] = rand();
    }
}

void dupplicatedArray(int source[], int target[], int n) {
    int i;
    for (i = 0; i <= n; i++)
        target[i] = source[i];
}

void outputArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Angka acak ke-%d \t: %d", i+1, arr[i]);
        printf("\n");
    }
}

void bubbleNoPointer(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap(int * i1, int * i2) {
    int temp = * i1;
    * i1 = * i2;
    * i2 = temp;
}

void bubblePointer(int arr[], int n) {
    int i, a;
    for (i = 0; i < n - 1; i++) {
        int flag = 0;
        for (a = 0; a < n - 1; a++) {
            if (arr[a] > arr[a + 1]) {
                swap( & arr[a], & arr[a + 1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

float count_BubbleNoPointer(int arr[], int n) {
    clock_t start = clock();
    bubbleNoPointer(arr, n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

float count_BubblePointer(int arr[], int n) {
    clock_t start = clock();
    bubblePointer(arr, n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
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

void input_pilihan(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\nPilih Jumlah Data yang BENAR!\n");
        printf("\n");
    }
}

void input_ulang(int *var, char *prompt){
    while (1){
        printf(prompt);
        if(valid_int(var))
            break;
        printf("\nMau mengulang atau tidak?!\n");
    }
}

void ulang(){
int mengulang;

    input_ulang(&mengulang, "\nIngin mengulang program?\n1. YA \n2. TIDAK\n""=> ");
        if (mengulang == 1 ){
            system("cls");
            main();
        }else if(mengulang == 2){
            printf("\n*************** TERIMA KASIH ***************\n");
        }
}

int main(){

int n;
int pilihan;

printf("======================================\n");
printf("||Bubble Sort Pointer and No Pointer||\n");
printf("======================================\n");
printf("||Pilih Total Data yang Diinginkan! ||\n");
printf("--------------------------------------\n");
printf("|1 | 1000                           ||\n");
printf("|2 | 16000                          ||\n");
printf("|3 | 64000                          ||\n");
printf("======================================\n");
input_pilihan(&pilihan, "Masukan Pilihanmu => ");
printf("--------------------------------------");

if (pilihan < 1){
    printf("\n\nMasukan pilihan yang tersedia!\n");
    ulang();

}else if (pilihan == 1){
    n = 1000;
                int arr[n];
  				int arr2[n];
    			seedArray(arr, n);

                printf("\n\n==================================\n");
   				printf("Jumlah %d data sebelum di sort ||\n", n);
   				printf("==================================\n");
    			outputArray(arr, n);
    			dupplicatedArray(arr, arr2, n);
    			float detik1 = count_BubbleNoPointer(arr, n);
    			float detik2 = count_BubblePointer(arr2, n);
    			printf("\n==================================\n");
    			printf("Jumlah %d data sesudah di sort ||\n", n);
    			printf("==================================\n");
    			outputArray(arr, n);
   	 			printf("\n==============================================\n");
    			printf("Waktu Bubble Sort tanpa pointer: %f\n", detik1);
    			printf("\nWaktu Bubble Sort pointer : %f", detik2);
    			printf("\n==============================================\n");
    			if (detik1 < detik2) {
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort tanpa pointer lebih cepat  !!\n");
        			printf("=============================================\n");
    			}
				else if (detik1 > detik2){
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort dengan pointer lebih cepat  !!\n");
                    printf("==============================================\n");
    			}
    			else if (detik1 == detik2){
                    printf("\n==============================================================\n");
                    printf("!!  Kecepatan bubble tanpa pointer dan dengan pointer sama  !!\n");
                    printf("==============================================================\n");
    			}
                ulang();

}else if (pilihan == 2){
    n = 16000;
  				int arr[n];
  				int arr2[n];
    			seedArray(arr, n);

                printf("\n\n==================================\n");
   				printf("Jumlah %d data sebelum di sort ||\n", n);
   				printf("==================================\n");
    			outputArray(arr, n);
    			dupplicatedArray(arr, arr2, n);
    			float detik1 = count_BubbleNoPointer(arr, n);
    			float detik2 = count_BubblePointer(arr2, n);
    			printf("\n==================================\n");
    			printf("Jumlah %d data sesudah di sort ||\n", n);
    			printf("==================================\n");
    			outputArray(arr, n);
   	 			printf("\n==============================================\n");
    			printf("Waktu Bubble Sort tanpa pointer: %f\n", detik1);
    			printf("\nWaktu Bubble Sort pointer : %f", detik2);
    			printf("\n==============================================\n");
    			if (detik1 < detik2) {
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort tanpa pointer lebih cepat  !!\n");
        			printf("=============================================\n");
    			}
				else if (detik1 > detik2){
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort dengan pointer lebih cepat  !!\n");
                    printf("==============================================\n");
    			}
    			else if (detik1 == detik2){
                    printf("\n==============================================================\n");
                    printf("!!  Kecepatan bubble tanpa pointer dan dengan pointer sama  !!\n");
                    printf("==============================================================\n");
    			}
                ulang();

}else if (pilihan == 3){
    n = 64000;
                int arr[n];
  				int arr2[n];
    			seedArray(arr, n);

                printf("\n\n==================================\n");
   				printf("Jumlah %d data sebelum di sort ||\n", n);
   				printf("==================================\n");
    			outputArray(arr, n);
    			dupplicatedArray(arr, arr2, n);
    			float detik1 = count_BubbleNoPointer(arr, n);
    			float detik2 = count_BubblePointer(arr2, n);
    			printf("\n==================================\n");
    			printf("Jumlah %d data sesudah di sort ||\n", n);
    			printf("==================================\n");
    			outputArray(arr, n);
   	 			printf("\n==============================================\n");
    			printf("Waktu Bubble Sort tanpa pointer: %f\n", detik1);
    			printf("\nWaktu Bubble Sort pointer : %f", detik2);
    			printf("\n==============================================\n");
    			if (detik1 < detik2) {
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort tanpa pointer lebih cepat  !!\n");
        			printf("=============================================\n");
    			}
				else if (detik1 > detik2){
                    printf("\n=============================================\n");
        			printf("!!  Bubble sort dengan pointer lebih cepat  !!\n");
                    printf("==============================================\n");
    			}
    			else if (detik1 == detik2){
                    printf("\n==============================================================\n");
                    printf("!!  Kecepatan bubble tanpa pointer dan dengan pointer sama  !!\n");
                    printf("==============================================================\n");
    			}
                ulang();
    }
}
