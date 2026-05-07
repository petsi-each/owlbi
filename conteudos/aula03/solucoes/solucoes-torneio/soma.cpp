//Soma de Pares Consecutivos: https://judge.beecrowd.com/pt/problems/view/1159 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Otimização de entrada e saída para desafios de programação
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int X = 0; // Variável que guarda o numero que dará início a soma dos 5 pares
    int soma = 0; // Variável que guarda o valor da soma
    

    while(1)
    {
        cin >> X;
        soma = 0; // Reinicialização do valor da soma ao iniciar um caso-teste
        
        if(X == 0) break; // Se o valor lido para X for 0, não teremos mais entradas, portanto quebramos o loop
        else if(X%2 != 0) X++; // Se o valor lido foi ímpar(resto diferente de 0), definimos X como o próximo número par
        
        // Soma dos próximos 5 números pares
        for(int i = 1; i<=5; i++)
        {
            soma += X; // Aumenta o valor de soma com o valor de X atual
            X+=2; // Muda o valor de X para o próximo número par
        }
        
        cout << soma << "\n";
    }
}