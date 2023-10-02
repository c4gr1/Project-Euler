
// 1000'den küçük 3 ve 5'e bölünen sayıların toplamı

#include <iostream>

int main(){

    int bolunen3=0;
    int bolunen5=0;
    int bolunen15=0;
    int toplam;

    for(int i=1;i<1000;i++){

        if(i%3==0) bolunen3=bolunen3+i;

        if(i%5==0) bolunen5=bolunen5+i;

        if(i%15==0) bolunen15=bolunen15+i;

    }

    toplam=(bolunen3+bolunen5)-bolunen15;

    std::cout << toplam << std::endl;

    return 0;

}