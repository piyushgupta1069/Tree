int solve(Node* root,int &res)
    {
        if(root==NULL)return 0;
        int lh = solve(root->left,res);
        int rh = solve(root->right,res);
        res=max(res,lh+rh+1);
        return max(lh,rh)+1;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int res=0;
        solve(root,res);
        return res;
    }
