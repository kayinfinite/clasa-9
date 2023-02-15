#include <iostream>
using namespace std;
int main(){
    //mic joculet
    int position_player[2] = {3 ,3};
    // [0] pentru axa x; [1] pentru axa y;
    int position_box[2] = {1 ,1};
    int condition = 0;
    char comanda;
    cout <<"Player location:"<<" x ="<< position_player[0] <<" y ="<< position_player[1] <<"\n";

    while(true){
        cout << "introduce comanda: "; cin >> comanda;
        //comenzi de iscare
        if(comanda == 'w' && position_player[1] < 6 && position_box[1] < 6){
                position_player[1]++;
                if(position_player[0]== position_box[0] && position_player[1]== position_box[1]){
                    position_box[1]++;
                }
        }
        if(comanda == 's' && position_player[1] > 0 && position_box[1] > 0){
                position_player[1]--;
                if(position_player[0]== position_box[0] && position_player[1]== position_box[1]){
                    position_box[1]--;
                }
        }
        if(comanda == 'a' && position_player[0] > 0 && position_box[0] > 0){
                position_player[0]--;
                if(position_player[0]== position_box[0] && position_player[1]== position_box[1]){
                    position_box[0]--;
                }
        }
        if(comanda == 'd' && position_player[0] < 6 && position_box[0] < 6){
                position_player[0]++;
                if(position_player[0]== position_box[0] && position_player[1]== position_box[1]){
                    position_box[0]++;
                }
        }
        cout <<"Player location:"<<" x ="<< position_player[0] <<" y ="<< position_player[1] <<"\n";
        cout <<"Box location:"<<" x ="<< position_box[0] <<" y ="<< position_box[1] <<"\n";
    }
};
