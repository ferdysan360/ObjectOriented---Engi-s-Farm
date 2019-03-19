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
        
        void Mix(int index1, int index2, vector<Product>* bag); //prosedur Mix untuk mengkombinasi dua barang/lebih
};
#endif