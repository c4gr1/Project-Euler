
//  3 basamaklı 2 sayının çarpımı sonucu oluşan en büyük palindrome sayıyı bulan program
//  is_palindrome kısmında sayı 5 basamağa düşünce sıkıntı çıkarmasını engelle en küçüğü bulmak istesek hata çıkabilir belki

#include <iostream>
#include <cmath>

using namespace std;

int is_palindrome(int sayi){

    int arr[6];

    int basamakSayisi=0;

    int us;

    do{

        int temp=sayi;

        arr[basamakSayisi]=temp/pow(10,5-basamakSayisi);

        us=pow(10,5-basamakSayisi);

        sayi=(sayi % us);

        basamakSayisi++;


    }while(sayi!=0 || basamakSayisi!=6);

    int same=0;

    for(int i=0;i<3;i++){
        if(arr[i]==arr[basamakSayisi-1-i])
         same++;
    }
         
    if(same==3) return 1;

    else return 0;    

}


int main(){

    int sayi;

    int max=0;

    for(int i=999;i>=100;i--)
        for(int j=999;j>=100;j--){

            sayi=i*j;

            if(is_palindrome(sayi)==1) 
                if(sayi>max)  max=sayi ;
                               
        }

    cout << "The largest palindrome made from product of two 3-digits number is " << max << endl;

    return 0;

}