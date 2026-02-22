class Solution {
public:
    void inorder(TreeNode* root, vector<int> &res){
        if(!root)return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> res;
        inorder(root, res);

        int i=0, j = res.size()-1;
        while(i<j){
            if(res[i]+res[j] == k){
                return true;
            }else if(res[i]+res[j] > k){
                j--;
            }else{
                i++;
            }
        }
        return false;

    }
};
