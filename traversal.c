#include <stdio.h>
/**
 * traversal - A traversal method using the basic structure of a tree
 * struct traverse - struct traversal pointed to by left and right might have other left and right children therefore they are sub-trees instead of sun-nodes
*/
typedef struct traversal;

struct traversal
{
    int data;
    struct traversal *left;
    struct traversal *right;
};

/** According to the above structure,     every tree has
 * A node carrying data
 * Two subtrees
 * Remember the aim is to visit every node, therefore every subtree needs to be visited.
 * Depending on the order, there are 3 types of traversal
 */

/** Inorder traversal
 * First visit all nodes of the left subtree
 * Then the root and 
 * All the right nodes
 * ie inorder(root->left)
 *    display(root->data)
 *    inorder(root->right)
 * Putting everything on a stack was helpful because now that the left-subtree of the root node has been traversed, we can print it and go to the right subtree.
 * We don't have to create the stack ourselves because recursion maintains the correct order for us

After going through all the elements, we get the inorder traversal as
 */

/** Preorder traversal
 * Visit the root node
 * Visit all nodes in left subtree
 * Visit all nodes in right subtree
 * ie display(root->data)
 *    preorder(root->left)
 *    preorder(root->right)
 */

/** Postorder traversal
 * Vist all nodes in left subtree
 * Visit all nodes in right subtree
 * Vist the root node
 * ie postorder(root->left)
 *    postorder(root->right)
 *    postorder(root->data)
 */