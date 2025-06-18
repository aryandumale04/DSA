int n = nums.size();
vector<int> positive;
vector<int> negative;

for(int i = 0;i < nums.size();i++){

    if(nums[i]<0){
        //negative number
        negative.push_back(nums[i]);
    }
    else{
        positive.push_back(nums[i]);
    }

}

//rearranging
int pSize = positive.size();
int nSize = negative.size();
if(pSize > nSize ){

    //positive jyada hai 
    for(int i = 0;i < nSize;i++){

        nums[i*2]=positive[i];
        nums[(i*2)+1] = negative[i];
    }

    //remaining positive
    int index = nSize*2;
    for(int i = nSize;i < pSize;i++){
        nums[index]=positive[i];
        index++;
    }
}else{
    //negativce jyada hai 
    for(int i = 0;i < pSize;i++){

        nums[i*2]=positive[i];
        nums[(i*2)+1] = negative[i];
    }

    //remaining positive
    int index = pSize*2;
    for(int i = pSize;i < nSize;i++){
        nums[index]=negative[i];
        index++;
    }

}