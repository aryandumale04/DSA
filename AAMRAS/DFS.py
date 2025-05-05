#taking graph as input 
graph={}
Node=int(input("Enter the number of nodes in graph : "))
for i in range (Node):
    node=input("Enter the node : ").strip()
    neighbours=input(f"Enter the neighbours of {node} (separated-by-space): ").strip()
    if(neighbours)=="":
        graph[node]=[]
    else :
        graph[node]=neighbours.split()


#dfs
visited=set()
def DFS(graph,visited,node):
    if node not in visited :
        print(node,end=" ")
        visited.add(node)
        for neighbour in graph[node]:
            DFS(graph,visited,neighbour)
            
star_node=input("ENTER THE START NODE : ")
if star_node not in graph:
    print(f"{star_node} is not present in the graph !!")
else:
    DFS(graph,visited,star_node)
    
#remaining nodes
for node in graph:
    if node not in  visited :
        DFS(graph,visited,node)
        
