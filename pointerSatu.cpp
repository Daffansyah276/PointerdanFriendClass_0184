#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void shownim(){
        cout << "No Induk = " << nim << endl; 
    }

};

int main (){

    mahasiswa mhs; //object mhs
    mhs.nim = 5;
    mhs.shownim(); //member acces operator

    mahasiswa &refMhs = mhs; //pointer reference refmhs
    refMhs.nim = 2; //member acces operator
    mhs.shownim;

    mahasiswa *pMhs =  &mhs; //pointer reference refmhs
    refMhs.nim = 3; //member acces operator
    pMhs->shownim();
    return 0;
    

};