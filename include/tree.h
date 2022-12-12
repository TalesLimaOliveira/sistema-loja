/**
 * @file tree.h
 * @brief The header of the tree.
 * @version 0.1
 */

#ifndef TREE_H
#define TREE_H

//Structs
typedef struct node{
    struct node *left, *right;
    struct produto *info;
}node;

typedef struct tree{
    node *root;
    int high, size;  
}tree;

//Functions
tree* create_tree();
node* create_node();

void insert_tree(tree* t);
node* insert_node(node* n, node* new);

void p_node(node* n);

void free_all_node(node* n);
void free_tree(tree* t);

int check_high_tree(tree* t);
int set_high_tree(node* n);

int check_size_tree(tree* t);
int set_size_tree(node* n);

#endif//TREE_H