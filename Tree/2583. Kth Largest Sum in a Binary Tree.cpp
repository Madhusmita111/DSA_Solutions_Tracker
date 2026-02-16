class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
       vector<long long>arr;

       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
        int s = q.size();
        // vector<long long> ar;
        long long b =0;

        while(s>0){
            TreeNode* nodeVal = q.front();
            // arr.push_back(b);
            q.pop();
            b += nodeVal->val;

            if(nodeVal->left != nullptr){
                q.push(nodeVal->left);
            }
            if(nodeVal->right != nullptr){
                q.push(nodeVal->right);
            }
            s--;
        }
       arr.push_back(b);
       }
       if(arr.size()<k)return -1;
       sort(arr.begin(),arr.end());
       return arr[arr.size()-k];
    }
};
