#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(void){
 int A[100][100], B[100][100], C[100][100];
 int i, j, k, baris_a, kolom_a, baris_b, kolom_b, baris_c, kolom_c;
 
 // ordo matriks A
 cout<<"Masukkan Ordo Matriks A: "<<endl;
 cout<<"======================="<<endl;
 cout<<"Jumlah Baris: ";
 cin>>baris_a;
 cout<<"Jumlah Kolom: ";
 cin>>kolom_a;
 
 //masukan matriks A
 cout<<"Input Matriks A: "<<endl;
 cout<<"========================="<<endl;
 for(i=0;i<baris_a;i++)
 {
  for(j=0;j<kolom_a;j++)
  {
   cout<<"\nElemen ke "<<(i+1)<<","<<(j+1)<<": ";
   cin>>A[i][j];
  }
 }
 
 //cetak matriks A
 cout<<"\nMatriks A: \n";
 for(i=0;i<baris_a;i++)
 {
  for(j=0;j<kolom_a;j++)
  {
   cout<<setw(4)<<A[i][j];
  }
  cout<<endl;
 }
 

 // ordo matriks B
 cout<<"Masukkan Ordo Matriks B: "<<endl;
 cout<<"======================="<<endl;
 cout<<"Jumlah Baris: ";
 cin>>baris_b;
 cout<<"Jumlah Kolom: ";
 cin>>kolom_b;
 
 //masukan matriks B
 cout<<"Input Matriks B: "<<endl;
 cout<<"========================="<<endl;
 for(i=0;i<baris_b;i++)
 {
  for(j=0;j<kolom_b;j++)
  {
   cout<<"\nElemen ke "<<(i+1)<<","<<(j+1)<<": ";
   cin>>B[i][j];
  }
 }
 
 //cetak matriks B
 cout<<"\nMatriks B : \n";
 for(i=0;i<baris_b;i++)
 {
  for(j=0;j<kolom_b;j++)
  {
   cout<<setw(4)<<B[i][j];
  }
  cout<<endl;
 }
 
 //operasi perkalian
 for(i=0;i<baris_a;i++)
 {
  for(j=0;j<kolom_b;j++)
  {
   C[i][j]=0;
   for(k=0;k<baris_b;k++)
   {
    C[i][j]+=A[i][k]*B[k][j];
   }
  }
 }
 
 //menampilkan hasil
 cout<<"\nHasil Perkalian Matriks A dan B : \n";
 cout<<"==================\n";
 for(i=0;i<baris_a;i++)
 {
  for(j=0;j<kolom_b;j++)
  {
   cout<<setw(4)<<C[i][j];
  }
  cout<<endl;
 }
 
return 0;
}
