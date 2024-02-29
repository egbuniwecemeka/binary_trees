class Node:
    def __init__(self, item):
        self.left = None
        self.right = None
        self.val = item

def inorder(root):
    if root:
        inorder(root.left)
        print(str(root.val) + "=>", end='')
        inorder(root.right)
        
def preorder(root):
    if root:
        print(str(root.val) + "=>", end='')
        preorder(root.left)
        preorder(root.right)

def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(str(root.val) + "=>", end='')

root = Node(2)
root.left = Node(5)
root.right = Node(4)
root.left.left = Node(6)
root.left.right = Node(8)

print("Inorder traversal")
inorder(root)

print("\nPreorder traversal")
preorder(root)

print("\nPostorder traversal")         
postorder(root)
        