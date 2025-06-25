#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std ;
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {

        vector<int> ans ;
        int max = INT_MIN; // ab tak ka max
        for(int i = nums.size()-1; i>=0; i--){

            if(nums[i] > max){
                // isse bada koi nahi hai right me 
                max = nums[i];
                ans.push_back(nums[i]);
            }
           

        }
        reverse(ans.begin(),ans.end());
        return ans ;

      
    }
};
int  main (){

    vector<int> v = {-3, 4, 5, 1, -4, -5};
    Solution s1 ;
    vector<int> result = s1.leaders(v);
    for (int i : result){
        cout<<i<< " ";
    }


}