vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>s;
        TreeNode* curr=root;
        while(curr!=NULL||!s.empty())
        {
            if(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            else{
                TreeNode* temp = s.top()->right;
                if(temp==NULL)
                {
                    temp=s.top();
                    s.pop();
                    res.push_back(temp->val);
                    while(!s.empty()&&s.top()->right==temp)
                    {
                        temp=s.top();
                        s.pop();
                        res.push_back(temp->val);
                    }
                }
                else{
                    curr=temp;
                }
            }
            

        }
        return res;
    }
