// Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.


#include <bits/stdc++.h>

using namespace std;

int main(){

    int x; 
    char op; 
    double m[12][12], s=0.0;
    
    cin >> x >> op; 

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j]; 
        }
    }
    
    for (int i = 0; i < 12; i++)
    {
        s += m[i][x];
    }
    
    if(op == 'S')  cout << fixed << setprecision(1) << s << endl; 
    else if(op == 'M') cout << fixed << setprecision(1) << (s/12.0) << endl;

    return 0; 
}

