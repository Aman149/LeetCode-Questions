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
    
    private int maxHelper(TreeNode root, ref int maxPathSum) {
        if(root == null)
            return 0;
        int lh = maxHelper(root.left,ref maxPathSum);
        int rh = maxHelper(root.right,ref maxPathSum);
        maxPathSum = new int[] { root.val+lh, root.val+rh, root.val+lh+rh, root.val, maxPathSum }.Max();
        return Math.Max(root.val+Math.Max(lh,rh), root.val);
    }
    
    public int MaxPathSum(TreeNode root) {
        int maxPathSum = root.val;
        maxHelper(root,ref maxPathSum);
        return maxPathSum;
    }
}