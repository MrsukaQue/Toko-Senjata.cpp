#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << "##       Biodata        ##" << endl;
    cout << "===========================" << endl;
    cout << endl;

    string nama, nisn, kelas, jurusan, kota_asal, alamat;

    cout << "Nama Siswa / Siswi : ";
    getline(cin, nama);

    
    string age_confirmation;
    cout << "Apakah anda berumur 17 tahun ke atas? (ya/tidak): ";
    getline(cin, age_confirmation);

    if (age_confirmation != "ya" && age_confirmation != "Ya" && age_confirmation != "YA") {
        cout << "\nMaaf, pembeli harus berumur 17 tahun ke atas untuk membeli senjata." << endl;
        return 0;
    }

    cout << "Kelas : ";
    getline(cin, kelas);

    cout << "Jurusan : ";
    getline(cin, jurusan);

    cout << "Kota Asal : ";
    getline(cin, kota_asal);

    cout << "Alamat : ";
    getline(cin, alamat);

    cout << "NISN : ";
    getline(cin, nisn);

    cout << endl;
    cout << "##       Biodata Output        ##" << endl;
    cout << "===============================" << endl;
    cout << left << setw(15) << "Nama" << ": " << nama << endl;
    cout << left << setw(15) << "Umur" << ": 17 tahun ke atas (terkonfirmasi)" << endl;
    cout << left << setw(15) << "Kelas" << ": " << kelas << endl;
    cout << left << setw(15) << "Jurusan" << ": " << jurusan << endl;
    cout << left << setw(15) << "Kota Asal" << ": " << kota_asal << endl;
    cout << left << setw(15) << "Alamat" << ": " << alamat << endl;
    cout << left << setw(15) << "NISN" << ": " << nisn << endl;

    string psikotes;
    cout << "\nApakah pembeli sudah melakukan psikotes? (ya/tidak): ";
    getline(cin, psikotes);

    if (psikotes != "ya" && psikotes != "Ya" && psikotes != "YA") {
        cout << "\nMaaf, pembeli harus sudah melakukan psikotes untuk membeli senjata." << endl;
        return 0;
    }

    
    int jum_beli, bayar, harga[20], jumlah[20], sub_total[20];
    string nama_barang[30];
    float tot = 0;

    cout << "\nToko Senjata Jeparamart" << endl;
    cout << "====================" << endl;
    cout << endl;
    cout << "Masukan jumlah barang: ";
    cin >> jum_beli;
    cout << endl;

    for (int i = 0; i < jum_beli; i++) {
        cout << endl;
        cout << "Masukan nama barang ke-" << i + 1 << endl;
        cout << endl;

        cout << "Nama Barang: ";
        cin >> nama_barang[i];

        cout << "Jumlah Barang: ";
        cin >> jumlah[i];

        cout << "Harga barang: ";
        cin >> harga[i];

        sub_total[i] = jumlah[i] * harga[i];
        tot += sub_total[i];
    }

    cout << endl;
    cout << "Total belanja di Toko Senjata Jeparamart" << endl;
    cout << "=====================================" << endl;
    cout << "No Barang   Jumlah   Harga   Sub Total" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < jum_beli; i++) {
        cout << i + 1 << setw(12) << nama_barang[i] << setw(8) << jumlah[i] << setw(8) << harga[i] << setw(12) << sub_total[i] << endl;
    }
    cout << "=====================================" << endl;

    cout << "Jumlah Bayar : $." << tot << endl;
    cout << "Bayar: $.";
    cin >> bayar;
    cout << "Kembalian : $." << (bayar - tot) << endl;
    cout << "=====================================" << endl;

    return 0;
}

