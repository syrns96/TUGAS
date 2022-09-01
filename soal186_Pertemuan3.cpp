#include<iostream>

using namespace std;

int main()
{int A,B,C;
cout<<" Halo Sirin, "<<endl;
cout<<" Silakan input nilai yang kamu inginkan ... "<<endl;
cout<<"Masukan Nilai Pertama = ";
cin>>A;
cout<<"Masukan Nilai Kedua = ";
cin>>B;
cout<<"Masukan Nilai Ketiga = ";
cin>>C;

 if (A<B && B<C || A>B && B>C)
  {
  cout<<"Nilai tangah adalah "<< B;
  }
 else if (A<C && C<B || A>C && C>B)
  {
  cout<<"Nilai tangah adalah "<< C;
  }
 else
  {
  cout<<"Nilai tangah adalah "<< A ;
  }
}

