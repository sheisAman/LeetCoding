// https : //leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/636/week-1-september-1st-september-7th/3966/

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *small_ans = reverseList(head->next);

        ListNode *save = head->next;
        save->next = head;
        save->next->next = NULL;
        return small_ans;
    }
};