#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pilihan;
int inputData(int pilih);
void keluar();
void menu();
int main();


void namaKelompok(){
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                            PROGRAM                           | |\n");
        printf("\t\t| |                           STATISTIKA                         | |\n");
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

int validasiInputan(int *select)
{
    char buff[1024];
    char term;
    if (fgets(buff, sizeof(buff), stdin) != NULL && sscanf(buff, "%d %c", select, &term) == 1)
    {
        if (*select <= 0 || *select >= 4)
        {
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |              Masukkan Input dengan Angka 1 - 3               | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n");
            return 0;
        }
        return 1;
    }
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                  Masukkan Input dengan Angka                 | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n");
    return 0;
}

int inputValid(int *var)
{
    char buff[1024];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void validasi(int *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (inputValid(var))
            break;
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                  Masukkan Input dengan Angka                 | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n");
    }
}

void validasiCls(int *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (inputValid(var))
            break;
        system("cls");
        printf("\t\t __________________________________________________________________  \n");
        printf("\t\t   ______________________________________________________________  \n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                    Maaf Input Anda Salah !                   | |\n");
        printf("\t\t| |                                                              | |\n");
        printf("\t\t| |                  Masukkan Input dengan Angka                 | |\n");
        printf("\t\t| |______________________________________________________________| |\n");
        printf("\t\t____________________________________________________________________ \n");
    }
}

int validasiMenu(int *variabel, char *statement)
{
    while (1)
    {
        printf(statement);
        if (validasiInputan(variabel))
            break;
    }
}

void printArray(int *arr, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

float bubbleSort(int *arr, int n)
{
	int i;
    for (i = 0; i < n - 1; i++)
    {
    	int j;
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float hitungMedian(int *arr, int n)
{
    float median = 0;

    if (n % 2 == 0)
    {
        median = (float)(*(arr + ((n - 1) / 2)) + *(arr + (n / 2))) / 2.0;
    }
    else
    {
        median = (float)*(arr + (n / 2));
    }
    return median;
}

float hitungMean(int *arr, int n, int sum)
{
    float mean;
    int i;

    for (i = 0; i < n; i++){
        sum = sum + *(arr + i);
    }
    mean = sum / (float)n;
    return mean;
}

int hitungModus(int *arr, int n, int *barray)
{
    int i, j, t, k = 0, c = 1, nilaiMax = 0, hitung;
    for (i = 0; i < n - 1; i++){
        hitung = 0;
        for (j = i + 1; j < n; j++){
            if (*(arr + i) == *(arr + j))
            {
                hitung++;
            }
        }

        if ((hitung > nilaiMax) && (hitung != 0))
        {
            k = 0;
            nilaiMax = hitung;
            *(barray + k) = *(arr + i);
            k++;
        }
        else if (hitung == nilaiMax)
        {
            *(barray + k) = *(arr + i);
            k++;
        }
    }
    for (i = 0; i < n; i++){
        if (*(arr + i) == *(barray + i))
            c++;
    }
    if (c == n)
        printf("\n\t\tTidak ada modus (banyak data kurang dari 3 / nilai berjumlah satu)!\n");
    else
    {
        printf("\n\n\t\tModusnya adalah\t: ");
        for (i = 0; i < k; i++)
            printf("%.2f  ", (float)*(barray + i));
    }
}

void keluar()
{
    int input;
	printf("\t\t____________________________________________________________________ \n");
	printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                           PROGRAM                            | |\n");
    printf("\t\t| |                          STATISTIKA                          | |\n");
    printf("\t\t| |..............................................................| |\n");
    printf("\t\t| |             PILIH MENU DI BAWAH UNTUK SELANJUTNYA            | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1. Ulang                                                     | |\n");
	printf("\t\t| | 2. Menu                                                      | |\n");
	printf("\t\t| | 3. Keluar                                                    | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    validasiMenu(&input, "\n\t\tPilihan: ");
    if (input == 1)
    {
        system("cls");
        inputData(pilihan);
    }
    else if (input == 2)
    {
        system("cls");
        main();
    }
    else if (input == 3)
    {
        system("cls");
    printf("\t\t __________________________________________________________________  \n");
    printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                                                             | |\n");
    printf("\t\t| |       Terima Kasih Telah Menggunakan Program ini Ya!!!      | |\n");
    printf("\t\t| |_____________________________________________________________| |\n");
    printf("\t\t____________________________________________________________________ \n");
        exit(0);
    }
}

int inputData(int pilih)
{
    int n, sum = 0;
    if (pilih == 1)
    {
        printf("\t\t  _______________________________________________________________  \n");
        printf("\t\t| |                                                             | |\n");
        printf("\t\t| |                            MEDIAN                           | |\n");
        printf("\t\t| |_____________________________________________________________| |\n");
		validasiCls(&n, "\n\t\tMasukkan banyak data yang ingin dihitung: ");
    	int arr[100] = {0};
  		int i;
        printf("\t\t___________________________________________________________________\n");

    	for (i = 0; i < n; i++){
        	printf("\n\t\tData ke-%d  ", i + 1);
        	validasi((arr + i), "\t\t: ");
    	}

    	bubbleSort(arr, n);
    	printf("\n\t\tData yang diinputkan\t: ");
    	printArray(arr, n);
    	int barray[100] = {0};
    	printf("\n\t\t-------------------------------------------------------------------");
        printf("\n\n\t\tMediannya adalah : %.2f\n", hitungMedian(arr, n));
    	printf("\n\t\t-------------------------------------------------------------------\n");
        system("pause");
        system("cls");
        keluar();


    }
    else if (pilih == 2)
    {
        printf("\t\t  _______________________________________________________________  \n");
        printf("\t\t| |                                                             | |\n");
        printf("\t\t| |                             MEAN                            | |\n");
        printf("\t\t| |_____________________________________________________________| |\n");
		validasiCls(&n, "\n\t\tMasukkan banyak data yang ingin dihitung: ");
   	 	int arr[100] = {0};
    	int i;
        printf("\t\t___________________________________________________________________\n");

    	for (i = 0; i < n; i++){
        	printf("\n\t\tData ke-%d  ", i + 1);
        	validasi((arr + i), "\t\t: ");
    	}

    	bubbleSort(arr, n);
    	printf("\n\t\tData yang diinputkan\t: ");
    	printArray(arr, n);
    	int barray[100] = {0};
    	printf("\n\t\t-------------------------------------------------------------------");
        printf("\n\n\t\tMeannya adalah: %.2f\n", hitungMean(arr, n, sum));
    	printf("\n\t\t-------------------------------------------------------------------\n");
        system("pause");
        system("cls");
        keluar();

    }
    else if (pilih == 3)
    {
        printf("\t\t  _______________________________________________________________  \n");
        printf("\t\t| |                                                             | |\n");
        printf("\t\t| |                             MODUS                           | |\n");
        printf("\t\t| |_____________________________________________________________| |\n");
		validasi(&n, "\n\t\tMasukkan banyak data yang ingin dihitung : ");
   	 	int arr[100] = {0};
    	int i;
        printf("\t\t___________________________________________________________________\n");

    	for (i = 0; i < n; i++){
        	printf("\n\t\tData ke-%d  ", i + 1);
        	validasi((arr + i), "\t\t: ");
    	}

    	bubbleSort(arr, n);
    	printf("\n\t\tData yang diinputkan\t: ");
    	printArray(arr, n);
    	int barray[100] = {0};
    	printf("\n\t\t-------------------------------------------------------------------");
		hitungModus(arr, n, barray);
    	printf("\n\t\t-------------------------------------------------------------------\n");
        system("pause");
        system("cls");
        keluar();
    }
}

int main()
{
    namaKelompok();

	printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
    printf("\t\t| |                            PROGRAM                           | |\n");
    printf("\t\t| |                           STATISTIKA                         | |\n");
    printf("\t\t| |..............................................................| |\n");
    printf("\t\t| |                      PILIH MENU DI BAWAH                     | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1. Median                                                    | |\n");
	printf("\t\t| | 2. Mean                                                      | |\n");
	printf("\t\t| | 3. Modus                                                     | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n");
    validasiMenu(&pilihan, "\n\t\tMasukkan Pilihan: ");
    system("cls");
    inputData(pilihan);

    return 0;
}
