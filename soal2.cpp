// 103112430052_ DINA NADHYFA

#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"", "satu", "dua", "tiga", "empat", 
                   "lima", "enam", "tujuh", "delapan", "sembilan"};

string angka(int n) {
    if (n == 0) {
        return "nol";
    }

    if (n == 100) {
        return "seratus";
    }

    if (n >= 10 && n < 20) {
        if (n == 10) return "sepuluh";
        if (n == 11) return "sebelas";
        return satuan[n % 10] + " belas";
    } else if (n >= 20 && n < 100) {
        if (n % 10 == 0) {  
            // misalnya 20, 30, 40, tanpa satuan di belakang
            return satuan[n / 10] + string(" puluh");
        }
        return satuan[n / 10] + " puluh " + satuan[n % 10];
    } else {
        return satuan[n];
    }
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    if (n < 0 || n > 100) {
        cout << "coba lagi!" << endl;
    } else {
        cout << n << " : " << angka(n) << endl;
    }

    return 0;
}