#define STRICT
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <iostream.h>
//using namespace std; //___used for string object
#include <GL/glu.h>
#include <GL/gl.h>
#include "headerFiles/glaux.h"
#include <fstream.h>
#include "headerFiles/glut.h"

#include "headerFiles/tga.h"

#include <math.h>


#include "headerFiles/al.h"
#include "headerFiles/alc.h"
#include "headerFiles/alut.c"

#include "headerFiles/FreeImage.h"



bool keys[256], keypressed[256];
bool active=TRUE;
bool fullscreen=TRUE;

float screenWidth  = 1280;
float screenHeight = 800;


bool VK_PRIOR_IS_PUSHED = false;
bool VK_NEXT_IS_PUSHED  = false;

#include "headerFiles/glext.h" 
 
double screenSpin = 0.0f;

GLuint g_textureID;
GLuint g_textureID_02;

float spinFloat = 0.0f;

float eyePosition[]   =  {0.0, 0.0, 0.0};
float look_LEFT_RIGHT =   0.0;
float look_UP_DOWN    = -90.0;
            
GLuint    textureMap[300];
GLuint    normalMap[300];

GLhandleARB programObj;
GLhandleARB vertexShader;
GLhandleARB fragmentShader;

GLhandleARB aniso;
GLhandleARB aniso_Vertex;
GLhandleARB aniso_Fragment;



#include <math.h>

HDC	hDC = NULL;
   HGLRC hRC = NULL;
     HWND hWnd = NULL;
       HINSTANCE hInstance = NULL;
          int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow);
             LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
                void render  (void);
                void Init    (void);
                void shutDown(void);
                unsigned char *readShaderFile(const char *fileName);
                void initShader(void);
                void ProcessKeyboard();
                     int LoadGLTextureBMP(char *textureFileName, char *normalMapFileName, GLuint &textureMapID, GLuint &normalMapID);
                     int LoadGLTextureBMP(char *textureFileName, GLuint &textureMapID);                           
                     int LoadGLTextureTGA(char *textureFileName, GLuint &textureMapID);
                     int LoadGLTextureTGA(char *textureFileName, char *normalMapFileName, GLuint &textureMapID, GLuint &normalMapID) ;  
                           void readstr(FILE *f,char *string);
                           void setShaderConstants(void);
                           void runNmapShader(int numTriangles, const GLvoid *ArrayName, GLuint texMap, GLuint normMap);
                           void runNmapShader(int numTriangles, const GLvoid *ArrayName, GLuint texMap, GLuint normMap, GLuint specMap);                           
                           void Dot3shader( void );
              void LoadAnisoTGA(void);
              int  LoadTexture(char *texture_name,GLuint *texture);	
              int  LoadGLTexture_BMP(char *texture_name,GLuint *texture);
              
              void loadTexture(char *textureFileName, GLuint &textureMapID);                                  

        #include "cpp\winInit.cpp"

        #include "cpp\SHADERtech.cpp"

        float width  = 6.0;
        float height = 6.0;

int DOT3_textureID;
              

void PerformFrameStartSetup(void);
void printNumbers(float InputValue);


GLfloat movePiece[]    = {0,0,0};
GLfloat moveObject[]   = {0,0,0};
GLfloat rotateScene    =      0 ;
GLfloat mainPosition[] = {0,0,0};
GLfloat moveModel[]    = {0,0,0};

bool F8_isPressed = false;
                        

                                                     #include "AUDIO/dungeonWAV_GLOBALS.c"
                                                     #include "AUDIO/dungeonWAV_INIT.c"

                            
                     GLfloat lightPos_skeleton_00[]           =  {0, 43.671, -36.321};//=  {0, 435.671, -366.321};
                     GLfloat quadraticAttenuation_skeleton_00 =   1.76;                         
                        
                          
                          
                            void deleteVBO(const GLuint vboId);////_________________VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO
                            PFNGLGENBUFFERSARBPROC    glGenBuffersARB    = 0;////___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO                    
                            PFNGLBINDBUFFERARBPROC    glBindBufferARB    = 0;////___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO                  
                            PFNGLBUFFERDATAARBPROC    glBufferDataARB    = 0;////___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO               
                            PFNGLBUFFERSUBDATAARBPROC glBufferSubDataARB = 0;////___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO           
                            PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB = 0;////___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO___VBO                     

                     
                     GLuint farWallCenter_vboID   =  1;
                     GLuint farWallLeft_vboID     =  2;                                        
                     GLuint farWallRight_vboID    =  3;  
                     GLuint floor_vboID           =  4;                                            
                     GLuint leftWallCenter_vboID  =  5; 
                     GLuint leftWallLeft_vboID    =  6;                      
                     GLuint leftWallRight_vboID   =  7;
                     GLuint nearWallCenter_vboID  =  8; 
                     GLuint nearWallLeft_vboID    =  9;                     
                     GLuint nearWallRight_vboID   =  10; 
                     GLuint rightWallCenter_vboID =  11;                      
                     GLuint rightWallLeft_vboID   =  12;                      
                     GLuint rightWallRight_vboID  =  13;
                     GLuint leftWallDoor_vboID    =  15;
                     GLuint head_01_STONE_vboID   =  31;                     
                     
                     GLuint bone_104p_vboID       =  32;
                     GLuint ribs_1_vboID          =  33;
                     GLuint skull_00_vboID        =  34; 
                     GLuint spine_vboID           =  35;                      
                     GLuint ribs_2_vboID          =  36;                                                                                     
                     GLuint ribs_3_vboID          =  37; 
                     GLuint ribs_4_vboID          =  38;                      
                     
                     GLuint leftArmUpper_vboID    =  39;                    
                     GLuint leftArmLower_vboID    =  40;                     
                     GLuint rightArmUpper_vboID   =  41;                    
                     GLuint rightArmLower_vboID   =  42;                    
                     GLuint leftLegUpper_vboID    =  43;
                     GLuint leftLegLower_vboID    =  44;                     
                     GLuint rightLegUpper_vboID   =  45;
                     GLuint rightLegLower_vboID   =  46;                      
                     GLuint pelvis_vboID          =  47;                       
                                                             
                     
                     #include "_MODEL_FOLDERS_/farWallCenter/farWallCenter_NORM.cpp"
                     #include "_MODEL_FOLDERS_/farWallCenter/farWallCenter_TEX.cpp"
                     #include "_MODEL_FOLDERS_/farWallCenter/farWallCenter_VERT.cpp"

                     #include "_MODEL_FOLDERS_/farWallLeft/farWallLeft_NORM.cpp"
                     #include "_MODEL_FOLDERS_/farWallLeft/farWallLeft_TEX.cpp"
                     #include "_MODEL_FOLDERS_/farWallLeft/farWallLeft_VERT.cpp"

                     #include "_MODEL_FOLDERS_/farWallRight/farWallRight_NORM.cpp"
                     #include "_MODEL_FOLDERS_/farWallRight/farWallRight_TEX.cpp"
                     #include "_MODEL_FOLDERS_/farWallRight/farWallRight_VERT.cpp"
                   
                     //////--------------------------------------------------------------------                 
                     #include "_MODEL_FOLDERS_/floor/floor_NORM.cpp"
                     #include "_MODEL_FOLDERS_/floor/floor_TEX.cpp"
                     #include "_MODEL_FOLDERS_/floor/floor_VERT.cpp"
                     //////--------------------------------------------------------------------                    
                     #include "_MODEL_FOLDERS_/leftWallCenter/leftWallCenter_NORM.cpp"
                     #include "_MODEL_FOLDERS_/leftWallCenter/leftWallCenter_TEX.cpp"
                     #include "_MODEL_FOLDERS_/leftWallCenter/leftWallCenter_VERT.cpp"                     

                     #include "_MODEL_FOLDERS_/leftWallLeft/leftWallLeft_NORM.cpp"
                     #include "_MODEL_FOLDERS_/leftWallLeft/leftWallLeft_TEX.cpp"
                     #include "_MODEL_FOLDERS_/leftWallLeft/leftWallLeft_VERT.cpp"
                     
                     #include "_MODEL_FOLDERS_/leftWallRight/leftWallRight_NORM.cpp"
                     #include "_MODEL_FOLDERS_/leftWallRight/leftWallRight_TEX.cpp"
                     #include "_MODEL_FOLDERS_/leftWallRight/leftWallRight_VERT.cpp"
                     
                     #include "_MODEL_FOLDERS_/leftWallDoor/leftWallDoor_NORM.cpp"
                     #include "_MODEL_FOLDERS_/leftWallDoor/leftWallDoor_TEX.cpp"
                     #include "_MODEL_FOLDERS_/leftWallDoor/leftWallDoor_VERT.cpp"                                            
                     //////--------------------------------------------------------------------                      
                     #include "_MODEL_FOLDERS_/nearWallCenter/nearWallCenter_NORM.cpp"
                     #include "_MODEL_FOLDERS_/nearWallCenter/nearWallCenter_TEX.cpp"
                     #include "_MODEL_FOLDERS_/nearWallCenter/nearWallCenter_VERT.cpp"
                       
                     #include "_MODEL_FOLDERS_/nearWallLeft/nearWallLeft_NORM.cpp"
                     #include "_MODEL_FOLDERS_/nearWallLeft/nearWallLeft_TEX.cpp"
                     #include "_MODEL_FOLDERS_/nearWallLeft/nearWallLeft_VERT.cpp"                     
                     
                     #include "_MODEL_FOLDERS_/nearWallRight/nearWallRight_NORM.cpp"
                     #include "_MODEL_FOLDERS_/nearWallRight/nearWallRight_TEX.cpp"
                     #include "_MODEL_FOLDERS_/nearWallRight/nearWallRight_VERT.cpp"                      
                     
                     //////--------------------------------------------------------------------                   
                     #include "_MODEL_FOLDERS_/rightWallCenter/rightWallCenter_NORM.cpp"
                     #include "_MODEL_FOLDERS_/rightWallCenter/rightWallCenter_TEX.cpp"
                     #include "_MODEL_FOLDERS_/rightWallCenter/rightWallCenter_VERT.cpp"                      
                     
                     #include "_MODEL_FOLDERS_/rightWallLeft/rightWallLeft_NORM.cpp"
                     #include "_MODEL_FOLDERS_/rightWallLeft/rightWallLeft_TEX.cpp"
                     #include "_MODEL_FOLDERS_/rightWallLeft/rightWallLeft_VERT.cpp"                      
                     
                     #include "_MODEL_FOLDERS_/rightWallRight/rightWallRight_NORM.cpp"
                     #include "_MODEL_FOLDERS_/rightWallRight/rightWallRight_TEX.cpp"
                     #include "_MODEL_FOLDERS_/rightWallRight/rightWallRight_VERT.cpp" 
                     
                     //////--------------------------------------------------------------------

                     #include "_MODEL_FOLDERS_/SKELETON/bone_104p_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/bone_104p_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/bone_104p_VERT.cpp"                 
                     
                     //////--------------------------------------------------------------------                     

                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_1_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_1_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_1_VERT.cpp"                 
                     
                     //////-------------------------------------------------------------------- 

                     #include "_MODEL_FOLDERS_/SKELETON/SKULL/skull_00_NORM.cpp" 
                     #include "_MODEL_FOLDERS_/SKELETON/SKULL/skull_00_TEX.cpp" 
                     #include "_MODEL_FOLDERS_/SKELETON/SKULL/skull_00_VERT.cpp"                  
                     
                     //////--------------------------------------------------------------------                     

                     #include "_MODEL_FOLDERS_/SKELETON/SPINE/spine_NORM.cpp" 
                     #include "_MODEL_FOLDERS_/SKELETON/SPINE/spine_TEX.cpp" 
                     #include "_MODEL_FOLDERS_/SKELETON/SPINE/spine_VERT.cpp"                  
                     
                     //////--------------------------------------------------------------------                      
                     
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_2_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_2_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_2_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                     
                     
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_3_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_3_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_3_VERT.cpp"                   
                     
                     //////-------------------------------------------------------------------- 
                     
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_4_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_4_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/ribs/ribs_4_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                      
                     
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmUpper_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmUpper_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmUpper_VERT.cpp"                   
                     
                     //////-------------------------------------------------------------------- 
                     
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmLower_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmLower_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftArm/leftArmLower_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                      
                     
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmUpper_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmUpper_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmUpper_VERT.cpp"                   
                     
                     //////-------------------------------------------------------------------- 
                     
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmLower_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmLower_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightArm/rightArmLower_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                     
                     
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegUpper_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegUpper_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegUpper_VERT.cpp"                   
                     
                     //////-------------------------------------------------------------------- 
                     
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegLower_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegLower_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegLower_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                      
                     
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegUpper_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegUpper_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegUpper_VERT.cpp"                   
                     
                     //////-------------------------------------------------------------------- 
                     
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegLower_NORM.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegLower_TEX.cpp"
                     #include "_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegLower_VERT.cpp"                   
                     
                     //////--------------------------------------------------------------------                      
                     
                     #include "_MODEL_FOLDERS_/SKELETON/pelvis/pelvis_NORM.cpp"                     
                     #include "_MODEL_FOLDERS_/SKELETON/pelvis/pelvis_TEX.cpp"                      
                     #include "_MODEL_FOLDERS_/SKELETON/pelvis/pelvis_VERT.cpp"    
                               
             
             
             
                                                               
#include "COLLISION/CollisionDetection_GLOBALS_1_1.cpp"


void render(void)//////////////////////_______RENDER_____RENDER____RENDER_______RENDER_____RENDER____RENDER_______RENDER_____RENDER____RENDER
{      
                              
                              glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT); 
    
                              glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
                              glEnable(GL_LINE_SMOOTH);                             
                             
                              glMatrixMode( GL_PROJECTION );
                              glLoadIdentity();
                              gluPerspective( 45.24, screenWidth / screenHeight, 0.1, 1000);
                              
                              glTranslatef(eyePosition[0],eyePosition[1],eyePosition[2]);//glTranslatef(eyePosition[0],eyePosition[1],eyePosition[2]);
                              glRotatef(look_UP_DOWN, 1, 0, 0); 
                              glRotatef(look_LEFT_RIGHT, 0, 1, 0);
                              
                              glMatrixMode( GL_MODELVIEW );
                              
                              glColor4f(1.0, 1.0, 1.0, 1.0);

                                                        
                                                               
spinFloat += .5;    

glEnable(GL_TEXTURE_2D);                                                                                   

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////     
    
    #include "_MODEL_FOLDERS_/LOAD_ROOM.cpp"
               
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

//-----------------------------
              glLoadIdentity();
//-----------------------------


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

//-----------------------------
              glLoadIdentity();
//-----------------------------
glTranslatef(0.0, .07, 0.0);
glScalef(.5, .5, .5);
       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_1_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(ribs_1_VERT) + sizeof(ribs_1_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(ribs_1_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[47]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[47]);
                   glDrawArrays(GL_TRIANGLES, 0, 90);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, skull_00_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(skull_00_VERT) + sizeof(skull_00_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(skull_00_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[48]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[48]);
                   glDrawArrays(GL_TRIANGLES, 0, 663);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, spine_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(spine_VERT) + sizeof(spine_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(spine_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[49]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[49]);
                   glDrawArrays(GL_TRIANGLES, 0, 60);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
///////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_2_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(ribs_2_VERT) + sizeof(ribs_2_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(ribs_2_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[47]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[50]);
                   glDrawArrays(GL_TRIANGLES, 0, 90);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_3_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(ribs_3_VERT) + sizeof(ribs_3_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(ribs_3_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[47]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[51]);
                   glDrawArrays(GL_TRIANGLES, 0, 90);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_4_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(ribs_4_VERT) + sizeof(ribs_4_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(ribs_4_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[47]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[52]);
                   glDrawArrays(GL_TRIANGLES, 0, 90);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftArmUpper_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftArmUpper_VERT) + sizeof(leftArmUpper_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftArmUpper_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[53]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftArmLower_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftArmLower_VERT) + sizeof(leftArmLower_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftArmLower_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[54]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightArmUpper_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightArmUpper_VERT) + sizeof(rightArmUpper_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightArmUpper_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[55]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightArmLower_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightArmLower_VERT) + sizeof(rightArmLower_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightArmLower_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[56]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftLegUpper_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftLegUpper_VERT) + sizeof(leftLegUpper_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftLegUpper_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[57]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftLegLower_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftLegLower_VERT) + sizeof(leftLegLower_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftLegLower_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[58]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightLegUpper_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightLegUpper_VERT) + sizeof(rightLegUpper_NORM)));              
                   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightLegUpper_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[59]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightLegLower_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightLegLower_VERT) + sizeof(rightLegLower_NORM)));              
                   glNormalPointer(GL_FLOAT, 0,      (void*) sizeof(rightLegLower_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[46]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[60]);
                   glDrawArrays(GL_TRIANGLES, 0, 144);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glUseProgramObjectARB(programObj);               
                   glRotatef(spinFloat, 0, 1, 0);               
                   glPushMatrix();
                        glLightfv (GL_LIGHT0,GL_POSITION,lightPos_skeleton_00);
                        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuation_skeleton_00);
                   glPopMatrix();  
                   
                   glBindBufferARB(GL_ARRAY_BUFFER_ARB, pelvis_vboID);
                   
                   glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
                   glEnableClientState(GL_NORMAL_ARRAY);
                   glEnableClientState(GL_VERTEX_ARRAY);
            
                   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(pelvis_VERT) + sizeof(pelvis_NORM)));              
                   glNormalPointer(GL_FLOAT, 0,      (void*) sizeof(pelvis_VERT));
                   glVertexPointer(3, GL_FLOAT, 0, 0);

                   DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                   glUniform1iARB(DOT3_textureID, 1);
                   glActiveTextureARB(GL_TEXTURE1_ARB);
                   glBindTexture(GL_TEXTURE_2D, normalMap[61]);
              
                   glActiveTextureARB(GL_TEXTURE0_ARB);
                   glBindTexture(GL_TEXTURE_2D, textureMap[61]);
                   glDrawArrays(GL_TRIANGLES, 0, 198);
              
                   glDisableClientState(GL_VERTEX_ARRAY); 
                   glDisableClientState(GL_NORMAL_ARRAY);
                   glDisableClientState(GL_TEXTURE_COORD_ARRAY);
              glUseProgramObjectARB(0);        
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-----------------------------
              glLoadIdentity();
//-----------------------------

//////////////////////////////////////////////////////////////////      
//////////////////////////////////////////////////////////////////
 
                       #include "COLLISION/baseRoomCollision.cpp"

//////////////////////////////////////////////////////////////////      
////////////////////////////////////////////////////////////////// 

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                          glDisable(GL_TEXTURE_2D);                                     
                                                          glColor4f(.2,.2,.2,1);
                                                          glDisable(GL_CULL_FACE);                                   
                                     glPushMatrix();
                                         MoveMainCharacter(mainPositionX,mainPositionZ);
                                             glBegin(GL_QUADS);
                                                  glVertex3f(-0.1, 0.01,  0.1);				
		                                          glVertex3f( 0.1, 0.01,  0.1);				
		                                          glVertex3f( 0.1, 0.01, -0.1);			
		                                          glVertex3f(-0.1, 0.01, -0.1);								
	                                         glEnd();
	                                 glPopMatrix();
                                                          glEnable(GL_CULL_FACE);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//-----------------------------
              glLoadIdentity();
//-----------------------------


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//moveBatModel[0], moveBatModel[1], moveBatModel[2] 
/*
glPushMatrix(); 
       glBindBufferARB(GL_ARRAY_BUFFER_ARB, cornerStones_vboID);
                   
       glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
       glEnableClientState(GL_NORMAL_ARRAY);
       glEnableClientState(GL_VERTEX_ARRAY);
            
          
       glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(farWallCenter_VERT) + sizeof(farWallCenter_NORM)));              
       glNormalPointer(GL_FLOAT, 0, (void*)sizeof(farWallCenter_VERT));
       glVertexPointer(3, GL_FLOAT, 0, 0);

                              glUseProgramObjectARB(programObj);
                                      int DOT3_textureID;
                                      DOT3_textureID = glGetUniformLocationARB(programObj,"NormalMap");
                                      
                                      
                                      glUniform1iARB(DOT3_textureID,1);
                                      glActiveTextureARB(GL_TEXTURE1_ARB);
                                      glBindTexture(GL_TEXTURE_2D, normalMap[1]);
                                      glEnableClientState(GL_TEXTURE_COORD_ARRAY);
                                      
                                      glActiveTextureARB(GL_TEXTURE0_ARB);
	                                  
                                      glBindTexture(GL_TEXTURE_2D, textureMap[1]);  
                                      glPushMatrix();
                                         glLightfv (GL_LIGHT0,GL_POSITION,lightPos_FarWallCenter);
                                         glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION,  quadraticAttenuation_FarWallCenter);  
                                      glPopMatrix();
                                      
                                      glDrawArrays(GL_TRIANGLES, 0, 216);
                             glUseProgramObjectARB(0);
          
       glDisableClientState(GL_VERTEX_ARRAY); 
       glDisableClientState(GL_NORMAL_ARRAY);
       glDisableClientState(GL_TEXTURE_COORD_ARRAY);
glPopMatrix();        
*/
//moveBatModel[0], moveBatModel[1], moveBatModel[2] 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                                           glPopMatrix();/////~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP
                                 glPopMatrix();/////~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP
       glPopMatrix();/////~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP~~~~~~~~~~~~TOP_LEVEL_POP




//----------==============================================__PLAY_AUDIO
//----------==============================================__PLAY_AUDIO
//----------==============================================__PLAY_AUDIO
        
               #include "AUDIO/dungeonWAV_RENDER.c"

//----------==============================================__PLAY_AUDIO
//----------==============================================__PLAY_AUDIO
//----------==============================================__PLAY_AUDIO

SwapBuffers( hDC );
}

/////////////_____ProcessKeyboard()________ProcessKeyboard()_________ProcessKeyboard()______ProcessKeyboard()___////////////////
/////////////_____ProcessKeyboard()________ProcessKeyboard()_________ProcessKeyboard()______ProcessKeyboard()___////////////////
/////////////_____ProcessKeyboard()________ProcessKeyboard()_________ProcessKeyboard()______ProcessKeyboard()___////////////////
/////////////_____ProcessKeyboard()________ProcessKeyboard()_________ProcessKeyboard()______ProcessKeyboard()___////////////////

void ProcessKeyboard()								
{
//////////////////////////////////////_______________LIGHT_POS   
   
   
//moveBatModel[0], moveBatModel[1], moveBatModel[2]   
   
    if (keys['L']) 			
	{
        lightPos_skeleton_00[0] += 10.005;
    }
    if (keys['J']) 			
    {
        lightPos_skeleton_00[0] -= 10.005;
    }    
    if (keys['O']) 			
	{
        lightPos_skeleton_00[1] += 10.005;
    }
    if (keys['U']) 				
    {
        lightPos_skeleton_00[1] -= 10.005;
    }
	if (keys['I']) 			
	{
        lightPos_skeleton_00[2] -= 10.005;
    }
    if (keys['K']) 			
    {
        lightPos_skeleton_00[2] += 10.005;
    }   

	if (keys['N']) 			
	{
       quadraticAttenuation_skeleton_00 += 0.01;
    }
    if (keys['M']) 			
    {
       quadraticAttenuation_skeleton_00 -= 0.01;
    }
    
    if (!keys[VK_F8]) 			
	{
         F8_isPressed = false;
    }
    if (keys[VK_F8] && !F8_isPressed)
    {
        F8_isPressed = true;            
        
        ofstream out("lightPosition.cpp");
        
       out << "                     GLfloat lightPos_skeleton_00[]           =  {"  << lightPos_skeleton_00[0] << ", " << lightPos_skeleton_00[1] << ", " << lightPos_skeleton_00[2] << "};\n";
       out << "                     GLfloat quadraticAttenuation_skeleton_00 =   " << quadraticAttenuation_skeleton_00 << ";\n\n";       
                   
      
        //out << "GLfloat MaterialShininess_Tangent_DOT3[]  =   " << MaterialShininess_Tangent_DOT3[0]    << ";\n";
        
        out << "look_LEFT_RIGHT = " << look_LEFT_RIGHT   <<     ";\n";
        out << "look_UP_DOWN = "    << look_UP_DOWN   <<     ";\n";
        out << "eyePosition[0] = "  << eyePosition[0] << ";\n";
        out << "eyePosition[1] = "  << eyePosition[1] << ";\n";
        out << "eyePosition[2] = "  << eyePosition[2] << ";\n\n";
    
        out << "                     GLfloat mainPositionX   =   " << mainPositionX << ";\n";
        out << "                     GLfloat mainPositionZ   =   " << mainPositionZ << ";\n\n";

    
    }
			if (keys[VK_LEFT])
			{
                CollisionCheck_LEFT(boundingBox_MAIN_left_edge,  boundingBox_MAIN_lower_edge, boundingBox_MAIN_right_edge,  boundingBox_MAIN_upper_edge);
                if(LEFT == TRUE)              
                     mainPositionX -= .01;
            }
			if (keys[VK_RIGHT])
			{
                CollisionCheck_RIGHT(boundingBox_MAIN_left_edge, boundingBox_MAIN_lower_edge, boundingBox_MAIN_right_edge,  boundingBox_MAIN_upper_edge);               
                if(RIGHT == TRUE)               
			         mainPositionX += .01;
			}
			if (keys[VK_UP])
			{
                CollisionCheck_UP(boundingBox_MAIN_left_edge,    boundingBox_MAIN_lower_edge, boundingBox_MAIN_right_edge,  boundingBox_MAIN_upper_edge); 
                if(UP == TRUE)            
			         mainPositionZ += .01; 
            }
			if (keys[VK_DOWN])
			{
                CollisionCheck_DOWN(boundingBox_MAIN_left_edge,  boundingBox_MAIN_lower_edge, boundingBox_MAIN_right_edge,  boundingBox_MAIN_upper_edge);
                if(DOWN == TRUE)              
			         mainPositionZ -= .01;
            }  
 
    

    
    if (keys[VK_NUMPAD4])
    {
           //if(move_bat_00_Model[0] > -1.0)
           //{
                 //move_bat_00_Model[0] -= .01;
           //}       
    }    
    if (keys[VK_NUMPAD6])
    {
          // if(move_bat_00_Model[0] <   1.0)
          // {
                // move_bat_00_Model[0] += .01;
           //}    
    }   
    if (keys[VK_NUMPAD8])
    {
          // if(move_bat_00_Model[2] <   0.5)
          // {
                 //move_bat_00_Model[2] += .01;
          // }    
                    
    }    
    if (keys[VK_NUMPAD2])
    {
          // if(move_bat_00_Model[2] >   -0.5)
          // {
                // move_bat_00_Model[2] -= .01;
          // }   
    }     
    if (keys['A'])
	{
          eyePosition[0] += .02;
    }	
    if (keys['D'])
	{
          eyePosition[0] -= .02;
	}

    
    if (keys['C'])
	{
          rotateScene      += .2;
          //eyePosition[0] += .2;
    }	
    if (keys['Z'])
	{
          rotateScene      -= .2;
          //eyePosition[0] -= .2;
	}
	
    if (keys['W'])
	{
          eyePosition[2] += .02;
    }
          if (keys['W'] && keys[VK_SHIFT])
	      {
                eyePosition[2] += .05;
          }    
	if (keys['S'])
	{
          eyePosition[2] -= .02;       
    }    
	      if (keys['S'] && keys[VK_SHIFT])
	      {
                eyePosition[2] -= .05;      
          }	
    
    if (keys['E'])
	{
          eyePosition[1] -= 0.02f;
    }
	if (keys['Q'])
	{
          eyePosition[1] += 0.02f;      
    }    
    
    if (keys['Z'])
	{
          rotateScene -= 1;
    }
	if (keys['C'])
	{
          rotateScene += 1;      
    }     
    
}


void Init( void )
{
	GLuint PixelFormat;
	
    PIXELFORMATDESCRIPTOR pfd;
	memset(&pfd, 0, sizeof(PIXELFORMATDESCRIPTOR));

    pfd.nSize      = sizeof(PIXELFORMATDESCRIPTOR);
    pfd.nVersion   = 1;
    pfd.dwFlags    = PFD_DRAW_TO_WINDOW |PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32;
    pfd.cDepthBits = 32;
	
	hDC = GetDC( hWnd );
	PixelFormat = ChoosePixelFormat( hDC, &pfd );
	SetPixelFormat( hDC, PixelFormat, &pfd);
	hRC = wglCreateContext( hDC );
	wglMakeCurrent( hDC, hRC );

	glEnable( GL_TEXTURE_2D );
	glEnable( GL_DEPTH_TEST );
    glDepthFunc(GL_LEQUAL);	
	
    glClearColor( 0.0, 0.0, 0.0, 1.0 );

                  glMatrixMode( GL_PROJECTION );
                  glLoadIdentity();
                  gluPerspective( 45.24, screenWidth / screenHeight, 0.1, 100);


    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glAlphaFunc(GL_GREATER,0.1f);
                             
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);   
    

glEnable(GL_LIGHT0);


look_LEFT_RIGHT =   0;
look_UP_DOWN    =  28.6;
eyePosition[0]  =   0.0;
eyePosition[1]  =  -1.16;
eyePosition[2]  =  -21.8;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
     glGenBuffersARB    = (PFNGLGENBUFFERSARBPROC)wglGetProcAddress("glGenBuffersARB");
     glBindBufferARB    = (PFNGLBINDBUFFERARBPROC)wglGetProcAddress("glBindBufferARB");
     glBufferDataARB    = (PFNGLBUFFERDATAARBPROC)wglGetProcAddress("glBufferDataARB");
     glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC)wglGetProcAddress("glBufferSubDataARB");
     glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC)wglGetProcAddress("glDeleteBuffersARB");
//////////////////////////////////////////////////////////////////////////////////////////////////////////

     glGenBuffersARB(1, &farWallCenter_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallCenter_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(farWallCenter_VERT) + sizeof(farWallCenter_NORM) + sizeof(farWallCenter_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(farWallCenter_VERT), farWallCenter_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallCenter_VERT),  sizeof(farWallCenter_NORM), farWallCenter_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallCenter_VERT) + sizeof(farWallCenter_NORM), sizeof(farWallCenter_TEX), farWallCenter_TEX);


     glGenBuffersARB(1, &farWallLeft_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallLeft_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(farWallLeft_VERT) + sizeof(farWallLeft_NORM) + sizeof(farWallLeft_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(farWallLeft_VERT), farWallLeft_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallLeft_VERT),  sizeof(farWallLeft_NORM), farWallLeft_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallLeft_VERT) + sizeof(farWallLeft_NORM), sizeof(farWallLeft_TEX), farWallLeft_TEX);


     glGenBuffersARB(1, &farWallRight_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallRight_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(farWallRight_VERT) + sizeof(farWallRight_NORM) + sizeof(farWallRight_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(farWallRight_VERT), farWallRight_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallRight_VERT),  sizeof(farWallRight_NORM), farWallRight_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(farWallRight_VERT) + sizeof(farWallRight_NORM), sizeof(farWallRight_TEX), farWallRight_TEX);


     glGenBuffersARB(1, &floor_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, floor_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(floor_VERT) + sizeof(floor_NORM) + sizeof(floor_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(floor_VERT), floor_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(floor_VERT),  sizeof(floor_NORM), floor_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(floor_VERT) + sizeof(floor_NORM), sizeof(floor_TEX), floor_TEX);


     glGenBuffersARB(1, &leftWallCenter_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallCenter_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftWallCenter_VERT) + sizeof(leftWallCenter_NORM) + sizeof(leftWallCenter_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftWallCenter_VERT), leftWallCenter_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallCenter_VERT),  sizeof(leftWallCenter_NORM), leftWallCenter_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallCenter_VERT) + sizeof(leftWallCenter_NORM), sizeof(leftWallCenter_TEX), leftWallCenter_TEX);


     glGenBuffersARB(1, &leftWallLeft_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallLeft_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftWallLeft_VERT) + sizeof(leftWallLeft_NORM) + sizeof(leftWallLeft_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftWallLeft_VERT), leftWallLeft_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallLeft_VERT),  sizeof(leftWallLeft_NORM), leftWallLeft_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallLeft_VERT) + sizeof(leftWallLeft_NORM), sizeof(leftWallLeft_TEX), leftWallLeft_TEX);


     glGenBuffersARB(1, &leftWallRight_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallRight_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftWallRight_VERT) + sizeof(leftWallRight_NORM) + sizeof(leftWallRight_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftWallRight_VERT),         leftWallRight_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallRight_VERT),  sizeof(leftWallRight_NORM),         leftWallRight_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallRight_VERT) + sizeof(leftWallRight_NORM), sizeof( leftWallRight_TEX),  leftWallRight_TEX);


     glGenBuffersARB(1, &leftWallDoor_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallDoor_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftWallDoor_VERT) + sizeof(leftWallDoor_NORM) + sizeof(leftWallDoor_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftWallDoor_VERT),         leftWallDoor_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallDoor_VERT),  sizeof(leftWallDoor_NORM),         leftWallDoor_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftWallDoor_VERT) + sizeof(leftWallDoor_NORM), sizeof( leftWallDoor_TEX),  leftWallDoor_TEX);

     glGenBuffersARB(1, &nearWallCenter_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallCenter_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(nearWallCenter_VERT) + sizeof(nearWallCenter_NORM) + sizeof(nearWallCenter_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(nearWallCenter_VERT),         nearWallCenter_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallCenter_VERT),  sizeof(nearWallCenter_NORM),         nearWallCenter_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallCenter_VERT) + sizeof(nearWallCenter_NORM), sizeof( nearWallCenter_TEX),  nearWallCenter_TEX);


     glGenBuffersARB(1, &nearWallLeft_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallLeft_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(nearWallLeft_VERT) + sizeof(nearWallLeft_NORM) + sizeof(nearWallLeft_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(nearWallLeft_VERT),         nearWallLeft_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallLeft_VERT),  sizeof(nearWallLeft_NORM),         nearWallLeft_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallLeft_VERT) + sizeof(nearWallLeft_NORM), sizeof( nearWallLeft_TEX),  nearWallLeft_TEX);


     glGenBuffersARB(1, &nearWallRight_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallRight_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(nearWallRight_VERT) + sizeof(nearWallRight_NORM) + sizeof(nearWallRight_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(nearWallRight_VERT),         nearWallRight_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallRight_VERT),  sizeof(nearWallRight_NORM),         nearWallRight_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(nearWallRight_VERT) + sizeof(nearWallRight_NORM), sizeof( nearWallRight_TEX),  nearWallRight_TEX);     


     glGenBuffersARB(1, &rightWallCenter_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallCenter_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightWallCenter_VERT) + sizeof(rightWallCenter_NORM) + sizeof(rightWallCenter_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightWallCenter_VERT),         rightWallCenter_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallCenter_VERT),  sizeof(rightWallCenter_NORM),         rightWallCenter_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallCenter_VERT) + sizeof(rightWallCenter_NORM), sizeof( rightWallCenter_TEX),  rightWallCenter_TEX);


     glGenBuffersARB(1, &rightWallLeft_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallLeft_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightWallLeft_VERT) + sizeof(rightWallLeft_NORM) + sizeof(rightWallLeft_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightWallLeft_VERT),         rightWallLeft_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallLeft_VERT),  sizeof(rightWallLeft_NORM),         rightWallLeft_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallLeft_VERT) + sizeof(rightWallLeft_NORM), sizeof( rightWallLeft_TEX),  rightWallLeft_TEX);


     glGenBuffersARB(1, &rightWallRight_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallRight_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightWallRight_VERT) + sizeof(rightWallRight_NORM) + sizeof(rightWallRight_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightWallRight_VERT),         rightWallRight_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallRight_VERT),  sizeof(rightWallRight_NORM),         rightWallRight_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightWallRight_VERT) + sizeof(rightWallRight_NORM), sizeof( rightWallRight_TEX),  rightWallRight_TEX);


     glGenBuffersARB(1, &bone_104p_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, bone_104p_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(bone_104p_VERT) + sizeof(bone_104p_NORM) + sizeof(bone_104p_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(bone_104p_VERT),         bone_104p_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(bone_104p_VERT),  sizeof(bone_104p_NORM),         bone_104p_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(bone_104p_VERT) + sizeof(bone_104p_NORM), sizeof( bone_104p_TEX),  bone_104p_TEX);


     glGenBuffersARB(1, &ribs_1_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_1_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(ribs_1_VERT) + sizeof(ribs_1_NORM) + sizeof(ribs_1_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(ribs_1_VERT),         ribs_1_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_1_VERT),  sizeof(ribs_1_NORM),         ribs_1_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_1_VERT) + sizeof(ribs_1_NORM), sizeof( ribs_1_TEX),  ribs_1_TEX);


     glGenBuffersARB(1, &skull_00_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, skull_00_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(skull_00_VERT) + sizeof(skull_00_NORM) + sizeof(skull_00_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(skull_00_VERT),         skull_00_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(skull_00_VERT),  sizeof(skull_00_NORM),         skull_00_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(skull_00_VERT) + sizeof(skull_00_NORM), sizeof( skull_00_TEX),  skull_00_TEX);


     glGenBuffersARB(1, &spine_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, spine_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(spine_VERT) + sizeof(spine_NORM) + sizeof(spine_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(spine_VERT),         spine_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spine_VERT),  sizeof(spine_NORM),         spine_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(spine_VERT) + sizeof(spine_NORM), sizeof( spine_TEX),  spine_TEX);


     glGenBuffersARB(1, &ribs_2_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_2_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(ribs_2_VERT) + sizeof(ribs_2_NORM) + sizeof(ribs_2_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(ribs_2_VERT),         ribs_2_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_2_VERT),  sizeof(ribs_2_NORM),         ribs_2_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_2_VERT) + sizeof(ribs_2_NORM), sizeof( ribs_2_TEX),  ribs_2_TEX);


     glGenBuffersARB(1, &ribs_3_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_3_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(ribs_3_VERT) + sizeof(ribs_3_NORM) + sizeof(ribs_3_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(ribs_3_VERT),         ribs_3_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_3_VERT),  sizeof(ribs_3_NORM),         ribs_3_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_3_VERT) + sizeof(ribs_3_NORM), sizeof( ribs_3_TEX),  ribs_3_TEX);


     glGenBuffersARB(1, &ribs_4_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, ribs_4_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(ribs_4_VERT) + sizeof(ribs_4_NORM) + sizeof(ribs_4_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(ribs_4_VERT),         ribs_4_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_4_VERT),  sizeof(ribs_4_NORM),         ribs_4_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(ribs_4_VERT) + sizeof(ribs_4_NORM), sizeof( ribs_4_TEX),  ribs_4_TEX);


     glGenBuffersARB(1, &leftArmUpper_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftArmUpper_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftArmUpper_VERT) + sizeof(leftArmUpper_NORM) + sizeof(leftArmUpper_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftArmUpper_VERT),         leftArmUpper_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftArmUpper_VERT),  sizeof(leftArmUpper_NORM),         leftArmUpper_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftArmUpper_VERT) + sizeof(leftArmUpper_NORM), sizeof( leftArmUpper_TEX),  leftArmUpper_TEX);


     glGenBuffersARB(1, &leftArmLower_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftArmLower_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftArmLower_VERT) + sizeof(leftArmLower_NORM) + sizeof(leftArmLower_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftArmLower_VERT),         leftArmLower_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftArmLower_VERT),  sizeof(leftArmLower_NORM),         leftArmLower_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftArmLower_VERT) + sizeof(leftArmLower_NORM), sizeof( leftArmLower_TEX),  leftArmLower_TEX);


     glGenBuffersARB(1, &rightArmUpper_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightArmUpper_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightArmUpper_VERT) + sizeof(rightArmUpper_NORM) + sizeof(rightArmUpper_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightArmUpper_VERT),         rightArmUpper_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightArmUpper_VERT),  sizeof(rightArmUpper_NORM),         rightArmUpper_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightArmUpper_VERT) + sizeof(rightArmUpper_NORM), sizeof( rightArmUpper_TEX),  rightArmUpper_TEX);


     glGenBuffersARB(1, &rightArmLower_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightArmLower_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightArmLower_VERT) + sizeof(rightArmLower_NORM) + sizeof(rightArmLower_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightArmLower_VERT),         rightArmLower_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightArmLower_VERT),  sizeof(rightArmLower_NORM),         rightArmLower_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightArmLower_VERT) + sizeof(rightArmLower_NORM), sizeof( rightArmLower_TEX),  rightArmLower_TEX);


     glGenBuffersARB(1, &leftLegUpper_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftLegUpper_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftLegUpper_VERT) + sizeof(leftLegUpper_NORM) + sizeof(leftLegUpper_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftLegUpper_VERT),         leftLegUpper_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftLegUpper_VERT),  sizeof(leftLegUpper_NORM),         leftLegUpper_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftLegUpper_VERT) + sizeof(leftLegUpper_NORM), sizeof( leftLegUpper_TEX),  leftLegUpper_TEX);


     glGenBuffersARB(1, &leftLegLower_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftLegLower_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(leftLegLower_VERT) + sizeof(leftLegLower_NORM) + sizeof(leftLegLower_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(leftLegLower_VERT),         leftLegLower_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftLegLower_VERT),  sizeof(leftLegLower_NORM),         leftLegLower_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(leftLegLower_VERT) + sizeof(leftLegLower_NORM), sizeof( leftLegLower_TEX),  leftLegLower_TEX);


     glGenBuffersARB(1, &rightLegUpper_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightLegUpper_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightLegUpper_VERT) + sizeof(rightLegUpper_NORM) + sizeof(rightLegUpper_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightLegUpper_VERT),         rightLegUpper_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightLegUpper_VERT),  sizeof(rightLegUpper_NORM),         rightLegUpper_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightLegUpper_VERT) + sizeof(rightLegUpper_NORM), sizeof( rightLegUpper_TEX),  rightLegUpper_TEX);


     glGenBuffersARB(1, &rightLegLower_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightLegLower_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(rightLegLower_VERT) + sizeof(rightLegLower_NORM) + sizeof(rightLegLower_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(rightLegLower_VERT),         rightLegLower_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightLegLower_VERT),  sizeof(rightLegLower_NORM),         rightLegLower_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(rightLegLower_VERT) + sizeof(rightLegLower_NORM), sizeof( rightLegLower_TEX),  rightLegLower_TEX);


     glGenBuffersARB(1, &pelvis_vboID);
     glBindBufferARB(GL_ARRAY_BUFFER_ARB, pelvis_vboID);
     glBufferDataARB(GL_ARRAY_BUFFER_ARB,       sizeof(pelvis_VERT) + sizeof(pelvis_NORM) + sizeof(pelvis_TEX), 0, GL_STATIC_DRAW_ARB);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB, 0, sizeof(pelvis_VERT),         pelvis_VERT); 
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(pelvis_VERT),  sizeof(pelvis_NORM),         pelvis_NORM);
     glBufferSubDataARB(GL_ARRAY_BUFFER_ARB,    sizeof(pelvis_VERT) + sizeof(pelvis_NORM), sizeof( pelvis_TEX),  pelvis_TEX);


/////////////////////////////////////    
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////


loadTexture("_MODEL_FOLDERS_/farWallCenter/farWallCenter.jpg",    textureMap[1]);
loadTexture("_MODEL_FOLDERS_/farWallLeft/farWallLeft.jpg",        textureMap[2]);
loadTexture("_MODEL_FOLDERS_/farWallRight/farWallRight.jpg",      textureMap[3]);
loadTexture("_MODEL_FOLDERS_/floor/floor.jpg",                    textureMap[4]);
loadTexture("_MODEL_FOLDERS_/leftWallCenter/leftWallCenter.jpg",  textureMap[5]);
loadTexture("_MODEL_FOLDERS_/leftWallLeft/leftWallLeft.jpg",      textureMap[6]);
loadTexture("_MODEL_FOLDERS_/leftWallRight/leftWallRight.jpg",    textureMap[7]);
loadTexture("_MODEL_FOLDERS_/nearWallCenter/nearWallCenter.jpg",  textureMap[8]);
loadTexture("_MODEL_FOLDERS_/nearWallLeft/nearWallLeft.jpg",      textureMap[9]);
loadTexture("_MODEL_FOLDERS_/nearWallRight/nearWallRight.jpg",    textureMap[10]);
loadTexture("_MODEL_FOLDERS_/rightWallCenter/rightWallCenter.jpg",textureMap[11]);
loadTexture("_MODEL_FOLDERS_/rightWallLeft/rightWallLeft.jpg",    textureMap[12]);
loadTexture("_MODEL_FOLDERS_/rightWallRight/rightWallRight.jpg",  textureMap[13]);
loadTexture("_MODEL_FOLDERS_/leftWallDoor/leftWallDoor.jpg",      textureMap[15]);

//loadTexture("_MODEL_FOLDERS_/head_01_marble.jpg",textureMap[45]);----->>>>CONTINUE WITH -->> textureMap[46]


loadTexture("_MODEL_FOLDERS_/SKELETON/bone_104p.jpg",              textureMap[46]);
loadTexture("_MODEL_FOLDERS_/SKELETON/bone_104p_DOT3.jpg",         normalMap[ 46]);
loadTexture("_MODEL_FOLDERS_/SKELETON/ribs/ribs_1.jpg",            textureMap[47]);
loadTexture("_MODEL_FOLDERS_/SKELETON/ribs/ribs_DOT3.jpg",         normalMap[ 47]);
loadTexture("_MODEL_FOLDERS_/SKELETON/SKULL/skull_03.jpg",         textureMap[48]);
loadTexture("_MODEL_FOLDERS_/SKELETON/SKULL/skull_00_DOT3.jpg",    normalMap[ 48]);
loadTexture("_MODEL_FOLDERS_/SKELETON/SPINE/spine_OCCLUSION.jpg",  textureMap[49]);
loadTexture("_MODEL_FOLDERS_/SKELETON/SPINE/spine_DOT3.jpg",       normalMap[ 49]);
loadTexture("_MODEL_FOLDERS_/SKELETON/ribs/ribs_2.jpg",            textureMap[50]);
loadTexture("_MODEL_FOLDERS_/SKELETON/ribs/ribs_3.jpg",            textureMap[51]);
loadTexture("_MODEL_FOLDERS_/SKELETON/ribs/ribs_4.jpg",            textureMap[52]);

loadTexture("_MODEL_FOLDERS_/SKELETON/leftArm/leftArmUpper.jpg",   textureMap[53]);
loadTexture("_MODEL_FOLDERS_/SKELETON/leftArm/leftArmLower.jpg",   textureMap[54]);
loadTexture("_MODEL_FOLDERS_/SKELETON/rightArm/rightArmUpper.jpg", textureMap[55]);
loadTexture("_MODEL_FOLDERS_/SKELETON/rightArm/rightArmLower.jpg", textureMap[56]);
loadTexture("_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegUpper.jpg",   textureMap[57]);
loadTexture("_MODEL_FOLDERS_/SKELETON/leftLeg/leftLegLower.jpg",   textureMap[58]);
loadTexture("_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegUpper.jpg", textureMap[59]);
loadTexture("_MODEL_FOLDERS_/SKELETON/rightLeg/rightLegLower.jpg", textureMap[60]);
loadTexture("_MODEL_FOLDERS_/SKELETON/pelvis/pelvis.jpg",          textureMap[61]);
loadTexture("_MODEL_FOLDERS_/SKELETON/pelvis/pelvis_DOT3.jpg",     normalMap[ 61]);


look_LEFT_RIGHT =  0.399997;
look_UP_DOWN    =  60;
eyePosition[0]  =  0.02;
eyePosition[1]  = -0.22;
eyePosition[2]  = -3.1;

Logic_00();	
    
    alutInit(NULL, 0);
	alGetError();
	LoadALData();
    atexit(KillALData);

}
