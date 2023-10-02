
//  ilk 100 sayının toplamının kareleri ile ilk 100 sayının karelerinin toplamının farkını hesaplayan program

#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int toplam=0;
    int kareToplam=0;
    long int birlesikToplam=0;

    for(int i=1;i<=100;i++) 
    {
        kareToplam+=pow(i,2);
        toplam+=i;
    }

    birlesikToplam=pow(toplam,2);

    cout << "istenen cevap " << birlesikToplam-kareToplam << endl ;

    return 0;

}