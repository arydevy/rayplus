#include<stdio.h>
// if you wana run the sitng elsewere remove ../
#include "../src/rayplus.c"
#include "../src/node.c"
#include "../src/colision.c"


const int screenW=800;
const int screenH=450;
const int FPS=60;

int main()
{
    // First we init raylib and rayplus
    RayPlus(screenW,screenH,"RayPlus [2D colision Exemple]",FPS);


    // Here We Create The Player Node
    Node2D player = NewNode2D(14,14,100,10);
    player.speed=5.0f;

    // Now Enemy Node
    Node2D enemy= NewNode2D(100,100,screenH,0);

    // Update 
        while(!WindowShouldClose())
        {
            // First We Ceck For Colision
            int coliding=Colision2D(player,enemy);

            //then we move the player

            //====Drawing=================
            BeginDrawing();
            ClearBackground(ORANGE);

            EndDrawing();
            //====Drawing=================
        }
    
    
    // Exit Program
    Exit();

    return 0;
}