#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Cate numere sa afisam din fir: "; cin >> n;
    int Fibonacci[2] = {1, 1};
    int pahar;
    cout << Fibonacci[1] << ", ";
    for(int x = 0; x < n - 1; x++){
        //cout << "Primul = " << Fibonacci[0] << "\n" <<"Al doielea = " << Fibonacci[1] << "\n"; //Pentru a vedea numerele
        cout << Fibonacci[1] << ", ";
        pahar = Fibonacci[1]; //sirul lui Fibonacci este adunarea numarului cu cel din spatele lui. Punem numarul din fata intr-o variabila de a o pastra
        Fibonacci[1] = Fibonacci[0] + Fibonacci[1];  // Adunam numerele
        Fibonacci[0] = pahar; // apoi punem variabila de din inainte sa fie egal cu nr codas
    }
}
