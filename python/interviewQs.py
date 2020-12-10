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

print(twoSum([1,2,3,4,5],6))
