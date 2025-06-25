class Solution {
public:
    void reverseArray(vector <int> & nums , int start , int end){
        int i = start;
        int j = end;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
    }
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        //step 01 : find longest prefix 
        for(int i = nums.size()-2;i >= 0;i--){

            if (nums[i] < nums[i+1]){
                index = i;
                break;
            }

        }
        if(index == -1){
            reverseArray(nums,0,nums.size()-1);
            return ;
            

        }

        // find greater than index which is minimum 
        for(int i = nums.size()-1;i > index ;i--){
            if (nums[i] > nums[index]){
                swap (nums[i],nums[index]);
                break;
            }

        }

        // sort remaining 
         reverseArray(nums,index+1,nums.size()-1);
         
        

        
    }
};