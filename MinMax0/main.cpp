#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> sir(5, 0);
    int n, maxim, minim, mare, mic;
    cout<<"Cate numere vreti sa introduceti: "; cin >> n;
    if(0>n||n>1000){
        return 0;
    }
    mare = 0;
    for(int i = 0; i<n; i++){
        cout<<"\n"<<"introduceti numarul: ";
        cin >> sir[i];
    }
    for(int i = 0; i<n; i++){
        if(sir[i] >sir[i + 1] ){
            mare = sir[i];
            if(mare > maxim){
                maxim = mare;
            }
        }
        if(sir[i]<sir[i+1]){
            mic = sir[i];
            if(mic < minim){
                minim = mic;
            }
        }
    }
    cout <<"numarul maxim este: "<< maxim<<"\n";
    cout <<"numarul minim este: "<< minim;

}
