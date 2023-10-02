
//  1'den 20'ye kadar olan tüm sayılara bölünebilen en küçük sayıyı bulan program

#include <iostream>

using namespace std;


int main(){

    int bolunen;
    int bolenSayisi=0;

    long int hedefSayi = 2*3*5*7*11*13*17*19;
    long int atlamaSayisi = hedefSayi;

    while(bolenSayisi != 20){
 
        for(int i=1;i<=20;i++){

            if(hedefSayi%i==0)  bolenSayisi++;

        }
        
        cout << " hedef sayi anlik" << hedefSayi  << " bolenSayisi " << bolenSayisi << endl; 

        if(bolenSayisi==20){
            cout << "BULUNDU " << hedefSayi << endl;
            break;
        }    

        else{
               
            bolenSayisi=0;
            hedefSayi=hedefSayi+atlamaSayisi;

        }
    }





}