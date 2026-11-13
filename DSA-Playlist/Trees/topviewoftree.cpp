vector<int> ans(Node *root){


vector<int> result;
map<int,int> nodesl;
queue<pair<Node*, int>>q;

//base case
if(root==NULL){
    return result;
}
q.push(make_pair(root,0));
while(!q.empty()){

    //processing for all nodes
    pair<Node *,int> temp = q.front();
    Node *frontNode=temp.first;
    int hd=temp.second;

    q.pop();
    if(nodesl.find(hd)==nodesl.end()){
        nodesl[hd]=frontNode->data;

    }
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));

    }
    if(frontNode->right){
        q.push(make_pair(frontNode->right,hd+1));
        
    }




}
for(auto i: nodesl){
    result.push_back(i.second);
}















    return result;
}