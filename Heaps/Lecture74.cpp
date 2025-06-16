#include<iostream>
using namespace std;

class Heap{

    public:
        int arr[100];
        int size;
        Heap(){
            arr[0]=-1;
            size=0;

        }

        void insert(int val)
        {
            size=size+1;
            int index=size;
            arr[index]=val;

            while(index>1){
                int parent=index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index=parent;

                }
                else{
                    return;
                }
            }
        }

        void print(){
            for (int i=1;i<=size;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }
        
        void deleteNode(){
            if(size==0){
                cout<<"Nothing to delete!"<<endl;
                return;
            }
            //step01 last at first 
            arr[1]=arr[size] ;

            size--;

            //shai jagah par pahuchana hai root ko
            int i=1;
            while(2*i<=size){

                int leftIndex=2*i;
                int rightIndex=(2*i)+1;
                int largest = i;

                if(arr[largest]<arr[leftIndex]){
                   largest=leftIndex;

                }
                if(rightIndex<size && arr[largest]<arr[rightIndex]){
                    largest=rightIndex;
                }
                if(largest!=i){
                    swap(arr[i],arr[largest]);
                    i=largest;
                }
                else{
                    break;
                    

                }

            }

        }
    };
int main(){

    Heap h1;
    h1.insert(50);
    h1.insert(55);

    h1.insert(53);
    h1.insert(52);
    h1.insert(54);
    h1.print();

    h1.deleteNode();
    h1.print();



    return 0;
    
}