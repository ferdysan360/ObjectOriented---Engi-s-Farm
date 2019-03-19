//Kelas : Mixer.hpp

#ifndef _MIXER_H
#define _MIXER_H
#include "../Facility.hpp"
#include <vector>
class Mixer: public Facility{
    private:
        
    public:
        //ctor
        Mixer(): Facility(2)
        {

        }
        
        //prosedur Mix untuk mengkombinasi dua barang/lebih
        //ambil tipe masing2 product, terus cek hasil apa, kalau terdefinisi, lanjut, kalau ga keluarin "ga bisa buat"
        //kalau lanjut, cek produkSide nya jadinya apa, delete, baru tambahin
        //if satu-satu utuk setiap sidePoduct terdefinisi
        //ambil index yang lebih gede, hapus dluan, setelah itu hapus yang satu lagi, sebelumnya
        void Mix(int index1, int index2, vector<Product>* bag);
        
};
#endif