#include <raylib.h>
/*Set The Info About The Game
name author version*/
typedef struct
{
    const char name[31];
    const float varsion;
    const char author[31];
    const float rayplus_version;
}AppInfo;

/*Screen parameters
H height
W width
Name the screen name*/
typedef struct
{
    const int H;
    const int W;
    const char Name[];
}Screen;


// INIT ENGINE
int RayPlus(Screen screen,int FPS)
{
    //first init the raylib screen
    InitWindow(screen.W,screen.H,screen.Name);
    SetTargetFPS(FPS);
    SetExitKey(0);

}

// EXIT ENGINE
int Exit()
{
    CloseWindow();
}
