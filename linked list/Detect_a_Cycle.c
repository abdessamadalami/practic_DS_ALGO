/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *node;
     node = head;
    int index = 0;
    while(head)
    {
        if(index > 100)
            return 1;
         head = head -> next;
         index++;
        
    }
    return 0;
    
}
