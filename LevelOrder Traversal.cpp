// Complete the levelOrderTraversal function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/

void levelOrderTraversal(node *root)
{ queue<node *>q;
  q.push(root);
  while(!q.empty())
  {
    auto temp=q.front();
    q.pop();
    cout<<temp->value<<" ";
    if(temp->left!=NULL)
    q.push(temp->left);
    if(temp->right!=NULL)
    q.push(temp->right);
  }
  
}
