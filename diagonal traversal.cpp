void solve(Node* root, map<int,vector<int>>&m, int w)
{
    if(root==NULL)return;
    m[w].push_back(root->data);
    solve(root->left,m,w+1);
    solve(root->right,m,w);
}
vector<int> diagonal(Node *root)
{
   // your code here
   map<int,vector<int>>m;
   solve(root,m,0);
   vector<int>res;
   for(auto it:m){
       for(auto j:it.second)res.push_back(j);
   }
   
   return res;
}