from queue import Queue
# Creating a dictionary list for the graphical question
adj_list = {
    "A": ["B", "D"],
    "B": ["A", "C"],
    "C": ["B"],
    "D": ["A", "E", "F"],
    "E": ["D", "F", "G"],
    "F": ["D", "E", "H"],
    "G": ["E", "H"],
    "H": ["F", "G"],
}
visited = {}
level = {}
queue = Queue()
parent = {}
bfs_travel_output = {}
for node in adj_list.keys():
    visited[node] = False
    parent[node] = None
    level[node] = -1
root = "A"
level[root] = 0
visited[root] = True
queue.put(root)  # push the root into the queue
# for popping the visited node and put it in the visited list
while not queue.empty():
    u = queue.get()
    bfs_travel_output.append(u)  # this is to store visited node
    for v in adj_list[u]:
        if not visited[v]:
            visited[v] = True
            parent[v] = u
            level[v] = level[u] + 1
            queue.put(v)
print(bfs_travel_output)
