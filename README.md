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