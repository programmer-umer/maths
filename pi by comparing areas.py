x_s, y_s = 0, 0
x_e, y_e = 49, 49

c_x, c_y = 25, 25
c_r = 25

points_in_square = []
points_in_circle = []

def distance(x1, y1, x2, y2):
    return (x2 - x1) ** 2 + (y2 - y1) ** 2

for j in range(y_s, y_e+1):
    for i in range(x_s, x_e+1):
        points_in_square.append((i, j))

for point in points_in_square:
    if distance(point[0], point[1], c_x, c_y) <= c_r ** 2:
        points_in_circle.append(point)

pi = (4 * len(points_in_circle)) / len(points_in_square)

print(pi)