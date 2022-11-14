// #include<stdio.h>

// struct point {
//     int x,y;
// } center;

// struct shape
// {
//     int shape_kind;
//     struct point center;
//     union
//     { struct
//         {
//             int height, width;
//         } rectangle;
//         struct
//         {
//             int radius;
//         } circle;
//     } u;
// } s;

// float area(struct shape s){
//     if (s.shape_kind==RECTANGLE){
//         return (s.u.rectangle.height)*(s.u.rectangle.width);
//     }
//     else {
//         return (3.14)*(s.u.circle.radius)*(s.u.circle.radius);
//     }
// }

// struct shape move(struct shape s , int x, int y){
//     s.center.x += x;
//     s.center.y += y;

//     return s;
     
// }

// struct shape scale(struct shape s, int c){
//     if (s.shape_kind==RECTANGLE){
//         s.u.rectangle.height *= c;
//         s.u.rectangle.widht *= c;
//     }
//     else {
//         s.u.circle.radius *= c;
//     }
//     return s;
// }

// int main(){
    
//     return 0;
// }