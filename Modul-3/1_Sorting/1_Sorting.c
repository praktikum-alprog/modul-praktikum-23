#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int validasiInt(int *var)
{
    fflush(stdin);
    char buffer[1024];
    char cek;
    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if(sscanf(buffer, "%d %c", var, &cek) == 1)
        return *var;
    }
    return 0;
}


void validasiInput(int *var)
{
    while (1)
    {
      fflush(stdin);
      if (validasiInt(var))
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }

}


void validasiNegatif(int *var)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (*var > 0)
        break;
      printf("\t\t Masukan salah. Mohon masukkan angka positif.\n");
      printf("\t\t Masukkan input: ");
    }
}


void validasiMenu(int *var, int batas1, int batas2)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (batas1 <= *var && *var <= batas2)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void bilAcak(int array[], int n)
{
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < n; i++) array[i] = rand();
}


void printAngka(int array[], int n)
{
    for (int i=0; i<n; i++) printf("\t\t   Angka dengan urutan ke-%d = %d\n", i+1, array[i]);
}


void copy(int source[], int target[], int n)
{
    for(int i=0; i<n; i++) target[i]=source[i];
}


void insertionSort(int array[], int n) {
    int i, j, key;

	for (i = 1; i < n; i++) {
	    key = array[i];
	    j = i - 1;

	    while (j >= 0 && array[j] > key) {
	        array[j + 1] = array[j];
	        j--;
	    }
	    array[j + 1] = key;
	}
}



void bubbleSort(int array[], int n)
{
    int i, j, temp;
    for (i = 0 ; i < n-1; i++){
        for (j = 0 ; j < n - i-1;j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


int partition(int array[],int low, int high)
{
    int i, pivot, j, temp;
    pivot = array[high];
	i = (low-1);

	for (j = low; j <= high-1; j++){
        if(array[j]<pivot){
            i++;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    temp=array[i+1];
    array[i+1]=array[high];
    array[high]=temp;
	return (i+1);
}


void quickSort(int array[], int low, int  high)
{
    int pi = partition(array, low, high);
  	if(low < high)
    {
        pi = partition(array, low, high);
        quickSort(array, low, pi-1);
        quickSort(array, pi+1, high);
    }
}


void sorting()
{
    int pilihan, n;
    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||           A L G O R I T M A  S O R T I N G           ||\n");
    printf("\t\t||            Metode Pengurutan Bilangan Acak           ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||           Mohon pilih banyak bilangan acak           ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|| [1] 1000 bilangan                                    ||\n");
    printf("\t\t|| [2] 16000 bilangan                                   ||\n");
    printf("\t\t|| [3] 64000 bilangan                                   ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||                      Menu Lainnya                    ||\n");
    printf("\t\t|| [4] Kembali ke menu awal                             ||\n");
    printf("\t\t|| [5] Keluar dari program                              ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n\n");

    printf("\t\t ________________________________________________________\n");
    printf("\t\t Pilih menu/bilangan yang diinginkan: ");
    validasiMenu(&pilihan, 1, 5);
    if(pilihan == 1)
    {
      n = 1000;
    }
    else if (pilihan == 2)
    {
      n = 16000;
    }
    else if (pilihan == 3)
    {
      n = 64000;
    }
    else if (pilihan == 4)
    {
      system("cls");
      menuAwal();
    }
    else if (pilihan == 5)
    {
      system("cls");
      keluar();
    }

    int arrayI[n];
    int arrayB[n];
    int arrayQ[n];

    bilAcak(arrayI, n);
    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t   Elemen pada array[%d] sebelum diurutkan:\n", n);
    printAngka(arrayI, n);
    copy(arrayI, arrayB, n);
    copy(arrayI, arrayQ, n);
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n");

    clock_t mulai, selesai;
    double waktuI, waktuB, waktuQ = 0;

	mulai = clock();
	insertionSort(arrayI, n);
	selesai = clock();
	waktuI  = (double)((selesai - mulai)/(CLOCKS_PER_SEC));

	mulai = clock();
	bubbleSort(arrayB, n);
	selesai = clock();
	waktuB  =  (double)((selesai - mulai)/(CLOCKS_PER_SEC));

	mulai = clock();
	quickSort(arrayQ, 0, n );
	selesai = clock();
	waktuQ  = (double)((selesai - mulai)/(CLOCKS_PER_SEC));


    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t   Elemen pada array[%d] setelah diurutkan:\n", n);
    printAngka(arrayQ, n);
    printf("\t\t  ======================================================  \n");
    printf("\t\t   Waktu yang diperlukan untuk mengurutkan data:\n", n);
    printf("\t\t   > Insertion sort : %lf detik\n", waktuI);
    printf("\t\t   > Bubble sort    : %lf detik\n", waktuB);
    printf("\t\t   > Quick sort     : %lf detik\n", waktuQ);

    if (waktuI == waktuB)
    printf("\n\t\t   Waktu Insertion Sort sama dengan Bubble Sort");
    if(waktuI == waktuQ)
    printf("\n\t\t   Waktu Insertion Sort sama dengan Quick Sort");
    if(waktuB == waktuQ)
    printf("\n\t\t   Waktu Bubble Sort sama dengan Quick Sort");
    if(waktuI > waktuB && waktuI > waktuQ)
    printf("\n\t\t   Insertion Sort memakan waktu paling banyak");
    if(waktuB > waktuI && waktuB > waktuQ)
    printf("\n\t\t   Bubble Sort memakan waktu paling banyak");
    if(waktuQ > waktuI && waktuQ > waktuB)
    printf("\n\t\t   Quick Sort memakan waktu paling banyak");
    if(waktuI < waktuB && waktuI < waktuQ)
    {
       printf("\n\t\t   Insertion Sort memakan waktu paling sedikit");
       if(waktuB<waktuQ)
       printf("\n\t\t   Bubble sort lebih cepat dari Quick Sort");
       else if(waktuQ<waktuB)
       printf("\n\t\t   Quick sort lebih cepat dari Bubble Sort");
    }
    if(waktuB < waktuI && waktuB < waktuQ)
    {
       printf("\n\t\t   Bubble Sort memakan waktu paling sedikit");
       if(waktuI<waktuQ)
       printf("\n\t\t   Insertion sort lebih cepat dari Quick Sort");
       else if(waktuQ<waktuI)
       printf("\n\t\t   Quick sort lebih cepat dari Insertion Sort");
    }
    if(waktuQ < waktuI && waktuQ < waktuB)
    {
       printf("\n\t\t   Quick Sort memakan waktu paling sedikit");
       if(waktuI<waktuB)
       printf("\n\t\t   Insertion sort lebih cepat dari Bubble Sort");
       else if(waktuB<waktuI)
       printf("\n\t\t   Bubble sort lebih cepat dari Insertion Sort");
    }
    printf("\n\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n");
}


void sequentialSearch(int array[], int n, int x)
{
    int i, cocok;

    for( i = 0; i<n; i++){
        if(array[i]==x){
            printf("\t\t   Angka %d ditemukan pada urutan ke-%d\n", x, i+1);
            cocok++;
        }
    }
    if(cocok==0) printf("\t\t Angka tidak ditemukan.\n");
}


void binarySearch(int array[], int kiri, int kanan, int x)
{
    int bscocok;
    int urutanAngka[bscocok];
    while(kiri<=kanan)
    {
        int mid = kiri + (kanan-kiri)/2;
        if(array[mid]==x){
            urutanAngka[bscocok] = mid;
            printf("\t\t   Angka %d ditemukan pada urutan ke-%d\n", x, urutanAngka[bscocok]+1);
            bscocok++;
                for( int kiri1=mid+1;kiri1<kanan+1 && array[kiri1]==x; kiri1++)
                {
                    urutanAngka[bscocok] = kiri1;
                    printf("\t\t   Angka %d ditemukan pada urutan ke-%d\n", x, urutanAngka[bscocok]+1);
                    bscocok++;
                }
                for (int kanan1 = mid - 1; kanan1 >= 0 && array[kanan1] == x; kanan1--)
                {
                    urutanAngka[bscocok] = kanan1;
                    printf("\t\t   Angka %d ditemukan pada urutan ke-%d\n", x, urutanAngka[bscocok]+1);
                    bscocok++;
                }
            break;
            }
        else if(array[mid]>x) {kanan = mid -1;}
        else {bscocok=0; kiri = mid +1;}
        }
    if(bscocok==0) printf("\t\t Angka tidak ditemukan.\n");
}



void searching()
{
    int pilihan, n, cari;
    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||         A L G O R I T M A  S E A R C H I N G         ||\n");
    printf("\t\t||            Metode Pencarian Bilangan Acak            ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||           Mohon pilih banyak bilangan acak           ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|| [1] 1000 bilangan                                    ||\n");
    printf("\t\t|| [2] 16000 bilangan                                   ||\n");
    printf("\t\t|| [3] 64000 bilangan                                   ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||                      Menu Lainnya                    ||\n");
    printf("\t\t|| [4] Kembali ke menu                                  ||\n");
    printf("\t\t|| [5] Keluar dari program                              ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n\n");

    printf("\t\t ________________________________________________________\n");
    printf("\t\t Pilih menu/bilangan yang diinginkan: ");
    validasiMenu(&pilihan, 1, 5);
    if(pilihan == 1)
    {
      n = 1000;
    }
    else if (pilihan == 2)
    {
      n = 16000;
    }
    else if (pilihan == 3)
    {
      n = 64000;
    }
    else if (pilihan == 4)
    {
      system("cls");
      menuAwal();
    }
    else if (pilihan == 5)
    {
      system("cls");
      keluar();
    }

    clock_t mulai, selesai;
    double waktuS, waktuBs = 0;


    int array[n];
    bilAcak(array, n);
    printAngka(array, n);
    insertionSort(array, n);
    printf("\n\t\t   Angka yang sudah diurutkan:\n", n);
    printAngka(array, n);

    printf("\n\t\t Masukkan angka yang diinginkan: ");
    validasiNegatif(&cari);

    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t   Pencarian dengan Sequential Search:\n", n);
    mulai = clock();
    sequentialSearch(array, n, cari);
    selesai = clock();
    waktuS = (double)(selesai-mulai)/CLOCKS_PER_SEC;

    printf("\n\t\t   Pencarian dengan Binary Search:\n", n);
    mulai = clock();
    binarySearch(array, 0, n-1, cari);
    selesai = clock();
    waktuBs = (double)(selesai-mulai)/CLOCKS_PER_SEC;

    printf("\t\t  ======================================================  \n");
    printf("\t\t   Waktu yang diperlukan untuk mengurutkan data:\n", n);
    printf("\t\t   > Sequential Search : %lf detik\n", waktuS);
    printf("\t\t   > Binary Search     : %lf detik\n", waktuBs);
    if (waktuS == waktuBs)
    printf("\n\t\t   Waktu Sequential Search sama dengan Binary Search");
    else if(waktuS < waktuBs)
    printf("\n\t\t   Waktu Sequential Search lebih cepat dari Binary Search");
    else if(waktuS > waktuBs)
    printf("\n\t\t   Waktu Binary Search lebih cepat dari Sequential Search");
}


void repeat()
{
    int pilihanUlang;
    printf("\n\n\t\t Apakah Anda ingin kembali ke menu utama?");
    printf("\n\t\t Ketik [1] untuk 'Ya' dan [2] untuk 'Tidak' :");
    validasiMenu(&pilihanUlang, 1, 2);
    if(pilihanUlang==1){
        system("cls");
        menuAwal();
    }else if(pilihanUlang==2){
        system("cls");
        keluar();
    }
}


void kredit()
{
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________________________ +|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                         K E L O M P O K  2 3                         ||\n");
    printf("\t\t||                 PROGRAM METODE SORTING DAN SEARCHING                 ||\n");
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
    int pilihan;
    printf("\t\t ________________________________________________________\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t||                 SORTING DAN SEARCHING                ||\n");
    printf("\t\t||          Algoritma Metode Sorting dan Searching      ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||              Pilih Metode yang Diinginkan            ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|| [1] Metode Sorting                                   ||\n");
    printf("\t\t|| [2] Metode Searching                                 ||\n");
    printf("\t\t||                                                      ||\n");
    printf("\t\t|+ ---------------------------------------------------- +|\n");
    printf("\t\t||                      Menu Lainnya                    ||\n");
    printf("\t\t|| [3] Kredit                                           ||\n");
    printf("\t\t|| [4] Keluar dari program                              ||\n");
    printf("\t\t|+ ____________________________________________________ +|\n");
    printf("\t\t ________________________________________________________\n\n");

    printf("\t\t ________________________________________________________\n");
    printf("\t\t Pilih menu yang diinginkan: ");
    validasiMenu(&pilihan, 1, 4);

    if(pilihan == 1)
    {
      system("cls");
      sorting();
    }
    else if (pilihan == 2)
    {
      system("cls");
      searching();
    }
    else if (pilihan == 3)
    {
      system("cls");
      kredit();
    }
    else if (pilihan == 4)
    {
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
