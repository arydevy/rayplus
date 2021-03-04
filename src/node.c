/*
Fundamental RayPlus Type
*/
typedef struct
{

    // Hitbox Info
    int height;
    int width;
    float x;
    float y;

    // speed (obtional)
    float speed;

}Node2D;

/*
Create Node2D
height | width | x | y | speed |
*/
Node2D NewNode2D(int height , int width,float x,float y)
{
    Node2D node;
    node.height=height;
    node.width=width;
    node.x=x;
    node.y=y;
    node.speed=0.0f;


    return node; 
}
