
//1 milyonun altında en uzun Collatz serisini oluşturan sayıyı bulan kod

#include <iostream>

using namespace std;


int main(){


    long long int number=2;
    int maxChainNumber=0;
    int chainNumber;
    long long int temp;
    int found=0;

    while(number<1000000){

        chainNumber=0;

        temp=number;

        while(temp!=1){

            if(temp%2==0) temp=temp/2;
            else if(temp%2==1) temp=3*temp+1;

            chainNumber++;
    
        }

        if(chainNumber>maxChainNumber) {maxChainNumber = chainNumber; found=number;}

        number++;
    }

    cout << found << " 's chains number " << maxChainNumber << endl; 

}