#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    //membuka file dalam model menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis File, \ 'q\' untuk keluar" << endl;
}