#include<iostream>
#include<queue>



using namespace std;



int solve(int *Arr,int n,int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    //Addition of first k size window
    for(int i=0;i<k;i++){

        while(!maxi.empty() && Arr[maxi.back()]<=Arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && Arr[mini.back()]>=Arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);


    }
    int ans=0;
    for(int i=k;i<n;i++){
        ans+=Arr[maxi.front()] + Arr[mini.front()];


        // going in next window
        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();


        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
            

        }

        //addition
        while(!maxi.empty() && Arr[maxi.back()]<=Arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && Arr[mini.back()]>=Arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);

    }
    // make sure to consider last window 
    ans+=Arr[maxi.front()] + Arr[mini.front()];

    return ans;
}
int main (){

    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;





}