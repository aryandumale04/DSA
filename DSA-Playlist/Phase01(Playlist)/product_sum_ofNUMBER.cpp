#include<iostream>
using namespace std;
 int perform(int no){
            int product=1;
            int sum=0;
            int digit;
            int n= no;
            while(n!=0){
                digit=n%10;
                product=digit*product;
                sum=sum+digit;
                n=n/10;
        
     }
     cout<<"The product of digits of number "<<no<<" is "<<product<<endl;
     cout<<"The sum of digits of number "<<no<<" is "<<sum<<endl;
     cout<<"The difference between product and sum of digits of the number is :"<<product-sum<<endl;
 }
int main()
{
    
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    perform(no);
    return 0;
   
}
 