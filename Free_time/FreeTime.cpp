#include <iostream>
#include <thread>
using namespace std;

char t;
int viteza = 0;
static bool input = false;

void speed(){
    while(!input){
    viteza++;

    };

}


int main()
{
    // incerc sa facu un joculet cu tren in console aplication
    std::thread worker(speed);
    cin >> t;
    input = true;
    worker.join();
    cout << "viteza: "<< viteza;

}
