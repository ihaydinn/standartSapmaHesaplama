import java.util.Scanner;
 
public class StandartSapma{
	
	public static double ortalamaHesapla(int dizi[]){ 
		 double toplam = 0; 
		 	for (int i = 0; i < dizi.length; i++){ 
		 		toplam = toplam + dizi[i]; 					//Formül ile ortalama değerini bulma işlemi 
		 	} 
		 		return (double) (toplam / dizi.length); 	//Ortalama  alındı
		
	} 
		 
	public static double standartSapmaHesapla(int dizi[], double ort) { 
		 double kareToplam = 0; 
		 	for (int i = 0; i < dizi.length; i++){ 
		 		kareToplam = kareToplam + dizi[i] * dizi[i]; 			//Formül ile standart sapma bulme işlemi
		 	} 
		 		return (double) Math.sqrt(kareToplam / dizi.length - ort*ort);	//Sapma değeri alındı
		
	} 
		 
	public static void main(String [] args){ 
			Scanner iha=new Scanner(System.in);  	
			
			int dizi[], boyut;
		 
			System.out.print("Kaç Elemanın Standart Sapmasını Bulmak İstersiniz:  ");
			boyut = iha.nextInt();
			dizi = new int[boyut];					//Kullanıcıdan istenen değerler 
			System.out.println("Sayıları giriniz: ");
				for (int i = 0; i < boyut; i++){
					System.out.print((i+1)+". Sayıyı giriniz: ");
					dizi[i] = iha.nextInt();
				}
		 
			System.out.println();
			System.out.println("Sayıların ortalaması: "+ortalamaHesapla(dizi)); 
			System.out.println();
			System.out.println("Sayıların standart sapması: "+standartSapmaHesapla(dizi, ortalamaHesapla(dizi))); 
	
			//Ortalam ve Standart sapma degerleri ekrana yazdırıldı
			
		}
	}
