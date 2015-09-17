GLfloat mainPositionX = 0;
GLfloat mainPositionZ = 0;
float    boundingBox_MAIN_lower_edge = -0.1;
float    boundingBox_MAIN_upper_edge =  0.1;
float    boundingBox_MAIN_left_edge  = -0.1;      //////initialized to match position of openGL rendered main object
float    boundingBox_MAIN_right_edge =  0.1;

int numberOfCollisionObjects = 8;

float left_edge[100];
float right_edge[100];
float lower_edge[100];
float upper_edge[100];

float X3[100];
float X4[100];
float Y3[100];
float Y4[100];

float planeX3_inner[100];   ////left edge
float planeX3_outer[100];   ////left edge
float planeX4_inner[100];   ////right edge
float planeX4_outer[100];   ////right edge
float planeY3_inner[100];   ////bottom edge
float planeY3_outer[100];   ////bottom edge
float planeY4_inner[100];   ////top edge
float planeY4_outer[100];   ////top edge

bool    RIGHT = TRUE;
bool    LEFT  = TRUE;                            //////collision switches, movement on/off 
bool    UP    = TRUE;
bool    DOWN  = TRUE;
void CollisionCheck_LEFT(float X1, float Y1, float X2, float Y2);
void CollisionCheck_RIGHT(float X1, float Y1, float X2, float Y2);
void CollisionCheck_UP(float X1, float Y1, float X2, float Y2);
void CollisionCheck_DOWN(float X1, float Y1, float X2, float Y2);
#include "CollisionCheck_LEFT.cpp"
#include "CollisionCheck_RIGHT.cpp"
#include "CollisionCheck_UP.cpp"
#include "CollisionCheck_DOWN.cpp"

void Logic_00(void);
#include "Logic_00.cpp"

void MoveMainCharacter(float internalPosX, float internalPosY)          //////******************************************
{
     

     glTranslatef(internalPosX,0.0, -internalPosY);
     
     
     boundingBox_MAIN_left_edge  = internalPosX - 0.1;    
     boundingBox_MAIN_right_edge = internalPosX + 0.1;   
     boundingBox_MAIN_lower_edge = internalPosY - 0.1;
     boundingBox_MAIN_upper_edge = internalPosY + 0.1;
}
