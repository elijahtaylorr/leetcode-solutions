# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        prev = head
        while (prev and prev.next != None):
            if (prev.next.val == prev.val):
                prev.next = prev.next.next
                continue
            prev = prev.next
        return head
