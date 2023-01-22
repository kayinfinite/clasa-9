#include <iostream>

using namespace std;

int main()
{
    int numar;
    int zero = 0;
    int decize;
    int unu = 0;
    //citim numarul de la tastatura
    cout <<"Introduceti numarul: "; cin >> numar;
    //verificam danca numarul e intre 1 si 1000000
    if(numar<1||numar>1000000){
        cout << "Nu se poate introduce acest numar";
        return 0;
    }
    //incepem decodarea nr. binar
    while(decize==1||decize==0){
        //impartim la 2 sa gasim restul
        decize = numar % 2;
        //impartim numarul
        numar = numar / 2;
        //vedem ce numar binar si cate zerouri si unuri are
        switch(decize){
        case 0:
            zero = zero + 1;
            break;
        case 1:
            unu = unu + 1;
            break;
        }
        //conditia de a se opri loop-ul
        if(numar<1){
            break;
        }
    }
    cout <<"numarul de zero cifre: "<< zero <<"\n";
    cout <<"numarul de unu cifre: "<< unu;
}
//linkul problemei: https://www.pbinfo.ro/probleme/429/cifbin
