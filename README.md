#

## RESOURCE 1

## Binary tree

A binary tree is a data structure where each node has at most two children. i.e k = 2. A recursive explanation using **set theory** is that a BT is a tuple(L S R). Where L an R are binary trees/empty set and S is the singleton set containing the root. Note: A binary tree is always rooted.
In computer science, binary trees can be used in two different ways:

* First, as means of accessing nodes based on some values or label associated with each node. These type of binary trees can be used to implement binary search trees and binary heaps.They are also used for searching and sorting.
* Second, as a representation of data with a relevant bifurcating structure.

## Definitions

Note: **To define a binary tree, the fact that one of the nodes might be empty must be taken into consideration**. an extended binary tree, is needed for that purpose
Recursively,
An empty set is an extended binary tree
if T1 and T2 are extended binary trees, then denote by T1 • T2

## properties of binary trees

* The number of nodes n in afull binary tree is at least 2h + 1 and at most 2^h+1 - 1  (i.e., the number of nodes in a perfect binary tree), where ℎ
{\displaystyle h} is the height of the tree. A tree consisting of only a root node has a height of 0

## RESOURCE 2

## Tree Data Structure

A non-linear abstract data type heirarchy based structure. It consist of nodes where data is . It is connected via links. THe tree data structure stems from a single node known as the root node connected to subtrees. Important terminologies of a tree data structure includes the following: root, level, parent, sibling, child, sub-tree, leaf node

## Important Terms

* Path - sequence of nodes along the edge of a tree.
* Root - node at the top of the tree is called the root.
* Parent - Any node apart from the root that has one edge upward to a node called parent.
* Child - node below a given node connected by its edge downwar
* Leaf - The node that does not have a child
Subtree - Descendants of a node
* Visting - refers to checking the value of a node when control is on it.
* Tranversing - passing through nodes in a specific order
*Levels - generation of a node
* keys - represents the value of a node, based on the search operation to be performed on the node.

## Types of trees

* General Trees
* Binary trees
* Binary search trees

* General Trees
These are unordered tree data structures where the root node has a minimum 0 or maximum n subtrees.
Note **The root node acts as the superset of all other subtrees**

* Binary trees
THese are general trees whereby the root node can hold a maximum of 2 subtrees. Left and Right subtree. There are 3 types

1. Full binary tree - binary tree structure whereby each node has a either 0 or 2 child nodes
2. Complete binary tree - is a binary tree where **every leaf node is on the same level**. Also, the root node and internal nodes can have 0, 1 or 2 child nodes
3. Perfect binary tree - is a binary tree where all the leaf nodes are on the same level ad every node except the leaf node have 2 children.

## Binary Search Trees

BST possess all the properties of BT and additional properties of thier own making them more efficient than binary trees.
Note: **The data in the BST are always stored in such a way that the value in the left subtree is always less than val in the root node, and the value in the right subtree is always greater than the root node value. ie left subtree < root node <= right subtree**

## Advantages of BST

* Better off than binary trees because time complexity of performing ops reduces
* Since the order of keys in based on parent node, seaching operation is easy
* The alignment of BST also favors Range Queries, which are executed to find values existing between two keys.

## Disadvantage of BST

If all elements of the nodes are greater than or less than the root node, the tree becomes skewed(completely slanted to one side)
Note: Skewness makes the tree a linked list rather than a BST as time complexity is O(n).
THis can be resolved with the conceppt of **Balanced Binary Search Tree**

## Balanced Binary Search Tree

If the height of the left subtree is "m" and the height of the right subtree is "n", then if the value (m - n) equals 0,1 0r -1 then it is a balanced binary search tree.
The trees are designed in a way they self-balance themselves. Trees use rotation as self-balancing algorithm. There are 4 types namely. Left left, Right right, left right and right left

Types of self-balancing trees include B+ trees, B trees, Red Black trees, Priority search trees, Splay trees & AVL trees

## RESOURCE 3

## Tree Traversal - inorder, preorder and postorder

Transversing a node means visiting all the node in a tree. For instance you might want to add all the values in a tree or find the largest node value in a tree. For either of these operations, we will have to transverse through the tree.
Note: Linear data structures eg linked lists, arrays, stacks and queues have a single way to read data. But a hierarchical data structure(tree) has various ways