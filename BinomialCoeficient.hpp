/*
 * BinomialCoeficient.hpp
 *
 *  Created on: 29 de set de 2016
 *      Author: johannes
 */

#ifndef BINOMIALCOEFICIENT_HPP_
#define BINOMIALCOEFICIENT_HPP_

#include <iostream>

int BinomialCoeficient(int n, int p)
{
    int C[n+1][p+1]; // Declarando o array bidimensional (tabela) a ser utilizado.

    for(int i = 0; i <= n; ++i){  // Calcula o valor do coeficiente de baixo para cima.
        for (int j = 0; j <= (i < p? i:p); j++){
            if (j == 0 || j == i)   // Casos particulares.
                C[i][j] = 1;
            else    // Calcula o valor utilizando os que foram computados anteriormente.
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][p];
}


#endif /* BINOMIALCOEFICIENT_HPP_ */
