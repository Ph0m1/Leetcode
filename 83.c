#include <stdlib.h>
#include <stdio.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head->next=NULL) return head;
    struct ListNode* fp=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* sp=(struct ListNode*)malloc(sizeof(struct ListNode));
    sp=head;
    fp=fp->next;
    while(!fp){
        while(fp->val==sp->val){
            sp->next=fp->next;
            struct ListNode*temp=fp;
            fp=fp->next;
            free(temp);
        }
    }
    return head;

}