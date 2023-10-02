
//Hedef sayının en büyük asal bölenini bulan program

#include <iostream>

int main(){

    long int hedefSayi=600851475143;

    int enBuyukAsal;

    int bolunenSayisi=0;

    for(int i=1;i<=hedefSayi;i++){	// Tek tek bolundugu sayılara bakıyoruz
        
        for(int j=1;j<i;j++)
        {	// Asal olup olmadığını kontrol edtmek için eğer 2 den azsa bolunensayi sayi asal demektir
            if(i%j==0) bolunenSayisi=bolunenSayisi+1;   
        }

        if(hedefSayi%i==0 && i!=1){	//	Örneğin 12 sayısı 2 ye 3 defa bölünebilir o yuzden i yi tekrar geri alıyoruz 
        
         	if(bolunenSayisi<=2)  enBuyukAsal=i; // Sayı hem asal hem bölünüyorsa aradığımız sayı o
        
            hedefSayi=hedefSayi/i;
         
            i--;
        
     	}
        
        bolunenSayisi=0;

    }

    std::cout << enBuyukAsal << std::endl;

    return 0;

}
