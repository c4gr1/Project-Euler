
//  a+b+c=1000 şartını sağlayan pisagor üçgeni kenarlarının çarpımını veren program

#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int a,b,k;
    
    double c;

    double z;

    int sonuc;

    for(int i=1;i<1000;i++){
        for(int j=i+1;j<1000;j++)
        {
        a=i*i; 
        b=j*j;
        k=a+b;
        a=sqrt(a);
        b=sqrt(b);
        c=sqrt(k);

        z=c-static_cast<int>(c);

        if(z==0 && a+b+c==1000){
            
            sonuc=a*b*c; 
            cout << a << " " << b << " " << c << " " <<  sonuc << endl;    
        }

        sonuc=0;

        }
    }
   
}