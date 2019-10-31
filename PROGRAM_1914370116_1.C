#include <stdio.h>
int main(void)
{
    char NAMA[30],NPM[10],pil;
    printf("\t Menghitung Nilai mahasiswa\n\n");
    printf("jika Nilai uts >=70 (Lulus)\n");
    printf("jika Nilai uts >=60 (Lulus)\n\n");
    printf("contoh :\n") ;
    printf("NPM = 1914370116\n");
    printf ("NAMA Mahasiswa = Daratika Pratiwi\n\n");

    printf("Masukkan Nilai Ujian Tengah Semester = 80\n");
    printf ("Masukkan Nilai Ujian Akhir semester = 70\n");
    printf("nilai akhir= 74\n");
    printf("status Kelulusaan: Lulus\n\n");
    printf("--------------------------------------------------\n\n");

    int uts, akhir, uas, tugas, Nilai;

    printf("NPM =");
    scanf ("%s", & NPM);
    printf ("NAMA Mahasiswa =  ");
    scanf ("%s", & NAMA);
    printf("Masukkan Nilai Ujian Tengah Semester = ");
    scanf ("%d", & uts );
    printf ("Masukkan Nilai Ujian Akhir semester = ");
    scanf("%d",&uas);
    akhir=(0.4*uts)+(0.6*uas);
    printf("nilai akhir=%d\n",akhir);
    printf("status Kelulusaan:");

    if(uts >=70){
    printf("Lulus\n");
    }

    else{
   printf("tidak Lulus\n");
   }

    return 0;
}



