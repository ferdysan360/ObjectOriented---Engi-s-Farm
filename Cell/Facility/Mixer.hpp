//Kelas : Mixer.hpp

#ifndef _MIXER_H
#define _MIXER_H
#include "../Facility.hpp"
#include "../../List.hpp"
#include "../../Product/SideProduct/AngsaGeprek.hpp"
#include "../../Product/SideProduct/ChickenRolade.hpp"
#include "../../Product/SideProduct/KambingGuling.hpp"
#include "../../Product/SideProduct/KapsulEkstrakSusuKuda.hpp"
#include "../../Product/SideProduct/KudaBakarTelur.hpp"
#include "../../Product/SideProduct/NasiHainan.hpp"
#include "../../Product/SideProduct/SapiOmelete.hpp"
#include "../../Product/SideProduct/SusuKambingInstan.hpp"
#include "../../Product/SideProduct/SusuTelurMaduJahe.hpp"
#include <vector>
class Mixer: public Facility{
    private:
        
    public:
        //ctor
        Mixer();

        //prosedur Mix untuk mengkombinasi dua barang/lebih
        //ambil tipe masing2 product, terus cek hasil apa, kalau terdefinisi, lanjut, kalau ga keluarin "ga bisa buat"
        //kalau lanjut, cek produkSide nya jadinya apa, delete, baru tambahin
        //if satu-satu utuk setiap sidePoduct terdefinisi
        //ambil index yang lebih gede, hapus dluan, setelah itu hapus yang satu lagi, sebelumnya
        void Mix(int index1, int index2, List<Product*>* bag);
        
};
#endif