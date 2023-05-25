/* binary-node.h */
struct BinaryNode {
  int *Value;
  struct BinaryNode *leftChild;
  struct BinaryNode *rightChild;
};

// CRUD
extern struct BinaryNode * insert(struct BinaryNode *r, struct BinaryNode *n);
extern void trace_inorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n));