def twoSum(nums, target):
    '''
    Problem: Given an array of ints and a 
    target value, find the two
    elements in the arrya that 
    sum to the target
    
    Solution: For each item in the array, 
    check if the value necessary to reach
    target is in the value2 output
    map. If not, add the target and its 
    index to the map
    '''
    
    num2s = dict()
    for i, num in enumerate(nums):
        if target-num in num2s:
            return [i, num2s[target-num]]
        else:
            num2s[num]=i
    return 0

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
def addTwoNums(l1, l2):
    '''
    Problem: Given two non-empty linked lists
    with digits stored in reverse order, add
    the numbers represented by the lls and 
    return the sum

    Solution: For each ll node, add values
    and carry, mod result by 10 and store
    to next node, divide by 10 and store 
    to carry over, return first node
    '''
    topNode = result = ListNode(0)
    carry = 0
    while l1 or l2 or carry:
        if l1:
            v1 = l1.val
            l1 = l1.next
        if l2:
            v2 = l2.val
            l2 = l2.next
        v3 = v1+v2+carry
        carry = v3//10
        result.next = ListNode(v3)
    return topNode.next

####################################################################

print(twoSum([1,2,3,4,5],6))
print(addTwoNums(ListNode(val=2), ListNode(val=2)).val)
