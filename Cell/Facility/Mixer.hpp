//Kelas : Mixer.hpp

#ifndef _MIXER_H
#define _MIXER_H
#include "../Facility.hpp"

class Mixer: public Facility{
    private:
        
    public:
        //ctor
        Mixer(): Facility(2)
        {

        }
        
        void Mix(); //prosedur Mix untuk mengkombinasi dua barang/lebih
};
#endif