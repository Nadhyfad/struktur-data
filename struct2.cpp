// 103112430052_DINA NADHYFA

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};


int main(){
    Mahasiswa mhs;

    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "NIM : ";
    getline(cin, mhs.NIM);

    // opsi lain
    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.NIM;
}