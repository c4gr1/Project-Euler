
// 2 milyondan küçük asal sayıların toplamını bulan kod  cevap 142913828922

#include <iostream>
#include <cmath>
using namespace std;


int main(){


    int hedefSayi=2000000;
    long int asalToplam=0;

    int bolunenSayisi=0;


    for(int i=2;i<hedefSayi;i++){
        for(int j=1;j<=sqrt(i);j++){

            if(i%j==0){
                bolunenSayisi++;
                if(j!=sqrt(i))  bolunenSayisi++;
                
                }

        if(bolunenSayisi>=3) break;

        }

        if(bolunenSayisi==2){ 
            
            asalToplam+=i;
            cout << i << " -- "<< asalToplam << endl;
        }
        bolunenSayisi=0;

        

    }

}
