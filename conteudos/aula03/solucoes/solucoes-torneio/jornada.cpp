//Jornada nas Estrelas: https://judge.beecrowd.com/pt/problems/view/1973

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Otimização de entrada e saída para desafios de programação
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N; // Variável que guarda o número de fazendas/Estrelas
    
    /* Variáveis que guardam respectivamente:
    O número de fazendas que foram atacadas pelo irmão louco
    A posição atual do irmão louco (em qual Estrela ele está)
    */
    int fazendasAtacadas = 0, posIrmao = 0;

    /* Variáveis que guardam respectivamente
    O número total de carneiros presentes em todas as Estrelas
    O número de carneiros roubados pelo irmão louco

    As variáveis são do tipo long pois de acordo com as restrições:
    Podemos ter até 10^6 estrelas e cada estrela pode ter até 10^6 carneiros
    Logo no pior caso podemos ter até 10^12 carneiros, valor que ultrapassa o limite de int (2^32) mas está dentro dos limites do long (2^64) 
    */
    long totalCarneiros = 0, carneirosRoubados = 0;
    
    cin >> N;
    
    int X[N]; // Arranjo que guarda o número de carneiros em cada Estrela
    bool fazendaRoubada[N]; // Arranjo que guarda se uma Estrela já foi roubada ou não
    
    // Inicialização das variáveis/arranjos
    for(int i = 0; i<N; i++)
    {
        // Para cada entrada guardamos o valor de carneiros em cada Estrela e aumentamos a variável que guarda o total de carneiros
        cin >> X[i];
        totalCarneiros+=X[i];

        // Definimos que todas as Estrelas ainda NÃO foram roubadas
        fazendaRoubada[i] = false;
    }
    
    // Loop que possui como condicional a posição do irmão ser uma Estrela válida
    while(posIrmao >= 0 && posIrmao < N)
    {
        if(X[posIrmao] > 0) carneirosRoubados++; // Se a Estrela visitada pelo irmão ainda possui carneiros, aumenta em 1 o número de carneiros roubados
        if(!fazendaRoubada[posIrmao]) fazendaRoubada[posIrmao] = true; // Define que a Estrela visitada pelo irmão foi roubada
            
        if(X[posIrmao]%2 == 1) // Verifica se o número de carneiros na Estrela é ímpar, caso seja:
        {
            if(X[posIrmao] > 0) X[posIrmao]--; // Diminui o número de carneiros na Estrela em 1 (pois ela foi roubada)
            posIrmao++; // Aumenta a posição do irmão em 1 ("ele segue para a estrela i+1")
        }
        else // Se o número de carneiros na Estrela for par:
        {
            if(X[posIrmao] > 0) X[posIrmao]--; // Diminui o número de carneiros na Estrela em 1 (pois ela foi roubada)
            posIrmao--; // Diminui a posição do irmão em 1 ("ele segue para a estrela i-1")
        }
    }
    
    // Calcula o número total de fazendas roubadas
    for(int i = 0; i<N; i++){
        if(fazendaRoubada[i]) fazendasAtacadas++;
    }

    cout << fazendasAtacadas << " " << totalCarneiros-carneirosRoubados << "\n";
 
    return 0;
}