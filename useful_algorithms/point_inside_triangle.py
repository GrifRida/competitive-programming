# this function verfies if the point point is inside the triangle triangle
# the point point has the for [x, y] where x and y are their 2D coordinates
# and triangle triangle has the form [[x1, y1], [x2, y2], [x3, y3]]
# where xi, yi are 2D coordinates of triangles points
def is_inside(point,triangle):
	for i in range(3):
		j = (i + 1) % 3
		k = (i + 2) % 3
		if triangle[j][0] == triangle[k][0]:
			if (point[0] - triangle[j][0]) * (triangle[i][0] - triangle[j][0]) < 0:
				return False
		else:
			a = (triangle[j][1] - triangle[k][1])/(triangle[j][0] - triangle[k][0])
			b = triangle[j][1] - a * triangle[j][0]
			v1 = point[1] - a * point[0] - b 
			v2 = triangle[i][1] - a * triangle[i][0] - b 
			if v1 * v2 < 0:
				return False
	return True
