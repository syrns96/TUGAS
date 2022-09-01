#include<iostream>

using namespace std;

int main()
{int A,B,C;
    cout<<"Masukan panjang sisi A = ";
    cin>>A;
    
    cout<<"Masukan panjang sisi B = ";
    cin>>B;
    
    cout<<"Masukan panjang sisi C = ";
    cin>>C;

 if( A == B && A== C && B==C)
 {
 cout <<"Segitiga sama Sisi ";
}
else if (A!=B && B!=C  && A!=C) {
 
cout << "Segitiga Sembarang " ;
}
else {
cout <<"Segitiga Sama Kaki" ;
}

}


