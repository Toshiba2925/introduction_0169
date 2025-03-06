#include <iostream>
using namespace std;

int main()
{//begin
    //numeric panjang, lebar, luas
    double panjang;
    double lebar;
    double luas;

    void inputdata() {
        cout << "Masukan panjangnya = ";
        //accept panjang
        cin >> panjang;
        cout << "Masukan lebarnya = ";
        //accept lebar
        cin >> lebar;
    }

    double hitungluas() {
        return panjang * lebar;
    }

    void tampilluas() {
        cout << "Luasnya adalah " << hitungluas();
    }
    
    int main() 
    {//begin

    }
    
    luas = panjang * lebar;

    cout << "Luasnya adalah " << luas;
}