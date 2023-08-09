class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None
        self.prev = None
        self.next = None

class DoubleThreadedBST:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if self.root is None:
            self.root = TreeNode(val)
        else:
            curr = self.root
            prev = None
            while curr:
                prev = curr
                if val < curr.val:
                    if curr.left is None:
                        curr.left = TreeNode(val)
                        curr.left.next = prev
                        prev.prev = curr.left
                        return
                    else:
                        curr = curr.left
                else:
                    if curr.right is None:
                        curr.right = TreeNode(val)
                        curr.right.prev = curr
                        if curr.next:
                            curr.next.prev = curr.right
                            curr.right.next = curr.next
                        curr.next = curr.right
                        return
                    else:
                        curr = curr.right

    def search(self, val):
        curr = self.root
        while curr:
            if val == curr.val:
                return curr
            elif val < curr.val:
                curr = curr.left
            else:
                curr = curr.right
        return None

    def inorder_traversal(self):
        result = []
        curr = self.root
        while curr:
            if curr.left:
                pred = curr.left
                while pred.right and pred.right != curr:
                    pred = pred.right
                if not pred.right:
                    pred.right = curr
                    curr = curr.left
                else:
                    pred.right = None
                    result.append(curr.val)
                    curr = curr.right
            else:
                result.append(curr.val)
                curr = curr.right
        return result

    def preorder_traversal(self):
        result = []
        self._preorder_helper(self.root, result)
        return result

    def _preorder_helper(self, node, result):
        if node:
            result.append(node.val)
            self._preorder_helper(node.left, result)
            self._preorder_helper(node.right, result)

    def postorder_traversal(self):
        result = []
        self._postorder_helper(self.root, result)
        return result

    def _postorder_helper(self, node, result):
        if node:
            self._postorder_helper(node.left, result)
            self._postorder_helper(node.right, result)
            result.append(node.val)
    

if __name__ == "__main__":
    bst = DoubleThreadedBST()
    n = int(input())
    nodes = list(map(int, input().split()))
    for node in nodes:
        bst.insert(node)
    inorder = bst.inorder_traversal()
    preorder = bst.preorder_traversal()
    postorder = bst.postorder_traversal()
    print(" ".join(map(str, inorder)))
    print(" ".join(map(str, preorder)))
    print(" ".join(map(str, postorder)))