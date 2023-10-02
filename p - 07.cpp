
//  10001. asal sayıyı bulan program

#include <iostream>

using namespace std;

int main(){

    int kacinciAsal=0;
    int sayi=2;
    int kalan=0;

    while(kacinciAsal!=10001)
    {

        for(int i=1;i<=sayi;i++){

            if(sayi%i==0) kalan++;

        }

        if(kalan==2){

            kacinciAsal++;
            cout << kacinciAsal << "th prime number is " << sayi << endl   ;

        } 

        sayi++;

        kalan=0;

    }

}