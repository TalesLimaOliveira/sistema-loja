/**
 * @file produto.h
 * @brief sistema.h is the HEADER that contains all .c and .h files of the SISTEMA project.
 * @version 0.1
 */

#ifndef PRODUTO_H
#define PRODUTO_H

//Struct
typedef struct produto{
    int matricula;
    int qtd;
    int tipo; 
    float preco;
}produto;

//Function
produto* create_product();

#endif