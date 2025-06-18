void maxSum(int vector){
    int maxSum = INT_MIN;
    int maxSumArrayStart = -1;
    int maxSumArrayEnd = -1;
    int start = -1;
    int sum = 0;

    //traversing the array
    for(int i = 0;i < nums.size();i++){

        if(sum == 0){
            start = i;
        }
        sum = nums[i];
        if(sum > maxi){
            maxi = sum;
            maxSumArrayStart = start;
            maxSumArrayEnd = i;

        }
        
    }
    if(sum < 0){
        return 0;
    }
    else{
        return maxi;
    }
    cout<<"The Sub array with maximum sum is as follows : ";
    for(int i = maxSumArrayStart;i <= ;i++){
        cout<<nums[i]<<" ";

    }
}