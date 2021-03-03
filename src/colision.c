#ifndef _NODE_C_
#define _NODE_C_
#endif
/*
Ceck 2D colision between 2 2D hitboxes
*/
int Colision2D(Node2D box1,Node2D box2)
{
    if (box1.x < box2.x + box2.width &&
        box1.x + box1.width > box2.x &&
        box1.y < box2.y + box2.height &&
        box1.y + box1.height > box2.y) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
