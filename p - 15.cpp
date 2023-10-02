//20*20 lık yolun sol üst köşesinden sadece sağa ve aşağı gidilme koşuluyla kaç farklı şekilde sağ alt köşesine gidilebileceğini
// bulan program

#include <iostream>

using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // cevap 40!/20!*20! ın sonucunda çıkıyor altta da bunları hesapladık sayıları overflow etmeden

    long long int a,b,c,f,d,e,g,h,x;
    double i,j,k,l;
    a=40*39*38*37*36;
    b=35*34*33*32*31;
    c=30*29*28*27*26;
    d=25*24*23*22*21;
    e=20*19*18*17*16;
    f=15*14*13*12*11;
    g=10*9*8*7*6;
    h=5*4*3*2*1;

    i=(double)a/e;
    j=(double)b/f;
    k=(double)c/g;
    l=(double)d/h;

    x=i*j*k*l;

    cout << x;

}