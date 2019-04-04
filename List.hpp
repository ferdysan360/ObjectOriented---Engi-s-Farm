#ifndef _LIST_HPP
#define _LIST_HPP

#include "FarmAnimal.hpp"
#include "Product.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

struct isPointerOfProduct {
    int typeProduct;

    isPointerOfProduct(Product* pCompare) {
         typeProduct = pCompare->getTypeProduct();
    }

    bool operator()(Product* pInVector) const {
        return pInVector->getTypeProduct()==typeProduct;
    }
};

struct isPointerOfAnimal {
    int typeAnimal;

    isPointerOfAnimal(FarmAnimal* pCompare) {
         typeAnimal = pCompare->getTypeAnimal();
    }

    bool operator()(FarmAnimal* pInVector) const {
        return pInVector->getTypeAnimal()==typeAnimal;
    }
};

template <class T>
class List {
	protected:
		std::vector<T> data;
        int neff;
	public:
		List();

        int find(T p);

        bool isEmpty();

        void add(T element);

        void remove(T element);

        T get(int index);

        int getNeff(); 
};

template <class T>
int List<T>::getNeff(){
    return neff;
}

template <class T>
List<T>::List(){
    neff = 0;
}

template <class T> //find for generic
int List<T>::find(T p){
    int idx;
    typename vector<T>::iterator itr;

    
    itr = std::find(data.begin(), data.end(), p);
    
    
    if(itr == data.end()){
        idx = -1;
    }
    else{
        idx = distance(data.begin(),itr); // itr - data.begin()
    }
    return idx;
}

template <> //find for product 
int List<Product*>::find(Product* p){
    int idx;
    typename vector<Product*>::iterator itr;
    
    itr = std::find_if(data.begin(), data.end(), isPointerOfProduct(p));
    
    if(itr == data.end()){
        idx = -1;
    }
    else{
        idx = distance(data.begin(),itr); // itr - data.begin()
    }
    return idx;
}

template <> //find for farm animal
int List<FarmAnimal*>::find(FarmAnimal* p){
    int idx;
    typename vector<FarmAnimal*>::iterator itr;
    
    itr = std::find_if(data.begin(), data.end(), isPointerOfAnimal(p));
    
    if(itr == data.end()){
        idx = -1;
    }
    else{
        idx = distance(data.begin(),itr); // itr - data.begin()
    }
    return idx;
}

template <class T>
bool List<T>::isEmpty(){
    return data.empty();
}

template <class T>
void List<T>::add(T element){
    data.push_back(element);
    neff++;
}

template <class T>
void List<T>::remove(T element){
    
    int index = List<T>::find(element);
    if (index == -1) {
        std::cout << "Item not found!" << endl;
    } else {
        typename vector<T>::iterator itr = data.begin() + index;
        data.erase(itr);
        neff--;
    }
}

template <class T>
T List<T>::get(int index){
    return data[index];
}
#endif