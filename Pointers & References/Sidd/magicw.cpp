#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Function to calculate the cells a line contributes to the star
pair<int, int> count_cells(pair<int, int, int, int> line, pair<int, int> star_point) {
    int x1 = get<0>(line), y1 = get<1>(line), x2 = get<2>(line), y2 = get<3>(line);
    int px = star_point.first, py = star_point.second;

    // If the line is vertical or horizontal through the star
    if (px == x1 && x1 == x2 || py == y1 && y1 == y2) {
        return {abs(y2 - y1) + abs(x2 - x1) + 1, -1};
    }
    else if ((x1 <= px && px <= x2 || x2 <= px && px <= x1) &&
             (y1 <= py && py <= y2 || y2 <= py && py <= y1)) {
        // If the line splits into two parts around the star
        int d1 = abs(px - x1) + abs(py - y1) + 1;
        int d2 = abs(px - x2) + abs(py - y2) + 1;
        return {d1, d2};
    } else {
        // Full line length if it doesn’t split
        return {abs(x2 - x1) + abs(y2 - y1) + 1, -1};
    }
}

// Function to calculate the intersection point if two lines intersect
pair<int, int> get_intersection(pair<int, int, int, int> line1, pair<int, int, int, int> line2) {
    int x1 = get<0>(line1), y1 = get<1>(line1), x2 = get<2>(line1), y2 = get<3>(line1);
    int x3 = get<0>(line2), y3 = get<1>(line2), x4 = get<2>(line2), y4 = get<3>(line2);

    // Calculate determinant to check for intersection
    int denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    if (denominator == 0) {
        return {-1, -1};  // Lines are parallel
    }

    // Calculate intersection point
    double px = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / (double)denominator;
    double py = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / (double)denominator;

    // Check if the intersection point lies within the bounds of both lines
    if ((min(x1, x2) <= px && px <= max(x1, x2) && min(y1, y2) <= py && py <= max(y1, y2)) &&
        (min(x3, x4) <= px && px <= max(x3, x4) && min(y3, y4) <= py && py <= max(y3, y4))) {
        return {round(px), round(py)};
    }
    return {-1, -1};
}

// Function to calculate total intensity of k-stars
int calculate_intensity(vector<pair<int, int, int, int>> lines, int k) {
    map<pair<int, int>, vector<pair<int, int>>> intersections;

    // Find all intersections
    for (int i = 0; i < lines.size(); i++) {
        for (int j = i + 1; j < lines.size(); j++) {
            pair<int, int> intersection = get_intersection(lines[i], lines[j]);
            if (intersection.first != -1) {
                intersections[intersection].push_back({i, j});
            }
        }
    }

    int total_intensity = 0;

    // Calculate intensity for each intersection point
    for (auto& entry : intersections) {
        pair<int, int> point = entry.first;
        vector<pair<int, int>> intersecting_lines = entry.second;
        set<int> line_indices;

        for (auto& line_pair : intersecting_lines) {
            line_indices.insert(line_pair.first);
            line_indices.insert(line_pair.second);
        }

        // Check if the number of intersecting lines matches k
        if (line_indices.size() == k) {
            vector<int> intensities;
            for (int idx : line_indices) {
                pair<int, int> cells = count_cells(lines[idx], point);
                if (cells.second == -1) {
                    intensities.push_back(cells.first);
                } else {
                    intensities.push_back(min(cells.first, cells.second));
                }
            }
            total_intensity += *min_element(intensities.begin(), intensities.end());
        }
    }

    return total_intensity;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int, int, int>> lines(n);

    // Input lines
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        lines[i] = {x1, y1, x2, y2};
    }

    int k;
    cin >> k;

    // Calculate and output result
    int result = calculate_intensity(lines, k);
    cout << result << endl;

    return 0;
}
