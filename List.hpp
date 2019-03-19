#ifndef _LIST_HPP
#define _LIST_HPP

#include "FarmAnimal.hpp"
#include <vector>
#include <string>

template <class T>
class List {
	protected:
		std::vector<T> data ;
	public:
		List<T>();

        void remove();
        
        int find(T p);

        bool isEmpty();

        void add(T element);

        void remove(T element);

        T get(int index);
};

#endif