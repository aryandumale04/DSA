#find parent
def find_parent(parent,vertex):
    if(parent[vertex]==vertex):
        return vertex
    return find_parent(parent,parent[vertex])


#combine two different groups
def combine(parent,u,v):
    parent_u=find_parent(parent,u)
    parent_v=find_parent(parent,v)
    parent[parent_v]=parent_u
    
    
#kruskals algorit
def KRUS_algo(n,edges):
    edges.sort(key=lambda x :x[2])
    parent=[i for i in range(n)]
    mast=[]
    print("Edges in  MST : ")
    
    for u,v,weight in edges :
        if(find_parent(parent,u)!=find_parent(parent,v)):
            combine(parent,u,v)
            mast.append((u,v,weight))
            print(f"{u}--{v} : Weight - {weight}")
#input 
n=5
edges=[
    (0,1,2),
    (0,2,5),
    (1,3,4),
    (1,2,1),
    (2,4,7),
    (3,4,3)
]
    
            
        
KRUS_algo(n,edges);    