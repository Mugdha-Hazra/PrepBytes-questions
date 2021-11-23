// Complete the inOrderTraversal function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void inOrderTraversal(node *root)
{
  if(root==NULL)
  return;
  inOrderTraversal(root->left);
  cout<<root->value<<" ";
  inOrderTraversal(root->right);
}
