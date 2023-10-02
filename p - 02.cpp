
//Fibonacci serisindeki 4 milyondan küçük çift sayıların toplamlarını bulan program

#include <iostream>

int main(){

    int fibonacci_A=0;

    int fibonacci_B=1;

    int fibonacci_X;

    int ciftSayiToplam=0;

   do{

        fibonacci_X=fibonacci_A+fibonacci_B;

        if(fibonacci_X%2==0 && fibonacci_X<4000000) ciftSayiToplam=ciftSayiToplam+fibonacci_X;

        fibonacci_A=fibonacci_B;
        fibonacci_B=fibonacci_X;


    }while(fibonacci_X<4000000);

    std::cout << ciftSayiToplam << std::endl;

    return 0;

}