#include<stdio.h>
// if you wana run the sitng elsewere remove ../
#include "../rayplus/rayplus.h"



const int speed=5.0f;
Screen screen={800,450,"RayPlus [2D colision Exemple]"};





int main()
{
    // First we init raylib and rayplus
    RayPlus(screen,60);

    // Here We Define The App Info (optional)
    AppInfo app={screen.Name,0.1,"Arydev",0.01};
    //0.001 rayplus version is the first ever version from 1 March 2021 (Not Relesed)

    // Here We Create The Player Node
    Node2D player={14,14,100,10,5.0f};


    // Now Enemy Node
    Node2D enemy={100,100,screen.H,0,0.0f};

    // Update 
    while(1)
    {
        // First We Ceck For Colision
    int coliding=Colision2D(player,enemy);

    //then we move the player
    }
    

    return 0;
}

int update(void)
{
    // First We Ceck For Colision
    int coliding=Colision2D(player,);

    //then we move the player

}

int draw(void)
{
    BeginDrawing();

    /* Code Here */

    EndDrawing();
}