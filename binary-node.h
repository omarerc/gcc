/* binary-node.h */
struct BinaryNode {
  int *Value;
  struct BinaryNode *leftChild;
  struct BinaryNode *rightChild;
};

extern const int NOT_FOUND;
// CRUD
extern struct BinaryNode * insert(struct BinaryNode *r, struct BinaryNode *n);
extern void trace_inorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n));
extern void trace_preorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n));
extern void trace_postorder(struct BinaryNode *r, void (*f)(struct BinaryNode *n));
extern int find_value(struct BinaryNode *r, int key);
extern void clean_tree(struct BinaryNode *r);
