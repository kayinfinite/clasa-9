#include <iostream>

using namespace std;

int main()
{
    //facut pentru a invata la mate
    int Sir[2];
    int r;
    int scazut;
    int a1;
    int data;

    cout <<"Primul numar al catelea e in sir"; cin >> data;
    cout <<"Numarul "; cin >> Sir[1];
    cout <<"Scrie numarul din inaintea lui; "; cin >> Sir[2];
    if(Sir[1]>Sir[2]){
        r = Sir[1] - Sir[2];
        cout <<"r = "<<r;
        scazut = Sir[1];
        cout <<"\n"<< Sir[1] - 1;
        cout << "\n" << scazut;
        cout << "\n"<<data;
        for(int x = 1; 1 <= data; x++){
                Sir[1] = Sir[1] - r;
                //cout << "\n" << x;

        };
    }
    cout <<"\n"<<"A1 = "<<scazut;
}
