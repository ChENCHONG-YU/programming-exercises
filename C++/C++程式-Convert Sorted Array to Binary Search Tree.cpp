class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildTree(nums, 0, nums.size() - 1);
    }

    TreeNode* buildTree(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;  //���j�פ����

        int mid = left + (right - left) / 2;  //���o��������
        TreeNode* root = new TreeNode(nums[mid]);  //�إ߮ڸ`�I

        //���j�c�y���k�l��
        root->left = buildTree(nums, left, mid - 1);
        root->right = buildTree(nums, mid + 1, right);

        return root;
    }
};
