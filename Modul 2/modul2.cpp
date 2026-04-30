#include <iostream>
using namespace std;

int main () {
    int umur;
    int perlindunganSihir = 3;
    int strategi;
    int a;
    int b;
    int total;
    do{
        cout << "Masukkan umur : ";
        cin >> umur;
        if (umur >= 17){
            cout << "Piala Api menyala! Anda terpilih sebagai Triwizard Champions." << endl;
        }else {
            cout << "Piala Api menolak Anda! Umur terlalu kecil" << endl;

            cout << "--- TUGAS 1: NAGA HUNGARIAN HORNTAIL --- " << endl;
            cout << "Sisa perlindungan sihir : " << perlindunganSihir << endl;

            cout << "Pilih strategi (a : sembunyi, b : panggil sapu) : ";
            cin >> strategi;
            if (strategi == b){
                cout << "Berhasil! Anda mengambil Telur Emas.";
            }else if (strategi == a){
                cout << "Naga menymburkan api! Anda terluka.";
            }else {
                cout << "Pilihan tidak valid! Ulangi pilihan.";
            }
        }
    }while (perlindunganSihir == 0);
    



    

    
        
    
    
// system("pause");
// system ("cls");

    return 0;

}
    
