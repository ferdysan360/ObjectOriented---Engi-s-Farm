//Kelas : Mixer.hpp

#ifndef _MIXER_H
#define _MIXER_H
#include "Cell.hpp"

class Mixer: public Facility{
    private:
        const int typeFacility = 2;
    public:
        //Mixer(); //ctor
        void Mix(); //prosedur Mix untuk mengkombinasi dua barang/lebih
};
#endif