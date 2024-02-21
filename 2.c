void insert(struct ListNode **p1)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->next = NULL;
    p1->next = newNode;
    newNode->val = 0;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    while (p1->next == NULL && p2->next == NULL)
    {
        if (p1->next == NULL && p2->next != NULL)
        {
            insert(&p1);
        }
        if (p1->next != NULL && p2->next == NULL)
        {
            insert(&p2);
        }

        p1->val += p2->val;
        if(p1->val>9){
            if(p1->next==NULL){
                insert(p1);
                p1->next->val = 1;
                p1->val -= 10;
                return p1;
            }
            p1->next->val = 1;
            p1->val -= 10;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}