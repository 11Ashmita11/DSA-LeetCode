// Problem: MAXIMUM POINTS TO OBTAIN FROM CARDS 
// Approach: SLIDING WINDOW
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int total=0;
        for(int i=0;i<k;i++){
            total+=cardPoints[i];
        }
        int maxip=total;
        for(int i=0;i<k;i++){
            total-=cardPoints[k-1-i];
            total+=cardPoints[n-1-i];
            maxip=max(maxip,total);
        }
        return maxip;
    }