
//500 den fazla bolunen olan en kucuk ucgensel sayıyı bulan kod

#include <iostream>
#include <cmath>

using namespace std;


int main(){


    int bolunen=0;
    long long int ucgenselSayi=0;
    int i=1;


    while(true){
    //  ucgensel sayıyı hesaplama
        for(int k=1;k<=i;k++)    ucgenselSayi+=k;
    //  bolunen sayısını hesaplama kokunu almazsak eger inanılmaz yavas buluyor bu yontem iyi
        for(int k=1;k<=sqrt(ucgenselSayi);k++){

            if(ucgenselSayi%k==0){ bolunen++;
                if(k!=sqrt(ucgenselSayi)) bolunen++;
            }
        }

        if(bolunen>500){ 
        
        cout << "aranan sayi " << ucgenselSayi << " bolunen sayisi "<< bolunen << endl;
        exit(0);
        }

        else{ 
            if(bolunen>123)
            cout << ucgenselSayi << "-" << bolunen << endl;
        }

        ucgenselSayi=0;
        bolunen=0;
        i++;

    }

    return 0;

}
