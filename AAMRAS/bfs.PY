#taaking graph as input 
graph={}
nodes=int(input("Enter the number of nodes in graph : "))
for i in range(nodes):
    node=input("Enter the node : ").strip()
    neighbours=input(f"Enter the neighbour of {node} (separated-by-space) : ").strip()
    if neighbours == "":
        graph[node]=[]
    else:
        graph[node]=neighbours.split()
#bfs
visited =[]
queue=[]
def BFS(graph,visited,node):
    if node not in visited :
        visited.append(node)
        queue.append(node)
        while queue :
            node=queue.pop(0)
            print(node,end=" ")
            for neighbour in graph[node]:
                if neighbour not in visited :
                    visited.append(neighbour)
                    queue.append(neighbour)
                    
start_node=input("Enter the start node : ")
BFS(graph,visited,start_node)

#remaining nodes
for  node in graph:
    if node not in visited:
        
        BFS(graph,visited,node)
    
             
        
    