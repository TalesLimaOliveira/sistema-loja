/**
 * @file tree.c
 * @brief 
 * @version 0.1
*/

#include <stdlib.h>
#include "produto.h"
#include "tree.h"
#include "prints.h"

//Functions
tree* create_tree()
{
    tree *t = (tree*)malloc(sizeof(tree));
    if(t){
        t->high = t->size = 0;
        t->root = NULL;
    }
    return t;
}


node* create_node()
{
    node* n = (node*)malloc(sizeof(node));
    if(n){
        n->info = create_product();
        n->left = n->right = NULL;
    }  
    return n;
}


void insert_tree(tree* t)
{
    node* new = create_node();
    t->root = insert_node(t->root, new);
}


node* insert_node(node* n, node* new)
{
    if(!n) return new;
        
    if(new->info->matricula < n->info->matricula)
        n->left = insert_node(n->left, new);
            
    else if(new->info->matricula > n->info->matricula)
        n->right = insert_node(n->right, new);

    else{ //if(new.matricula == n.matricula)
        print_extg_code(new->info->matricula);
        free_all_node(new);
    }
    
    return n;      
}


void free_all_node(node* n)
{
    if (!n) return;

    free(n->info);
    free_all_node(n->left);
    free_all_node(n->right);
    free(n);
    n = NULL;
}


void free_tree(tree* t)
{
    if(t->root == NULL) return;
    free_all_node(t->root);
    free(t);
}


int check_high_tree(tree* t)
{
    t->high = set_high_tree(t->root);
    return t->high;
}


int set_high_tree(node* n)
{
    if (!n) return 0;

    int hl = set_high_tree(n->left);
    int hr = set_high_tree(n->right);

    if (hl > hr) return (hl + 1);
    return (hr + 1);
}


int check_size_tree(tree* t)
{
    t->size = set_size_tree(t->root);
    return t->size;
}


int set_size_tree(node* n)
{
    if (!n) return 0;
    return (set_size_tree(n->left) + set_size_tree(n->right) + 1);
}


void p_node(node* n)
{
    if(n){
        p_node(n->left);
        print_product(n->info);
        p_node(n->right);
    }
}