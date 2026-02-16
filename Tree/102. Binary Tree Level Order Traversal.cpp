class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer = {};
        if(root == NULL){
            return answer;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.size() > 0){
            vector<int> cr = {};
            int size = q.size();
            while(size>0){
                TreeNode* topnode = q.front();
                q.pop();
                cr.push_back(topnode->val);
                if(topnode->left != NULL){
                    q.push(topnode->left);
                }
                if(topnode->right != NULL){
                    q.push(topnode->right);
                }
                size--;
            }
            answer.push_back(cr);
        }
        return answer;
    }
};
