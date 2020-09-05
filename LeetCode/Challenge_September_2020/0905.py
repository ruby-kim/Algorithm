# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self, root, curlist):
        if not root:
            return
        self.inorder(root.left, curlist)
        curlist.append(root.val)
        self.inorder(root.right, curlist)

    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        queue1, queue2, ans = deque(), deque(), []
        self.inorder(root1, queue1)
        self.inorder(root2, queue2)

        while queue1 or queue2:
            if not queue2:
                ans.append(queue1.popleft())
            elif not queue1:
                ans.append(queue2.popleft())
            else:
                ans.append(queue1.popleft() if queue1[0] < queue2[0] else queue2.popleft())
                
        return ans
