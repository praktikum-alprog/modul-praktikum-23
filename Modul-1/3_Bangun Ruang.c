#include <stdio.h>
#include <stdlib.h>


float volumeTabung(int r, int t){//fungsi tabung
        float volume;
        volume = 3.14 * r * r * t;
        return volume;
        }
float lpTabung(int r, int t){
        float lp;
        lp = 2 * 3.14 * r * (r + t);
        return lp;
        }

float volumeBola(int r){//fungsi bola
        float volume;
        volume = (4 * 3.14 * r * r * r) / 3;
        return volume;
        }
float lpBola(int r){
        float lp;
        lp = 4 * 3.14 * r * r;
        return lp;
        }

float volumeLimas(int s, int t){//fungsi limas segitiga
        float volume;
        volume = (s * s * t) / 3;
        return volume;
        }
float lpLimas(int s, int sm){
        float lp;
        lp = (s * s) + (2 * s * sm);
        return lp;
        }

float volumePrisma(int a, int ta, int t){//fungsi prisma segitiga
        float volume;
        volume = (a * ta) / 2 * t;
        return volume;
        }
float lpPrisma(int a, int b, int c, int ta, int t){
        float lp;
        lp = (a * ta) + ((a + b + c) * t);
        return lp;
        }

float volumeKerucut(int r, int t){//fungsi kerucut
        float volume;
        volume = (3.14 * r * r * t) / 3;
        return volume;
        }
float lpKerucut(int r, int gp){
        float lp;
        lp = 3.14 * r * (r + gp);
        return lp;
        }


void namaKelompok(){
    printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                          MENGHITUNG                          | |\n");
	printf("\t\t| |                         BANGUN RUANG                         | |\n");
	printf("\t\t| |..............................................................| |\n");
	printf("\t\t| |                        Mari Kita Coba                        | |\n");
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



int periksaInput(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>5 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Baca CAUTION! \n");
		printf("\t\t\t\t masukin yang bener\n");
		printf("\t\t\t\t Masukkan operasi yang akan dilakukan: ");
		return periksaInput();
	}else{
		return list;
	}
}

int opening(){
    
    int input;

	printf("\t\t __________________________________________________________________  \n");
	printf("\t\t   ______________________________________________________________  \n");
	printf("\t\t| |                          MENGHITUNG                          | |\n");
	printf("\t\t| |                         BANGUN RUANG                         | |\n");
	printf("\t\t| |..............................................................| |\n");
	printf("\t\t| |                        Mari Kita Coba                        | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t| | 1.Tabung                                                     | |\n");
	printf("\t\t| | 2.Bola                                                       | |\n");
	printf("\t\t| | 3.Limas Segiempat                                            | |\n");
	printf("\t\t| | 4.Prisma Segitiga                                            | |\n");
	printf("\t\t| | 5.Kerucut                                                    | |\n");
	printf("\t\t| |______________________________________________________________| |\n");
	printf("\t\t____________________________________________________________________ \n\n");

	printf("\t\t\t\t\t   !!!CAUTION!!!\n");
    printf("\t\t\t\t     HARUS INPUT DENGAN ANGKA");
	printf("\n\n\t\t\t\t     Pilih bangun ruang: ");
    input = periksaInput();
    system("cls");
    return input;
    
    
}

int periksa_angka(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Input anda salah!\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan angka pertama: ");
		return periksa_angka();
	}else{
		return list;
	}
}
int periksa_read(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list!=1 && list!=0 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t BACA YANG BENER BANG! \n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan operasi yang akan dilakukan: ");
		return periksa_read();
	}else{
		return list;
	}
}


int main(){
    int read;
    int bangunRuang;

	int jariJariTabung;
	int tinggiTabung;

	int jariJariBola;

	int sisiLimas;
	int tinggiLimas;
	int tinggiSisiMiring;

	int panjangAlasPrisma;
	int panjangAlas2Prisma;
	int panjangAlas3Prisma;
	int tinggiAlasPrisma;
	int tinggiPrisma;

	int jariJariKerucut;
	int tinggiKerucut;
	int garisPelukisKerucut;

    namaKelompok();
    
    do{
        bangunRuang = opening();
        if(bangunRuang==1){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari tabung: ");
        jariJariTabung = periksa_angka();
        printf("\t\tMasukkan tinggi tabung: ");
        tinggiTabung = periksa_angka();
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume tabung : %.2f", volumeTabung(jariJariTabung, tinggiTabung));
        printf("\n\t\tLuas permukaan tabung : %.2f\n", lpTabung(jariJariTabung, tinggiTabung));
        printf("\t\t____________________________________________________________________\n");

        }else if(bangunRuang==2){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari bola: ");
        jariJariBola = periksa_angka();
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume bola : %.2f", volumeBola(jariJariBola));
        printf("\n\t\tLuas permukaan bola : %.2f\n", lpBola(jariJariBola));
        printf("\t\t____________________________________________________________________\n");

        }else if(bangunRuang==3){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan sisi alas limas: ");
        sisiLimas = periksa_angka();
        printf("\t\tMasukkan tinggi limas: ");
        tinggiLimas = periksa_angka();
        printf("\t\tMasukkan tinggi sisi miring limas: ");
        tinggiSisiMiring = periksa_angka();
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume limas : %.2f", volumeLimas(sisiLimas, tinggiLimas));
        printf("\n\t\tLuas permukaan limas : %.2f\n", lpLimas(sisiLimas, tinggiSisiMiring));
        printf("\t\t____________________________________________________________________\n");

        }else if(bangunRuang==4){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan panjang alas prisma: ");
        panjangAlasPrisma = periksa_angka();
        printf("\t\tMasukkan panjang alas prisma lainnya: ");
        panjangAlas2Prisma = periksa_angka();
        printf("\t\tMasukkan panjang alas prisma lainnya: ");
        panjangAlas3Prisma = periksa_angka();
        printf("\t\tMasukkan tinggi alas prisma: ");
        tinggiAlasPrisma = periksa_angka();
        printf("\t\tMasukkan tinggi prisma: ");
        tinggiPrisma = periksa_angka();
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume prismaa : %.2f", volumePrisma(panjangAlasPrisma, tinggiAlasPrisma, tinggiPrisma));
        printf("\n\t\tLuas permukaan prisma : %.2f\n", lpPrisma(panjangAlasPrisma, panjangAlas2Prisma, panjangAlas3Prisma, tinggiAlasPrisma, tinggiPrisma));
        printf("\t\t____________________________________________________________________\n");

        }else if(bangunRuang==5){
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tMasukkan jari-jari kerucut: ");
        jariJariKerucut = periksa_angka();
        printf("\t\tMasukkan tinggi kerucut: ");
        tinggiKerucut = periksa_angka();
        printf("\t\tMasukkan tinggi garis pelukis kerucut: ");
        garisPelukisKerucut = periksa_angka();
        printf("\t\t____________________________________________________________________\n\n");
        printf("\t\tVolume kerucut : %.2f", volumeKerucut(jariJariKerucut, tinggiKerucut));
        printf("\n\t\tLuas permukaan kerucut : %.2f\n", lpKerucut(jariJariKerucut, garisPelukisKerucut));
        printf("\t\t____________________________________________________________________\n");

        }
        printf("\t\t\t\t Apakah kamu ingin menghitung lagi?\n");
		    printf("\t\t\t\t (0 = tidak / 1 = iya): ");
		    read = periksa_read();
		    system("cls");
        
    }while(read == 1);
    printf("\n\n\n\n\n\t\t\t\t Terima Kasih Telah Menggunakan Program Ini yaaaaaa!!!\n\n\n\n ");
return 0;
}

