import sys

#defining the function 
def PRIMS_algo(graph):
    n=len(graph)
    
    selected=[False]*n
    edge_count=0
    selected[0]=True
    
    print("Edges in Minimum Spanning Tree : ")
    
    while edge_count< n-1:
        min_weight=sys.maxsize
        a=b=0
        for i in range(n):
            if selected[i]:
                for j in range(n):
                    if not  selected[j] and graph[i][j]:
                        if graph[i][j]<min_weight:
                            min_weight=graph[i][j]
                            a,b=i,j
        print(f"{a}--{b} : Weight - {min_weight}")
        edge_count+=1
        selected[b]=True
        
graph=[
    [0,2,5,0,0],
    [2,0,1,4,7],
    [5,1,0,0,7],
    [0,4,0,0,3],
    [0,0,7,3,0]
]
PRIMS_algo(graph)
                        
                        
        