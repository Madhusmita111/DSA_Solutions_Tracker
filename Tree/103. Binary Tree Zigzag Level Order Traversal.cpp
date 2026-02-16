class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag = false;
        vector<vector<int>>arr;
        if(!root)return arr;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            vector<int>res;
            int s = q.size();
            int x=s;
            while(s>0){
                TreeNode* value = q.front();
                q.pop();
                res.push_back(value->val);

                if(value->left != nullptr)q.push(value->left);
                if(value->right != nullptr)q.push(value->right);
                s--;
            }
                if(flag)
                    reverse(res.begin(),res.end());

                arr.push_back(res);
                flag = !flag;
        }
        return arr;
    }
};
