#include <raylib.h>


// INIT ENGINE
int RayPlus(int h ,int w,char name[],int FPS)
{
    //first init the raylib screen
    InitWindow(h,w,name);
    SetTargetFPS(FPS);
    SetExitKey(0);

}

// EXIT ENGINE
int Exit()
{
    CloseWindow();
}
