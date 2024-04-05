class Node:
    def __init__(self, data):
        self.data = data
        self.left = None  # მარცხენა შვილობილის მისამართი
        self.right = None  # მარჯვენა შვილობილის მისამართი

class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self, data):
        # Insert ამატებს ახალ ნოუდს
        if self.root is None:
            # თუ ხე ცარიელია შექმენი ახალი ნოუდი და ის იყოს საწყისი ანუ ფესვი
            self.root = Node(data)
        else:
            # სხვა შემთხვევისთვის გამოიყენე recursive helper function მონაცემის ჩამატებისთვის
            self._insert_recursive(data, self.root)

    def _insert_recursive(self, data, node):
        if data < node.data:
            # თუ data ნაკლებია ნოუდზე წადი მარცხნივ
            if node.left is None:
                node.left = Node(data)
            else:
                self._insert_recursive(data, node.left)
        elif data > node.data:
            # თუ data ნაკლებია ნოუდზე წადი მარცხნივ
            if node.right is None:
                # თუ მარჯვენა შვილობილი არის  None, შექმენი ახალი node როგორც right child
                node.right = Node(data)
            else:
                self._insert_recursive(data, node.right)
        else:
            # Duplicate value
            pass

    def search(self, data):
        # მეთოდი რომ ვიპოვოთ მოცემული მონაცემი ხეში
        return self._search_recursive(data, self.root)

    def _search_recursive(self, data, node):
        if node is None:
            # თუ node არის None, მონაცემი ვერ იპოვა
            return False
        elif data == node.data:
            # თუ მონაცემი იპოვა, data found
            return True
        elif data < node.data:
            # If data is less than current node's data, search left subtree
            return self._search_recursive(data, node.left)
        else:
            #  search right subtree
            return self._search_recursive(data, node.right)

    def inorder_traversal(self):
        # Method to perform inorder traversal of the binary tree
        return self._inorder_recursive(self.root)

    def _inorder_recursive(self, node):
        # Recursive helper function to perform inorder traversal
        if node is not None:
            # Traverse left subtree
            self._inorder_recursive(node.left)
            # Print current node's data
            print(node.data, end=' ')
            # Traverse right subtree
            self._inorder_recursive(node.right)

if __name__ == "__main__":
    tree = BinaryTree()
    tree.insert(5)
    tree.insert(3)
    tree.insert(7)
    tree.insert(2)
    tree.insert(4)

    print("Inorder Traversal:")
    tree.inorder_traversal()

    print("\nSearching for 4:", tree.search(4))
    print("Searching for 6:", tree.search(6))
