#include <stdio.h>
#include <stdlib.h>
#define NULL 
struct ListNode 
{
    int val ;
    struct ListNode *next ;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{ 
struct ListNode *head , *newlist ;
int  carry =0 ; 
int sum ;
head = (struct ListNode *)malloc(sizeof(struct ListNode));
head -> next  = NULL;
newlist = head ;
while(l1 != NULL || l2 != NULL || carry != 0 )
{
    newlist->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    sum = (((l1 != NULL) ? (l1-> val): 0) + ((l2 != NULL) ? (l2-> val) : 0)) + carry ;
    carry = sum / 10 ;
    newlist->val = sum %10 ;

    if (l1 != NULL)
    {
        l1 = l1 ->next ;
    }
    if (l2 != NULL)
    {
        l2 = l2->next ;
    }
    newlist = newlist->next ; 
    newlist->next = NULL ;
}
return head ;
}
// int main ()
// {
//     struct ListNode *head ;
//     int n ;
//     scanf("%d",&n);

// }
// this is the output for the following code 
// l1 =
// [2,4,3]
// l2 =
// [5,6,4]
// Output
// [7,0,8,-1094795586]
// Expected
// [7,0,8]