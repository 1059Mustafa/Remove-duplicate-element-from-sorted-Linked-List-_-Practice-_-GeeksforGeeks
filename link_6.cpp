Node *removeDuplicates(Node *root)
{
    if(!root)
    {
        return NULL;
    }
    Node *curr=root;
    while(root->next!=NULL)
    {
        if(root->data==root->next->data)
        {
            root->next=root->next->next;
        }
        else
        {
            root=root->next;
        }
    }
    return curr;
}
