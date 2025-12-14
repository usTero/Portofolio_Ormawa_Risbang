#include <bits/stdc++.h>
using namespace std;

void olah(int a, int b, char c){
    float has = 0;
    switch(c){
        case '+': 
            has = a + b ;
            break;
        case '-':
            has = a - b;
            break;
        case '*':
            has = a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: pembagian dengan nol\n";
                return;
            }
            has = (float)a / b;
            break;
        default:
            cout << "\nOperasi tidak ditemukan\n";
            break;
    }
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        cout << "\nHasil: " << has << '\n';
    }
}

int main(){
    int num1, num2;
    float hasil;
    char operasi;

    cout << "=================================\n"
         << "Kalkulator\n"
         << "=================================\n"
         << "1. Penjumlahan (+)\n"
         << "2. Pengurangan (-)\n"
         << "3. Perkalian (*)\n"
         << "4. Pembagian (/)\n";
        cout << "\nMasukkan  operasi: \n";
        cin >> operasi;
        cout << "Masukkan angka pertama: \n";
        cin >> num1;
        cout << "Masukkan angka kedua: \n";
        cin >> num2;  
        olah(num1,num2,operasi);
    return 0;
}
