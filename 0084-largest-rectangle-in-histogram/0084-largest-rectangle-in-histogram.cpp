class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int mxarea = 0;

        for (int i = 0; i <= h.size(); i++) {

            int curr = (i == h.size()) ? 0 : h[i];

            while (!st.empty() && h[st.top()] > curr) {
                int height = h[st.top()];
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;

                mxarea = max(mxarea, height * width);
            }

            st.push(i);
        }

        return mxarea;
    }
};