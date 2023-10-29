#!/usr/bin/python3
"""
Define the function for island_perimeter
"""

def island_perimeter(grid):
	"""
 	Calculate perimeter of island in the grid

	Args:
		grid (List[int]): A list of lists
	Return:
		int: Perimeter of island
	"""
	rows = len(grid)
	if rows == 0:
		return 0

	cols = len(grid[0])
	perimeter = 0

	for r in range(rows):
		for c in range(cols):
			if grid[r][c] == 1:
				perimeter += 4

				#Check Adjacent Cells
				if r > 0 and grid[r - 1][c] == 1:
					perimeter -= 2
				if c > 0 and grid[r][c-1] == 1:
					perimeter -= 2
	return perimeter
