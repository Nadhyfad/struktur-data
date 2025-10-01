// 103112430052_ DINA NADHYFA

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output:" << endl;

    for (int i = n; i >= 1; i--) {
        // deret menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // tanda bintang
        cout << "* ";

        // deret menaik
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "*" << endl;

    return 0;
}
