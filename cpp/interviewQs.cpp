#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
	unordered_map<int, int> num2s;
    vector<int> result;
	for(int i=0; i<nums.size(); i++){
		if(num2s.count(target-nums[i])){
			result.push_back(i);
            result.push_back(num2s[target-nums[i]]);
            for(int j=0; j<result.size(); j++){
                cout << result[j] << ' ';
            }
            cout << endl;
            return result;
        }
        num2s[nums[i]]=i; 
    }
    return {-1,-1};
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* addTwoNums(ListNode* l1, ListNode* l2){
    ListNode *head = new ListNode(0);
    ListNode *result = head;
    int carry = 0;
    while(l1 || l2 || carry){
        int v1 = 0, v2 = 0, v3 = 0;
        if(l1){
            v1 = l1->val;
            l1 = l1->next;
        }
        if(l2){
            v2 = l2->val;
            l2 = l2->next;
        }
        v3 = v1+v2+carry;
        carry = v3/10;
        result->next = new ListNode(v3%10);
        result = result->next;
    }
    cout << head->next->val << endl;
    delete head;
    delete result;
    //return head->next;
}

int main(){

    // Two sum   
    vector<int> nums{1,2,3,4,5};
    int target = 6;
    twoSum(nums, target);

    // Add two nums
    addTwoNums(new ListNode(1), new ListNode(2));

    return 0;
}
