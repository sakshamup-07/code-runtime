class Solution {
private:
    // Cross product to determine orientation (turn direction)
    long long crossProduct(const vector<int>& O, const vector<int>& A, const vector<int>& B) {
        return (long long)(A[0] - O[0]) * (B[1] - O[1]) - (long long)(A[1] - O[1]) * (B[0] - O[0]);
    }

    // Step 1: Monotone Chain Algorithm to find the Convex Hull
    vector<vector<int>> getConvexHull(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 3) return points;
        
        sort(points.begin(), points.end());
        vector<vector<int>> hull;

        // Build lower hull
        for (int i = 0; i < n; ++i) {
            while (hull.size() >= 2 && crossProduct(hull[hull.size()-2], hull.back(), points[i]) <= 0) {
                hull.pop_back();
            }
            hull.push_back(points[i]);
        }

        // Build upper hull
        int lower_size = hull.size();
        for (int i = n - 2; i >= 0; --i) {
            while (hull.size() > lower_size && crossProduct(hull[hull.size()-2], hull.back(), points[i]) <= 0) {
                hull.pop_back();
            }
            hull.push_back(points[i]);
        }
        hull.pop_back(); // Remove the duplicate endpoint
        return hull;
    }

public:
    double largestTriangleArea(vector<vector<int>>& points) {
        // 1. Get only the outermost perimeter points
        vector<vector<int>> hull = getConvexHull(points);
        int h = hull.size();
        double max_area = 0;

        // 2. Find maximum triangle among hull points
        for (int i = 0; i < h; i++) {
            for (int j = i + 1; j < h; j++) {
                for (int k = j + 1; k < h; k++) {
                    double area = 0.5 * abs(
                        hull[i][0] * (hull[j][1] - hull[k][1]) +
                        hull[j][0] * (hull[k][1] - hull[i][1]) +
                        hull[k][0] * (hull[i][1] - hull[j][1])
                    );
                    max_area = max(max_area, area);
                }
            }
        }
        return max_area;
    }
};
