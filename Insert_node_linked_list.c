/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) 
{
   int index;
   SinglyLinkedListNode *node;
   SinglyLinkedListNode *list;
   SinglyLinkedListNode *tmp;
   
   
   list = llist;
   index = 1;
   
   node = malloc(1* sizeof(SinglyLinkedListNode *) );
    
   while(list != NULL)
   { 
       if(index == position)
        {
            node->data = data;
            node -> next = list -> next;
            list -> next = node;
        } 
        
     index ++;
        list = list -> next;     
   }

   return llist;
}
