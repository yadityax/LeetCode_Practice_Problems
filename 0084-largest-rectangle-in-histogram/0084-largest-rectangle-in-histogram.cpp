class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Next smallest left
        vector<int> Left(heights.size());
        // Next smallest right
        vector<int> Right(heights.size());
        stack<int> st;
        // NSR filling
        for(int i=0;i<heights.size();i++){
          while(!st.empty() && heights[st.top()] > heights[i]){
            Right[st.top()] = i;
            st.pop();
          }  
          st.push(i);
        }
        while(!st.empty()){
            Right[st.top()] = heights.size();
            st.pop();
        }
        // NSL filling
        for(int i=heights.size()-1;i>=0;i--){
        while(!st.empty() && heights[st.top()] > heights[i]){
            Left[st.top()] = i;
            st.pop();
        }
        st.push(i);
        }
        while(!st.empty()){
            Left[st.top()] = -1;
            st.pop();
        }

        int maxx = INT_MIN;
        for(int i=0;i<heights.size();i++){
            maxx = max(maxx, heights[i]*(Right[i] - Left[i] - 1));
        }
        return maxx;
    }
};