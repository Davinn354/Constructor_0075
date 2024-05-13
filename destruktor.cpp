#include <iostream>
using namespace std;

class angka{
private:
    int *arr;
    int panjang;
public:
    angka(int);
    ~angka();
    void cetakData();
    void isiData();
};
//Definisi member Function
angka::angka(int i){// constructor
    panjang = 1;
    arr = new int[i];
    isiData();
}

angka::~angka(){
    cout<<endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData(){
    for(int i=1;i<=panjang;i++){
        cout<<i<<" = "<<arr[i]<<endl;
    }
}