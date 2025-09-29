class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
class BinaryTree:
    def __init__(self):
        self.root = None
    
    def add(self, data):
        if self.root is None:
            self.root = Node(data)
        else:
            self.add_recursive(self.root, data)
    
    def add_recursive(self, node, data):
        if data < node.data:
            if node.left is None:
                node.left = Node(data)
            else:
                self.add_recursive(node.left, data)
        else:
            if node.right is None:
                node.right = Node(data)
            else:
                self.add_recursive(node.right, data)
    
    def search_order(self):
        self.search_order_recursive(self.root)
    
    def search_order_recursive(self, node):
        if node is not None:
            self.search_order_recursive(node.left)
            print(node.data, end=" ")
            self.search_order_recursive(node.right)

tree = BinaryTree()
tree.add(7)
tree.add(6)
tree.add(9)
tree.add(5)
tree.add(10)

print("Results in order:")
tree.search_order()