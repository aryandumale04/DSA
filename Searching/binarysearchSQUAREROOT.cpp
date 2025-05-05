#include<iostream>
using namespace std;
    long long int binarysearch(int n){
                int s=0;
                int e=n;
                long long int mid=s+(e-s)/2;
                int ans=-1;
                while(s<=e){
                    long long int sq=mid*mid;
                    if(sq==n){
                        return mid;

                    }

                    if(sq<n){
                        ans=mid;
                        s=mid+1;
                    }
                    else{
                        e=mid-1;

                    }
                    mid=s+(e-s)/2;

                }
                return ans;

            }

double floatpr(int n,int precision,int temp){
    double fact=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        fact=fact/10;
        for(double j=ans;j*j<n;j=j+fact){
            ans=j;
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int temp=binarysearch(n);
    cout<<"Answer is :"<<floatpr(n,3,temp);







    return 0;
}