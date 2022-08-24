#include<iostream>

using namespace std;

int main()
{ int jam,menit,detik,sampai,hasil,js,ms,ds;
    jam = 8 * 3600;
    menit = 52 * 60;
    detik = 45;
    hasil = jam+menit+detik;
    sampai = hasil+5000;
    js = sampai/3600;
    ms = (sampai - js * 3600) /60;
    ds = (sampai - js * 3600) - (ms*60);
   
    cout<<"anda akan sampai pada :"<<endl;
    cout<<"jam " <<js<<endl;
    cout<<ms<<"menit"<<endl;
    cout<<ds<<"detik"<<endl;

  
    return 0;
}