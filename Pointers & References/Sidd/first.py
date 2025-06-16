from collections import defaultdict

def count_cells(line, star_point):
    """Calculate the cells a line contributes to the star."""
    x1, y1, x2, y2 = line
    px, py = star_point

    # Calculate cells for each segment of the line
    if px == x1 == x2 or py == y1 == y2:  # Vertical or horizontal through the star
        return abs(y2 - y1) + abs(x2 - x1) + 1
    elif (x1 <= px <= x2 or x2 <= px <= x1) and (y1 <= py <= y2 or y2 <= py <= y1):
        # Line splits into two parts around the star
        d1 = abs(px - x1) + abs(py - y1) + 1
        d2 = abs(px - x2) + abs(py - y2) + 1
        return d1, d2
    else:
        # Full line length if it doesn’t split
        return abs(x2 - x1) + abs(y2 - y1) + 1

def get_intersection(line1, line2):
    """Calculate intersection point if two lines intersect."""
    x1, y1, x2, y2 = line1
    x3, y3, x4, y4 = line2

    # Calculate determinant to check for intersection
    denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
    if denominator == 0:
        return None  # Lines are parallel

    # Calculate intersection point
    px = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / denominator
    py = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / denominator

    # Check if intersection point lies within the bounds of both lines
    if (min(x1, x2) <= px <= max(x1, x2) and min(y1, y2) <= py <= max(y1, y2) and
            min(x3, x4) <= px <= max(x3, x4) and min(y3, y4) <= py <= max(y3, y4)):
        return round(px), round(py)
    return None

def calculate_intensity(lines, k):
    """Calculate total intensity of k-stars."""
    intersections = defaultdict(list)

    # Find all intersections
    for i in range(len(lines)):
        for j in range(i + 1, len(lines)):
            intersection = get_intersection(lines[i], lines[j])
            if intersection:
                intersections[intersection].append((i, j))

    total_intensity = 0

    # Calculate intensity for each intersection point
    for point, intersecting_lines in intersections.items():
        line_indices = set()
        for i, j in intersecting_lines:
            line_indices.add(i)
            line_indices.add(j)

        # Check if the number of intersecting lines matches k
        if len(line_indices) == k:
            intensities = []
            for idx in line_indices:
                cells = count_cells(lines[idx], point)
                if isinstance(cells, tuple):
                    intensities.extend(cells)
                else:
                    intensities.append(cells)
            total_intensity += min(intensities)

    return total_intensity

# Input and Output
if __name__ == "__main__":
    n = int(input().strip())
    lines = []
    for _ in range(n):
        x1, y1, x2, y2 = map(int, input().strip().split())
        lines.append((x1, y1, x2, y2))
    k = int(input().strip())
    result = calculate_intensity(lines, k)
    print(result)
