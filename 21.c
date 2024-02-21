#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;

    struct ListNode* current = dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    struct ListNode* mergedList = dummy->next;
    free(dummy); 
    return mergedList;
}