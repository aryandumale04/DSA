#include<iostream>
#include<queue>
using namespace std;
int main(){

    // MAX_HEAP
    // priority_queue<int> pq;//default pq is max hk8 eap
    // pq.push(1);
    //   pq.push(4);
    //     pq.push(69);
    //       pq.push(99);
    //         pq.push(0);
    //         int size=pq.size();
    // for(int i=0;i<size;i++){//jitne size hai =jitne elements hai queue me utne baar chalana hai loop ko (though not optimized way ,!=empty would be good)
    //     cout<<pq.top()<<" ";
    //     pq.pop();//pop hamesha greatest element hoga
    //         }
    // cout<<endl;



    //MIN-HEAP
    priority_queue<int ,vector<int>,greater<int>> mini;
       mini.push(1);
      mini.push(4);//push kaunse bhi order me karo matter nhi karta
        mini.push(69);
          mini.push(99);
            mini.push(0);
            int size=mini.size();
    for(int i=0;i<size;i++){//jitne size hai =jitne elements hai queue me utne baar chalana hai loop ko (though not optimized way ,!=empty would be good)
        cout<<mini.top()<<" ";
        mini.pop();//pop hamesha least element hoga
            }
    cout<<endl;

    return 0;
}