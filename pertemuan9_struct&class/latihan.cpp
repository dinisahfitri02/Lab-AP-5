#include <iostream>
#include <vector>
using namespace std;

class Mahasiswa {

    public:
        string Nama;
        string NIM;
        float IPK;

    Mahasiswa (string Nama, string NIM, float IPK) : Nama(Nama), NIM(NIM), IPK(IPK) {}

    static void tambahDataMahasiswa(vector<Mahasiswa> &mahasiswa) {
        string Nama;
        string NIM;
        float IPK;

        cout << "Input nama mahasiswa: ";
        cin.ignore();
        getline(cin, Nama);

        cout << "Input NIM mahasiswa: ";
        cin >> NIM;

        cout << "Input IPK mahasiswa: ";
        cin >> IPK;

        mahasiswa.emplace_back(Nama, NIM, IPK);
    }

    static void tampilkanSeluruhData(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        for (const auto& mhs : mahasiswa) {
            cout << "Nama: " << mhs.Nama << ", NIM: " << mhs.NIM << ", IPK: " << mhs.IPK << endl;
        }
    }

    static void hitungRataRataIPK(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        float totalIPK = 0;

        for (const auto& mhs : mahasiswa) {
            totalIPK += mhs.IPK;
        }

        cout << "Rata-rata dari " << mahasiswa.size() << ": " << totalIPK/mahasiswa.size() << endl;
    }

    static void tampilkanIPKMahasiswaTertinggi(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        const Mahasiswa* ptrMhs = &mahasiswa[0];

        for (const auto& mhs : mahasiswa) {
            if (mhs.IPK > ptrMhs -> IPK) {
                ptrMhs = &mhs;
            }
        }

        cout << "Mahasiswa IPK tertinggi\n";
        cout << "Nama: " << ptrMhs -> Nama << ", NIM: " << ptrMhs -> NIM << ", IPK: " << ptrMhs -> IPK << endl;
    }

    static void tampilkanIPKMahasiswaTerendah(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        const Mahasiswa* ptrMhs = &mahasiswa[0];

        for (const auto& mhs : mahasiswa) {
            if (mhs.IPK < ptrMhs -> IPK) {
                ptrMhs = &mhs;
            }
        }

        cout << "Mahasiswa IPK terendah\n";
        cout << "Nama: " << ptrMhs -> Nama << ", NIM: " << ptrMhs -> NIM << ", IPK: " << ptrMhs -> IPK << endl;
    }
};

void MenuMahasiswa() {
    cout << "Menu\n";
    cout << "1. Tambah Data Mahasiswa\n";
    cout << "2. Tampilkan Seluruh Data Mahasiswa\n";
    cout << "3. Hitung Rata-rata IPK Mahasiswa\n";
    cout << "4. Mahasiswa dengan IPK Tertinggi\n";
    cout << "5. Mahasiswa dengan IPK Terendah\n";
    cout << "6. Keluar\n";
}

int main() {
    system("CLS");
    
    vector<Mahasiswa>mahasiswa;
    int pilihan;
    
    while(true) {
        MenuMahasiswa();
        cout << "Input pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            Mahasiswa::tambahDataMahasiswa(mahasiswa);
            break;
        case 2: 
            Mahasiswa::tampilkanSeluruhData(mahasiswa);
            break;
        case 3:
            Mahasiswa::hitungRataRataIPK(mahasiswa);
            break;
        case 4: 
            Mahasiswa::tampilkanIPKMahasiswaTertinggi(mahasiswa);
            break;
        case 5: 
            Mahasiswa::tampilkanIPKMahasiswaTerendah(mahasiswa);
            break;
        case 6:
            return 0;
        default:
            cout << "Inputan tidak valid!\n";
            break;
        }
    }
    
    return 0;
}