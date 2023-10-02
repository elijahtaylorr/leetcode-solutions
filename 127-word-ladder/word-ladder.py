class Solution(object):
    def ladderLength(self, beginWord, endWord, wordList):
        return(find_path(beginWord,endWord,wordList))
        

# Class that represents a graph
class Graph:

    # Constructor for graph
    def __init__(self):
        self.graph = {}
    
    # Function to add nodes and edges to graph
    def addEdge(self, dictionary, length):
        for word in dictionary:
            for i in range(len(word)):
                key = word[:i] + '*' + word[i + 1:]
                if key in self.graph:
                    self.graph[key].add(word)
                else:
                    self.graph[key] = set()
                    self.graph[key].add(word)

    # Function perform Breadth First Search until optimal path is found
    def BFS(self, start, end):
        queue = [[start]]
        visited = set()

        while queue:
            # Fetch the first path in queue
            path = queue.pop(0)

            # Last node checked in path
            node = path[-1]

            if node == end:
                # If path connected start node and end node -> return path
                return path
            elif node not in visited:
                visited.add(node)
                for i in range(len(node)):
                    key = node[:i] + '*' + node[i + 1:]
                    for neighbour in self.graph.get(key, []):
                        if neighbour not in visited:
                            # Append new node into current path
                            new_path = list(path)
                            new_path.append(neighbour)
                            # Append new path into queue
                            queue.append(new_path)

def find_path(start_word, end_word,dictionary):
    graph = Graph()
    graph.addEdge(dictionary, len(start_word))
    pathSize = graph.BFS(start_word, end_word)
    if (type(pathSize) in (tuple, list)):
        return len(pathSize)
    return 0
    