class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          
          int j = 0;//position for non zero elemets
          //to move zeros we will traverse the entire array
          for(int i=0;i<arr.size();i++){
              
              if(arr[i]!=0){
                  swap(arr[i],arr[j]);
                  j++;
                  //next zero element next index pe 
              }
              
              
              
          }
        }
    };