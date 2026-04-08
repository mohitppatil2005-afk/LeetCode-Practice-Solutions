class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int sidea1=abs(ay2-ay1);
        int sidea2=abs(ax2-ax1);
        int sideb1=abs(by2-by1);
        int sideb2=abs(bx2-bx1);
        int area1=sidea1*sidea2;
        int area2=sideb1*sideb2;
        int intersection=0;
        int left   = max(ax1, bx1);
        int right  = min(ax2, bx2);
        int bottom = max(ay1, by1);
        int top    = min(ay2, by2);
        if(right>left && top>bottom){
            intersection=(right-left)*(top-bottom);
        }
        return area1+area2-intersection;
    }
};