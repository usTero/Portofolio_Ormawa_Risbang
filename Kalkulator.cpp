#include <bits/stdc++.h>
using namespace std;

float olah(int a, int b, char c){
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
                return 0;
            }
            has = (float)a / b;
            break;
        default:
            cout << "\nOperasi tidak ditemukan\n";
            break;
    }
    return has;
}

int main(){
    int num1, num2;
    float hasil = 0;
    char operasi;

    cout << "=================================\n"
         << "Kalkulator\n"
         << "=================================\n"
         << "1. Penjumlahan (+)\n"
         << "2. Pengurangan (-)\n"
         << "3. Perkalian (*)\n"
         << "4. Pembagian (/)\n";
        cout << "\nMasukkan angka dan operasi (contoh 3 + 4): \n";
        cin >> num1 >> operasi >> num2;
        
        hasil += olah(num1,num2,operasi);
        cout << hasil;
    return 0;

}
