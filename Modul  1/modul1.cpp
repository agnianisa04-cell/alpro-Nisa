#include <iostream>
using namespace std;

int main () {
    int beras;
    int telur;
    int minyak;
    int uang;
    cout << "\n================================" << endl;
    cout << "     TOKO SEMBAKO JAYA ABADI          " << endl;
    cout << "================================" << endl;
    //***input harga***
    cout << "[Bina]: Than, masukin harga barangnya Rendy di program ini!" << endl;
    cout << "harga beras (IDR)  : ";
    cin >> beras;

    cout << "harga telur (IDR)  : ";
    cin >> telur;

    cout << "harga minyak (IDR) : ";
    cin >> minyak;
    cout << "---------------------------------" << endl;
    //***total belanja dan jumlah uang Rendy***
    int totalBelanja_mentah = beras + telur + minyak;//total belanja sebelum kena pajak
    int totalPajak = totalBelanja_mentah * 25/100; //mencari pajaknya
    int totalBelanja_pajak = totalPajak + totalBelanja_mentah; //total belanja ditambah pajak

    cout << "total belanja (+PPN 25%) : " << totalBelanja_pajak << endl;

    cout << "[Fathan]: Ren, totalnya segitu. Uang lu berapa?" << endl;
    cout << "[Rendy]: Hmmmmm, pajaknya gede juga ya. Nih than, my uang gweh segini" << endl;

    cout << "jumlah uang Rendy (IDR)  : ";
    cin >> uang;

    cout << "\n================================" << endl;
    cout << "       STRUK KEMBALIAN          " << endl;
    cout << "================================" << endl;
    //***uang kembalian Rendy****
    cout << "[Bina]: Nih, Than. Rincian kembaliannya :" << endl;

    int kembalian = uang - totalBelanja_pajak;
    cout << "kembalian : " << kembalian << endl;
    cout << "---------------------------------" << endl;

    /*di pembagian pertama (kembalian / nominal) bakal nunjukkin berapa lembar kembalian.
    karna dipembagian pertama menggunakan tipe data integer jadi hasil pembagian desimal
    akan dibulatkan ke bawah. terus di pembagian kedua (modulus), program menghitung sisa bagi 
    yang kemudian digunakan untuk pembagian selanjutnya. 
    */
    int lembar100k = kembalian / 100000; kembalian = kembalian % 100000;
    int lembar50k = kembalian / 50000; kembalian = kembalian % 50000;
    int lembar20k = kembalian / 20000; kembalian = kembalian % 20000;
    int lembar10k = kembalian / 10000; kembalian = kembalian % 10000;
    int lembar5k = kembalian / 5000; kembalian = kembalian % 5000;
    int lembar1k = kembalian / 1000; kembalian = kembalian % 1000;
    int koin500 = kembalian / 500; kembalian = kembalian % 500;
    int koin200 = kembalian / 200; kembalian = kembalian % 200;
    int koin100 = kembalian / 100; kembalian = kembalian % 100;
    cout << "Rp.100.000 : " << lembar100k  << endl;
    cout << "Rp. 50.000 : " << lembar50k << endl;
    cout << "Rp. 20.000 : " << lembar20k << endl;
    cout << "Rp. 10.000 : " << lembar10k << endl;
    cout << "Rp. 5.000  : " << lembar5k << endl;
    cout << "Rp. 1.000  : " << lembar1k << endl;
    cout << "Rp. 500    : " << koin500 << endl;
    cout << "Rp. 200    : " << koin200 << endl;
    cout << "Rp. 100    : " << koin100 << endl;

    cout << "[Fathan]: Aman! Sisa receh tak terpecahnya: Rp " << kembalian << endl;
    cout << "Ini mau di Donasikan ga Ren?" << endl;
    cout << "[Rendy]: GAS" << endl;
    cout << "================================" << endl;

    return 0;
}