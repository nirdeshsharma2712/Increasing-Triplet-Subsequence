class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1 = INT_MAX , num2 = INT_MAX , num3;
        for(int i=0;i<nums.size();i++){
            num3 = nums[i];
            if(num1>=num3){
                num1 = num3;
            }
            else if(num2>=num3){
                num2 = num3;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
