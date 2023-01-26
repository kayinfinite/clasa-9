#include <iostream>
#include <thread>
using namespace std;

int t = 0;
int aceleratie = 0;
int viteza = 0;
static bool input = false;

void speed(){
    while(!input){
    switch(t){
case 1:
    aceleratie = 1;
    break;
case 2:
    aceleratie = 1.5;
    break;
default:
    aceleratie = 0;
    break;

    }
    viteza = viteza + aceleratie;
    };

}


int main()
{
    // incerc sa facu un joculet cu tren in console aplication

    while(true) {
            std::thread worker(speed);
            cin >> t;
            input = true;
            worker.join();
            cout <<"\r"<< "viteza: "<< viteza;
    }

}
