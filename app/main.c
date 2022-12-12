/**
 * @file main.c
 * @brief The main source file, that contains...
 * @version 0.1
 * @date 2022-12-05
 */

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#include "prints.h"
#include "produto.h"
#include "tree.h"
#include "menus.h"

int main(int argc, char const *argv[])
{   
    int login;

    int lang = language_menu();

    if(lang == 1)
        pt_start_menu();
    else
        en_start_menu();

    return 0;
}
