#include <iostream>
using namespace std;

int main(){
    int *v, n, media=0;
    cout << "Tamanho do vetor" << endl;
    cin >> n;
    if(!(v = new(nothrow) int[n])){
        cout << "Erro" << endl;
        return -1;
    }
    for(int i=0;i<n;i++)
        cin >> v[i];
    for(int i=0;i<n;i++)
        media+=v[i];
    media = media/n;
    delete[] v;
    v = NULL;
    return 0;
}