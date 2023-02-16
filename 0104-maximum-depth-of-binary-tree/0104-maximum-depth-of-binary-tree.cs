/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public int MaxDepth(TreeNode root, int height = 0) {
        if(root == null)
            return 0;
        return (1+Math.Max(MaxDepth(root.left, height+1), MaxDepth(root.right, height+1)));
    }
}