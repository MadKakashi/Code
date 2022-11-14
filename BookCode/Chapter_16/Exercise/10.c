#include<stdio.h>
#include<stdbool.h>

struct point {int x,y;};
struct rectangle { struct point upper_left , lower_right;};

int a(struct rectangle r){
    int area = abs(((r.upper_left.x-r.lower_right.x)*(r.upper_left.y-r.lower_right.y)));
    return area;
}

struct point center(struct rectangle r){
    struct point ex;
    ex.x = (r.upper_left.x-r.lower_right.x)/2;
    ex.y = (r.upper_left.y-r.lower_right.y)/2;
    return ex;
}

struct rectangle move(struct rectangle r,int x,int y){
    r.lower_right.x += x;
    r.lower_right.y += y;
    r.upper_left.x += x;
    r.upper_left.y += y;
    return r;
}

bool lies(struct point p , struct rectangle r){
    if (p.x>r.upper_left.x && p.x<r.lower_right.x){
        if (p.y>r.lower_right.y && p.y<r.upper_left.y){
            return true;
        }
    }
    return false;
}

int main(){
    
    return 0;
}