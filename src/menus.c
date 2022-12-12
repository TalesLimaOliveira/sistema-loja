#include "menus.h"
#include "tree.h"

int language_menu()
{
    int op = 0;

    do {
        print_language_menu();
        scanf("%d", &op); 

        if (op != 1 || op != 2)
            print_invalid_op();

    } while (op != 1 || op != 2);

    return op;
}


int start_menu()
{
    int op = 0;

    while (op != 3)
    {
        print_login_menu();
        scanf("%d", &op);

        if (op == 1)
            singup_menu();
        
        else if (op == 2)
            login_menu();
        
        else if (op == 3)
            guest_menu();
        
        else
            print_invalid_op();
    }
}


void main_menu()
{ 
    int op = 0;
    tree* t = create_tree();

    while (op != 3)
    {
        print_main_menu();
        scanf("%d", &op);

        if (op == 1) //cadastrar produto
            insert_tree(t);
        
        else if (op == 2)//ver produtos
            p_node(t->root);
        
        else if (op == 3)//ver relatorios de venda
            ;

        else if (op == 4)//ver por tipos
            ;

        else if (op == 5)//Salvar loja
            ;

        else if (op == 6)//Carregar loja
            ;

        else if (op == 7)//Excluir dados
            ;

        else    
            print_invalid_op();
    }
}

