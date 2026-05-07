//Imposto de Renda: https://judge.beecrowd.com/pt/problems/view/1051

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Otimização de entrada e saída para desafios de programação
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Variável que representa o valor do salário
    double N;
    cin >> N;
    
    if(N < 2000) // Se o salário for até R$2000,00...
    {    
        // ...a pessoa é isenta do imposto de renda
        cout << "Isento\n";
    }
    else if(N < 3000) // Se o salário for de R$2000,01 até R$3000,00...
    {
        //...a taxa de 8% do imposto de renda é aplicada ao valor que ultrapassa os R$2000,00 isentos de imposto
        cout << "R$ " << fixed << setprecision(2) << 0.08*(N-2000) << "\n"; 
    }
    else if(N < 4500) // Se o salário for de R$3000,01 até R$4500,00...
    {
        /*...R$2000,00 desse salário é isento do imposto,
        a taxa de 8% do imposto de renda é aplicada a R$1000,00 desse salário (3000-2000)
        e uma taxa de 18% é aplicada ao restante do valor*/ 
        cout << "R$ " << fixed << setprecision(2) << 0.08*1000 + 0.18*(N-3000) << "\n";
    }
    else // Se o salário for maior que R$4500,00..
    {
        /*...R$2000,00 desse salário é isento do imposto,
        a taxa de 8% do imposto de renda é aplicada a R$1000,00 desse salário (3000-2000),
        a taxa de 18% é aplicada a R$1500,00 desse salário (4500-3000)
        e uma taxa de 28% é aplicada ao restante do valor*/ 
        cout << "R$ " << fixed << setprecision(2) << 0.08*1000 + 0.18*1500 + 0.28*(N-4500) << "\n";
    }

    return 0;
}