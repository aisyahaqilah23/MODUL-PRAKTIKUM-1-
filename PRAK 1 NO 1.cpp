#include <iostream>
#include <conio.h>

using namespace std;
int main()
  {
    int i, n, data[50];
    float rata,jum;
    
    cout<<"Masukkan Banyaknya Data = ";
    cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++)
        {
           cout<<"Data ["<<i+1<<"] = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/n;
        
    cout<<endl;
    
    cout<<"Banyaknya Data : "<<n<<endl;
    cout<<"Nilai Rata-rata : "<<rata<<endl;
    cout<<"Nilai Total : "<<jum<<endl;
  getch();
  }
