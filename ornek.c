#include <stdio.h>
#include <math.h>
#include<stdlib.h>
 
int main(void){
	//Değişkenler tanımladı.
   int i,N;
   float sapmaDizisi[5];		//girilen değerleri dizi içinde tutulması için dizi tanımlandı.
   float  toplam = 0, aritmetikOrt, standartSapma;			//toplam, ortalama ve standart sapma değerlerinin tutulması için değişkenler tanımlandı
 
   printf("Kac Elemanin Standart Sapmasi Hesaplansin : ");		//Standart sapması alınacak elemanların girilmesi istendi.
   scanf("%d",&N);
 
   sapmaDizisi[N];		//yukarıda tanımlanan dizi n boyut lu hale getirildi.
 
   for(i=0; i<N; i++){
      printf("%d. Elemani Giriniz : ",i+1);			//döngü içerisinde elemanlar sırayla girilmesi istendi.
      scanf("%f",&sapmaDizisi[i]);
   }
 
   for(i = 0;i<N;i++){
	   toplam += sapmaDizisi[i];		//ortalama bulmak için girilen degerler toplandı.
   }
   aritmetikOrt = toplam/N;		//toplam sonucu girilen sayı adedine bölünerek aritmetik ortalama bulundu.
 
   
   for(toplam = 0.0, i=0; i<N; i++){
       toplam += pow((sapmaDizisi[i]-aritmetikOrt),2);		//standart sapma formulunden yola cıkılarak formuldeki adımlar uygulandı ve sapma degerindeki toplam bulundu.
   }
 
   standartSapma = sqrt(toplam/(N-1));		//sapma degeri bulundu
 
 //  printf("Ortalama       = %fn",aritmetikOrt);		// ve sonuclar ekrana yazdırıldı.
   printf("Standart sapma = %fn",standartSapma);
 
   system("PAUSE");
  return 0;
}
