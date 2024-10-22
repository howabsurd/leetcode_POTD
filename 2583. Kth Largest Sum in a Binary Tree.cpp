 #define ll long long
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<ll, vector<ll>, greater<>> sum;
        queue<TreeNode*> pq;
        pq.push(root);
        while(pq.empty()==false){
            int sz = pq.size();
            ll tempSum = 0;
            for (int i=0;i<sz;i++){
            TreeNode * temp = pq.front();
            pq.pop(); tempSum += temp->val;
            if(temp->left) pq.push(temp->left);
            if(temp->right) pq.push(temp->right);
            }
            sum.push(tempSum);
            if (sum.size()>k) sum.pop();
        }
        return (sum.size()<k)?-1:sum.top();
    }
};