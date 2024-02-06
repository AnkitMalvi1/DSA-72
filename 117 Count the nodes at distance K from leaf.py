from collections import deque

class Solution:
    #Function to return count of nodes at a given distance from leaf nodes.
    def __init__(self):
        self.result = 0
        
    def printKDistantfromLeaf(self, root, k):
        queue = deque([(root, [], 0)])  # (node, path, distance)
        leaf_paths = []

        while queue:
            node, path, distance = queue.popleft()

            if not node.left and not node.right:
                leaf_paths.append((path + [node], distance + 1))
                continue

            if node.left:
                queue.append((node.left, path + [node], distance + 1))

            if node.right:
                queue.append((node.right, path + [node], distance + 1))

        return len(set([path[-k - 1] for path, distance in leaf_paths if distance - 1 >= k]))

