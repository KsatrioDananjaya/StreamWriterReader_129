#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl; //tidak ada throw
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl; //throw bilangan bulat
    }
    catch (...) {
        //jika selain integer maka block ini akan dieksekusi
        cout << "default Pengecualian akan dieksekusi" << endl; //throw bukan bilangan
    }
    return 0;
}
