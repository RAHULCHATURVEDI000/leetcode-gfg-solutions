class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area;
        vector<int> maxarea;
        while(i!=j)
        {
            area=(j-i)*min(height[i],height[j]);
            maxarea.push_back(area);

            if(height[i]>height[j])
            {
                j--;
            }
            else
            i++;
        }
      sort(maxarea.begin(),maxarea.end());
      return maxarea.back();
    }
};