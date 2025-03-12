class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size() - 1);
    }

    TreeNode* buildTree(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;  //遞迴終止條件

        int mid = left + (right - left) / 2;  //取得中間索引
        TreeNode* root = new TreeNode(nums[mid]);  //建立根節點

        //遞迴構造左右子樹
        root->left = buildTree(nums, left, mid - 1);
        root->right = buildTree(nums, mid + 1, right);

        return root;
    }
};
