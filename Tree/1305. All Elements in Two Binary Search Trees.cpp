class Solution {
public:
    vector<int> merge(vector<int>& res, vector<int>& ans, vector<int>& final){
        int i=res.size()-1, j = ans.size()-1;
        while(i>=0 && j>=0){
            if(res[i] > ans[j])
        }
    }
    void inorder(TreeNode* root,vector<int>& res){
        if(!root)return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> res;
        inorder(root1,res);
        vector<int>ans
        inorder(root2,ans);

        vector<int>final;
        sort(res.begin(),res.end());
        return res;


    }
};
