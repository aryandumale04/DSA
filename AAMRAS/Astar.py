import heapq

goal_state = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 0]]

def heuristic(state):
    distance = 0
    for i in range(3):
        for j in range(3):
            value = state[i][j]
            if value != 0:
                goal_x, goal_y = divmod(value - 1, 3)
                distance += abs(i - goal_x) + abs(j - goal_y)
    return distance

def get_neighbors(state):
    neighbors = []
    x, y = next((i, j) for i in range(3) for j in range(3) if state[i][j] == 0)
    moves = [(-1,0), (1,0), (0,-1), (0,1)]

    for dx, dy in moves:
        nx, ny = x + dx, y + dy
        if 0 <= nx < 3 and 0 <= ny < 3:
            new_state = [row[:] for row in state]
            new_state[x][y], new_state[nx][ny] = new_state[nx][ny], new_state[x][y]
            neighbors.append(new_state)

    return neighbors

def serialize(state):
    return tuple(tuple(row) for row in state)

def a_star(start_state):
    open_set = []
    heapq.heappush(open_set, (heuristic(start_state), 0, start_state))
    came_from = {}
    g_score = {serialize(start_state): 0}

    while open_set:
        _, cost, current = heapq.heappop(open_set)

        if current == goal_state:
            path = [current]
            while serialize(current) in came_from:
                current = came_from[serialize(current)]
                path.append(current)
            return path[::-1]

        for neighbor in get_neighbors(current):
            tentative_g = g_score[serialize(current)] + 1
            neighbor_serialized = serialize(neighbor)

            if neighbor_serialized not in g_score or tentative_g < g_score[neighbor_serialized]:
                came_from[neighbor_serialized] = current
                g_score[neighbor_serialized] = tentative_g
                f_score = tentative_g + heuristic(neighbor)
                heapq.heappush(open_set, (f_score, tentative_g, neighbor))

    return None

start_state = [[1, 2, 3],
               [4, 0, 6],
               [7, 5, 8]]

solution_path = a_star(start_state)

for step in solution_path:
    for row in step:
        print(row)
    print()
