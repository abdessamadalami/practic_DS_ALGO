/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) 
{
    DoublyLinkedListNode *node;
    DoublyLinkedListNode *list;
    DoublyLinkedListNode *node1;
    
    node = malloc(1* sizeof(DoublyLinkedListNode*));
    list = llist;
    
    while (list  != NULL) 
    {
      if (list -> data > data)
      {
          node -> data = data;
          node -> next = list;
          
          if (list -> prev != NULL)
          {
              node -> prev = list -> prev;
             list -> prev -> next = node;
             return llist;
          }
          else
          {
              node -> prev = 0;
              list -> prev = node;
              return node;
          }
         break;
      }
      node1 = list;
      list = list -> next;
    }
         node -> data = data;
         node -> next = 0;
         node -> prev = node1;
         node1 -> next = node;
    return llist;
}

