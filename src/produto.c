#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

//Functions
produto* create_product()
{
    produto* p = (produto*)malloc(sizeof(produto));

    printf("\nCadatro de novo produto\nPor favor insira as infos abaixo:\n");

    printf("   Matricula: ");
    scanf("%d", &p->matricula);

    printf("   Tipo: ");
    scanf("%d", &p->tipo);

    printf("   Preco: ");
    scanf("%f", &p->preco);

    printf("   Quantidade no estoque: ");
    scanf("%d", &p->qtd);
    
    return p;
}