/* $Id: treeman.c,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
/* Auteur: Marc UME  **  Date: 17/03/94  ** 
   Commentaire: Gestionnaire d'arbres balances */

/* version modifiee par geuz */

#include <stdlib.h>
#include <string.h>
#include "ualloc.h"
#include "treeman.h"


Tree_T *Tree_Create(int size, int (*fcmp)(const void *a, const void *b))
{
  Tree_T *tree;

  tree = (Tree_T *) Malloc(sizeof(Tree_T));

  tree->size = size;
  tree->root = avl_init_table(fcmp);

  return(tree);
}

void Tree_Delete(Tree_T *tree)
{
  avl_free_table(tree->root, Free, 0);
  Free(tree);
}

void Tree_Add(Tree_T *tree, void *data)
{
  void *ptr;

  ptr = Malloc(tree->size);
  memcpy(ptr,data,tree->size);
  avl_insert(tree->root, ptr, ptr);
}

void * Tree_AddP(Tree_T *tree, void *data)
{
  void *ptr;

  ptr = Malloc(tree->size);
  memcpy(ptr,data,tree->size);
  avl_insert(tree->root, ptr, ptr);
  return ptr ;
}

int Tree_Nbr(Tree_T *tree)
{
  return(avl_count(tree->root));
}

void Tree_Insert(Tree_T *tree, void *data)
{
  if (Tree_Search(tree,data) == 0)
    Tree_Add(tree,data);
}

int Tree_Replace(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  state = avl_lookup(tree->root, data, &ptr);
  if (state == 0) {
    Tree_Add(tree,data);
    return(0);
  }
  else {
    memcpy(ptr,data,tree->size);
    return (1);
  }
}

int Tree_Search(Tree_T *tree, void *data)
{
  void *ptr;

  return (avl_lookup(tree->root, data, &ptr));
}

int Tree_Query(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  state = avl_lookup(tree->root, data, &ptr);

  if (state == 0) return(0);

  memcpy(data,ptr,tree->size);

  return (1);
}

void *Tree_PQuery(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  state = avl_lookup(tree->root, data, &ptr);

  if (state == 0) return(NULL);
  return (ptr);
}

int Tree_Suppress(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  ptr = data;
  state = avl_delete(tree->root, &ptr, &ptr) ;
  if (state == 0) return(0);

  Free(ptr);
  return(1);
}

int Tree_Left(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  state = avl_extremum(tree->root, AVL_MOST_LEFT, &ptr);

  if (state == 0) return (0);

  memcpy(data,ptr,tree->size);

  return (1);
}

int Tree_Right(Tree_T *tree, void *data)
{
  void *ptr;
  int state;

  state = avl_extremum(tree->root, AVL_MOST_RIGHT, &ptr);

  if (state == 0) return (0);

  memcpy(data,ptr,tree->size);

  return (1);
}

void Tree_Action(Tree_T *tree, void (*action) (void *data, void *dummy))
{
  avl_foreach(tree->root, action, AVL_FORWARD);
}

int Tree_Size(Tree_T *tree) {
  return(tree->size);
}
