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

  printf("-- In Order --\n");
  trace_inorder(root, printValue);
  printf("-- Pre Order --\n");
  trace_preorder(root, printValue);
  printf("-- Post Order --\n");
  trace_postorder(root, printValue);

  int k;

  printf("Key: ");
  scanf("%d", &k);
  int index = find_value(root, k);
  if (index == NOT_FOUND)
    printf("Value not in the list.");
  else
    printf("The index of the element is %d.\n", index);

  clean_tree(root);

  return 0;
}