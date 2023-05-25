#include <stdio.h>
#include <stdlib.h>
#include "binary-node.h"

void printValue(struct BinaryNode *n) {
  printf("%d\n", *n->Value);
}

int main() {
  struct BinaryNode *root = malloc(sizeof(struct BinaryNode));
  root->Value = malloc(sizeof(int));
  *root->Value = (rand() + 5000) % 121;
  printf("%d\n", *root->Value);
  for (int i = 0; i < 10; i++) {
    int num = (rand() + 5000) % 121;

    struct BinaryNode *node = malloc(sizeof(struct BinaryNode));
    node->Value = malloc(sizeof(int));
    *node->Value = num;

    root = insert(root, node);

    printf("%d\n", num);

  }

  trace_inorder(root, printValue);

  free(root);

  return 0;
}