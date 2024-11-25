#include <iostream>
using namespace std;

float CalculaTotal(float inicial);
float ValorBase(float inicial);

int main(){
    float inicial;
    cout << "Valor inicial" << endl;
    cin >> inicial;
    cout << "Inicial * 4 * modificador: " << CalculaTotal(inicial) << endl;
    return 0;
}

float CalculaTotal(float inicial){
    if(ValorBase(inicial) > 2000)
        return ValorBase(inicial) * 0.5;
    else
        return ValorBase(inicial) * 0.7;
}
float ValorBase(float inicial){
    return inicial*4;
}