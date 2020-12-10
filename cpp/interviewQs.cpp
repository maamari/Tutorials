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
            return result;
        }
        num2s[nums[i]]=i; 
    }
    return {-1,-1};
}

int main(){
    vector<int> nums{1,2,3,4,5};
    int target = 6;
    twoSum(nums, target);

    return 0;
}
