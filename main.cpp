#include <iostream>

using namespace std;

int main(){

    string dato;
    getline(cin,dato);

    if(dato=="char"){
        cout << sizeof(char) << endl;
    }else if(dato=="int"){
        cout << sizeof(int) << endl;
    }else if(dato=="short"){
        cout << sizeof(short) << endl;
    }else if(dato=="float"){
        cout << sizeof(float) << endl;
    }else if(dato=="double"){
        cout << sizeof(double) << endl;
    }else if(dato=="long"){
        cout << sizeof(long) << endl;
    }

}