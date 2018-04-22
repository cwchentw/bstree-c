#ifndef BSTREE_H
#define BSTREE_H

#include <stdbool.h>

typedef struct bstree BSTree;

#include "bstiter.h"

BSTree * bstree_new();
bool bstree_is_empty(BSTree *self);
bool bstree_find(BSTree *self, int value);
int bstree_min(BSTree *self);
int bstree_max(BSTree *self);
bool bstree_insert(BSTree *self, int value);
void bstree_free(void *self);

// Tree Traversal
void bstree_pre_order(BSTree *self);
void bstree_in_order(BSTree *self);
void bstree_post_order(BSTree *self);

#endif // BSTREE_H