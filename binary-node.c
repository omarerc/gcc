/* binary-node.c */
#include <stdio.h>
#include <stdlib.h>
#include "binary-node.h"

// Struct Definition
//struct BinaryNode {
//  int *Value;
//  struct BinaryNode *leftChild;
//  struct BinaryNode *rightChild;
//};

// Insert new node into the tree.
struct BinaryNode * insert(struct BinaryNode *r, struct BinaryNode *n) {

  n->leftChild = NULL;
  n->rightChild = NULL;

  // Tracking Left Path
  if ((*n->Value <= *r->Value) && (r->leftChild != NULL)) {
    insert(r->leftChild, n);
    return r;
  } else if ((*n->Value <= *r->Value) && (r->leftChild == NULL)) {
    // Last element is found (Leaf)
    r->leftChild = n;
    return r;
  }

  // Tracking Right Path
  if ((*n->Value > *r->Value) && (r->rightChild != NULL)) {
    insert(r->rightChild, n);
    return r;
  } else if ((*n->Value > *r->Value) && (r->rightChild == NULL)) {
    // Last element is found (Leaf)
    r->rightChild = n;
    return r;
  }

  // Not insertion happends
  return NULL;
};

// Trace Tree in Order and Execute the function passes like an argument
void trace_inorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n)) {
  
  if (r->leftChild != NULL)
    trace_inorder(r->leftChild, f);
  
  f(r);

  if (r->rightChild != NULL)
    trace_inorder(r->rightChild, f);
  
}

// Trace Tree in Pre-Order and Execute the function passes like an argument
void trace_preorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n)) {
  
  f(r);

  if (r->leftChild != NULL)
    trace_preorder(r->leftChild, f);

  if (r->rightChild != NULL)
    trace_preorder(r->rightChild, f);
  
}

// Trace Tree in Post-Order and Execute the function passes like an argument
void trace_postorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n)) {

  if (r->leftChild != NULL)
    trace_postorder(r->leftChild, f);

  if (r->rightChild != NULL)
    trace_postorder(r->rightChild, f);

  f(r);
  
}

// Clean node memory
void release_node(struct BinaryNode *r) {
  if (r->Value != NULL)
    free(r->Value);

  if (r->leftChild != NULL)
    free(r->leftChild);

  if (r->rightChild != NULL)
    free(r->rightChild);
}

// Release Dynamic Memory used in the tree
void clean_tree(struct BinaryNode *r)
{
  trace_postorder(r, release_node);
}