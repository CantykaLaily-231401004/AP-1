/*Program untuk memasukkan sebuah bilangan bulat, menentukan apakah bilangan 
yang dimasukkan adalah bilangan genap atau ganjil*/

#include <iostream>
using namespace std;

int main(){
    int bil;
    cout<<"Masukkan bilangan bulat: ";
    cin>>bil;

    if (bil % 2 == 0) 
    {
        cout<<bil<<" adalah bilangan genap."<<endl;
    }
    else 
    {
        cout<<bil<<" adalah bilangan ganjil."<<endl;
    } 
}