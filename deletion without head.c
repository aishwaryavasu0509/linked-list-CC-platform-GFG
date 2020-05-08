// { Driver Code Starts
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
void deleteNode(Node *node)
{
    if(!node->next)
    {
        return;
    }
   Node *del=node->next;
   node->data=del->data;
   node->next=del->next;
   free(del);
}


