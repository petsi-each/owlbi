// Restaurante e Pizzaria do Alfredo https://judge.beecrowd.com/pt/problems/view/1641

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Otimização de entrada e saída para desafios de programação
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int pizza = 0; // Variável que guarda o número da pizza 
    int R, W, L; // Variáveis que guardam respectivamente o raio da mesa, a largura e a altura da pizza
    
    while(1)
    {
        pizza++; // Sempre que o loop é executado o número da pizza aumenta em 1
        cin >> R; // Entrada do valor do raio da mesa
        if(R == 0) break; // Verifica se o valor do raio é igual a 0, saindo do loop caso seja
        
        cin >> W >> L; // Entrada do valor da largura e altura da mesa

        /*
        Para a pizza (retângular) caber na mesa (redonda) a diagonal da pizza tem que ser menor que o diâmetro da mesa
        A diagonal 'a' de um retângulo com lados 'W' e 'L' pode ser encontrada por teorema de pitágoras: a^2 = W^2 + L^2
        O diâmetro da mesa é igual a 2*R

        Logo temos:
        2*R >= a
        (2*R)^2 >= a^2
        4*R*R >= W*W + L*L
        */  
        if(4*R*R >= W*W + L*L)
        {
            cout << "Pizza " << pizza << " fits on the table.\n";
        }
        else
        {
            cout << "Pizza " << pizza << " does not fit on the table.\n";
        }
    }
}