class Graph:
    def __init__(self):
        self.edges = {}
    
    def add_edge(self, edge):
        if edge not in self.edges:
            self.edges[edge] = []
    
    def add_sides(self, edge1, edge2):
        if edge1 in self.edges and edge2 in self.edges:
            self.edges[edge1].append(edge2)
            self.edges[edge2].append(edge1)
    
    def show_graph(self):
        for edge in self.edges:
            print(f"{edge}: {' '.join(map(str, self.edges[edge]))}")
        
    def find_route(self, start, finish, route=[]):
        route = route + [start]
        if start == finish:
            return route
        if start not in self.edges:
            return None
        for edge in self.edges[start]:
            if edge not in route:
                new_route = self.find_route(edge, finish, route)
                if new_route:
                    return new_route
        return None

graph = Graph()

for edge in range(1, 6):
    graph.add_edge(edge)

graph.add_sides(1, 2)
graph.add_sides(1, 3)
graph.add_sides(2, 4)
graph.add_sides(3, 4)
graph.add_sides(4, 5)
print("Graph structure:")
graph.show_graph()

start, end = 1, 5
route = graph.find_route(start, end)
if route:
    print(f"\nRoute from {start} to {end}: {' -> '.join(map(str, route))}")
else:
    print(f"\nNo route from {start} to {end}")