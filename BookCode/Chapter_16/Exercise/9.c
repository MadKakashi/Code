#include <stdio.h>
#include <stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue)
{
    struct color ex = {red,green,blue};

    if (ex.red<0) ex.red = 0;
    else if(ex.red>255) ex.red = 255;
    
    if (ex.green<0) ex.green = 0;
    else if(ex.green>255) ex.green = 255;

    if (ex.blue<0) ex.blue = 0;
    else if(ex.blue>255) ex.blue = 255;



    return ex;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.blue == color2.blue && color1.green == color2.green)
    {
        return true;
    }
    return false;
}

struct color brighter(struct color c)
{
    struct color ex;
    if (c.red == 0 && c.blue == 0 && c.green == 0)
    {
        ex.red = 3;
        ex.blue = 3;
        ex.green = 3;
        return ex;
    }

    if (c.red > 0 && c.red < 3) c.red = 3;
    if (c.blue > 0 && c.blue < 3) c.blue = 3;
    if (c.green > 0 && c.green < 3)  c.green = 3;

    ex.red = (c.red/0.7)>255?255:(c.red/0.7);
    ex.blue = (c.blue/0.7)>255?255:(c.blue/0.7);
    ex.green = (c.green/0.7)>255?255:(c.green/0.7);

    return ex;

}

struct color darker(struct color c){
    struct color ex;
    if (c.red == 0 && c.blue == 0 && c.green == 0)
    {
        ex.red = 3;
        ex.blue = 3;
        ex.green = 3;
        return ex;
    }

    if (c.red > 0 && c.red < 3) c.red = 3;
    if (c.blue > 0 && c.blue < 3) c.blue = 3;
    if (c.green > 0 && c.green < 3)  c.green = 3;

    ex.red = (c.red*0.7)>255?255:(c.red*0.7);
    ex.blue = (c.blue*0.7)>255?255:(c.blue*0.7);
    ex.green = (c.green*0.7)>255?255:(c.green*0.7);

    return ex;

}

int main()
{

    return 0;
}