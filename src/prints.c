#include <stdio.h>
#include "colors.h"
#include "prints.h"
#include "produto.h"

void print_main_menu()
{
    puts("\n  -- MENU PRINCIPAL --");
    puts("   1 - Inserir Produto");
    puts("   2 - Imprimir Produtos");
    puts("   3 - Sair");
    printf("\nOP: ");

}


void print_invalid_op()
{
    puts("ERRO: OP INVALIDA!");
}


void print_product(produto* p)
{
    puts("\n--------------");
    printf("   Matricula: %d\n", p->matricula);
    printf("   Tipo: %d\n", p->tipo);
    printf("   Preco: %.2f\n", p->preco);
    printf("   Quatidade no Estoque: %d\n", p->qtd);
    puts("--------------");
}


void print_extg_code(int code)
{
    printf("\nERRO: O produto com a matricula %d ja existe\n", code);
    printf("Tente alterar o produto.\n");
}