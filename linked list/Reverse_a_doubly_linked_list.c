/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist)
{
    DoublyLinkedListNode *node;
    DoublyLinkedListNode *list;
    
    while (llist -> next)
        llist = llist -> next;
    
    llist -> next = llist -> prev;
    llist -> prev = 0;
    list = llist;
    llist = llist -> next;
      
    while (llist)
    {
        node = llist -> next;
        llist -> next = llist -> prev;
        llist -> prev = node;
        llist = llist -> next;
    }
    return list;
}

