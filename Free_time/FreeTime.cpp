#include <iostream>
#include <thread>
using namespace std;

int t = 0;

static bool input = false;

void speed(){
    while(!input){
    cout << "hello"<<"\n";
    };

}


int main()
{
    // incerc sa facu un joculet cu tren in console aplication
    std::thread worker(speed);
    std::cin.get();
    input = true;
    worker.join();
    std::cin.get();

}
