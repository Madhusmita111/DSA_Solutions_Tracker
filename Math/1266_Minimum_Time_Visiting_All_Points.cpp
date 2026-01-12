// Problem: 1266. Minimum Time Visiting All Points
// Platform: LeetCode
// Difficulty: Easy
// Topic: Math / Geometry

// Approach:
// From point (x1, y1) to (x2, y2), we can move diagonally, vertically, or horizontally.
// A diagonal move reduces both x and y by 1 in one second.

// So the minimum time required between two points is:
// max(|x2 - x1|, |y2 - y1|)

// We compute this for each consecutive pair and sum it.

// Algorithm:
// 1. Initialize totalTime = 0
// 2. For each consecutive pair of points:
//    - dx = |x[i] - x[i-1]|
//    - dy = |y[i] - y[i-1]|
//    - totalTime += max(dx, dy)
// 3. Return totalTime

// Time Complexity:
// O(n)

// Space Complexity:
// O(1)

// Code (C++):

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;
        for(int i=1; i<points.size(); i++){
            int dx = abs(points[i][0] - points[i-1][0]);
            int dy = abs(points[i][1] - points[i-1][1]);
            result += max(dx,dy);
        }
        return result;
    }
};