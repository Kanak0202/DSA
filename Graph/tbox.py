from collections import defaultdict, deque

def unlock_levels(num_levels, dependencies):
    unlocked_levels = []
    in_degree = [0] * (num_levels + 1)
    graph = defaultdict(list)
    for level in dependencies:
        for dep in dependencies[level]:
            in_degree[level] += 1
            graph[dep].append(level)
    queue = deque()
    for level in range(1, num_levels + 1):
        if in_degree[level] == 0:
            queue.append(level)

    while queue:
        level = queue.popleft()
        unlocked_levels.append(level)

        for dep in graph[level]:
            in_degree[dep] -= 1
            if in_degree[dep] == 0:
                queue.append(dep)

    if len(unlocked_levels) == num_levels:
        return unlocked_levels
    else:
        return None



num_levels = int(input())
dependencies = {}

for _ in range(num_levels):
    level, *deps = map(int, input().split())
    if level not in dependencies:
        dependencies[level] = []
    if deps != [-1]:
        dependencies[level] += deps


unlocked_levels = unlock_levels(num_levels, dependencies)


if unlocked_levels:
    print(" ".join(map(str, unlocked_levels)))
else:
    print("It is not possible to unlock all levels in the given order.")