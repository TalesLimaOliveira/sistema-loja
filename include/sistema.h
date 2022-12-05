#ifndef SISTEMA_H
#define SISTEMA_H

/**
 * @file sistema.h
 * @brief sistema.h is the HEADER that contains all .c and .h files of the SISTEMA project.
 * @version 0.1
 * @date 2022-12-05
 */

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

//Struct
typedef struct PRODUTO{
    int matricula;
    int qtd;
    int tipo; 
    float preco;
}PROTUDO; 

void menuincial();

#endif