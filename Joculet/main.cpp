#include <iostream>
using namespace std;
int main(){
    int position_player[3] = {0 ,0 , 0};
    int condition = 0;
    char comanda;

        while(condition <= 1){
            cin >> comanda;
            switch(comanda){
                case "w":
                position_player[0] = position_player[0] + 1;
                break;
                default:
                cout << "comanda gresita";
                break;
            }
            for(int x =0; x<=2; x++){
                cout << position_player[x];
            }
        }
};
