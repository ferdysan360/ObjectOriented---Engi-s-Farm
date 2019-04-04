#include "../List.hpp"
#include <bits/stdc++.h>

using namespace std;

int main(){
    List<int> X;
    X.add(1);
    X.add(2);
    X.add(3);
    X.add(4);
    X.add(5);
    X.add(6);
    for(int i = 0; i < X.getNeff(); i++){
        if(i == X.getNeff()-1){
            cout << X.get(i) << endl;
        }
        else{
            cout << X.get(i) << " ";
        }
    }
    X.removeIdx(0);
    cout << "Print After removeIdx(0) : ";
    for(int i = 0; i < X.getNeff(); i++){
        if(i == X.getNeff()-1){
            cout << X.get(i) << endl;
        }
        else{
            cout << X.get(i) << " ";
        }
    }
    X.remove(5);
    cout << "Print After remove(5) : ";
    for(int i = 0; i < X.getNeff(); i++){
        if(i == X.getNeff()-1){
            cout << X.get(i) << endl;
        }
        else{
            cout << X.get(i) << " ";
        }
    }
    cout << "Print get(3) : ";
    cout << X.get(3) << endl;
}