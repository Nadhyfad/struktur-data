// 103112430052_DINA NADHYFA

#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};


int main(){
    Mahasiswa mhs;
    mhs.nama = "Dina";
    mhs.NIM = "103112430052";

    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM : " << mhs.NIM;
}