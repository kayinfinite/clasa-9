#include <iostream>
using namespace std;
int main(){
    //mic joculet
    int position_player[2] = {3 ,3};
    // [0] pentru axa x; [1] pentru axa y;
    int condition = 0;
    char comanda;

    while(true){
        cout << "introduce comanda: "; cin >> comanda;
        if(comanda == 'w' && position_player[1] < 6 ){
                position_player[1]++;
        }
        if(comanda == 's' && position_player[1] > 0 ){
                position_player[1]--;
        }
        if(comanda == 'a' && position_player[0] > 0 ){
                position_player[0]--;
        }
        if(comanda == 'd' && position_player[0] < 6 ){
                position_player[0]++;
        }
        cout <<"x ="<< position_player[0] <<"\n" <<"y ="<< position_player[1] <<"\n";
    }
};
