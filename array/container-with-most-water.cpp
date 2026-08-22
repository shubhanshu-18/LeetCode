class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int h;
        int i=0,j=height.size()-1;
               while(i<j){  h=min(height[i],height[j]);
                area=max((h*abs(i-j)),area);

                if(height[i]<height[j]){
                    i++;
                }
                else j--;
             
            
               }
        return area;
    }
};