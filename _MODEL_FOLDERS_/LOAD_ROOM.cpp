        glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallCenter_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(farWallCenter_VERT) + sizeof(farWallCenter_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(farWallCenter_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[1]);
              glDrawArrays(GL_TRIANGLES, 0, 216);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
     

//-----------------------------
              glLoadIdentity();
//-----------------------------

     
       glPushMatrix(); 
              glEnable(GL_TEXTURE_2D);
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallLeft_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(farWallLeft_VERT) + sizeof(farWallLeft_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(farWallLeft_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[2]);
              glDrawArrays(GL_TRIANGLES, 0, 210);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
     

//-----------------------------
              glLoadIdentity();
//-----------------------------


      glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, farWallRight_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(farWallRight_VERT) + sizeof(farWallRight_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(farWallRight_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[3]);
              glDrawArrays(GL_TRIANGLES, 0, 210);

              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
      glPopMatrix(); 
     


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       
       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, floor_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(floor_VERT) + sizeof(floor_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(floor_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[4]);
              glDrawArrays(GL_TRIANGLES, 0, 6);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 

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


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallLeft_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftWallLeft_VERT) + sizeof(leftWallLeft_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftWallLeft_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
	          glBindTexture(GL_TEXTURE_2D, textureMap[6]);
              glDrawArrays(GL_TRIANGLES, 0, 69);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
   

//-----------------------------
              glLoadIdentity();
//-----------------------------


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallRight_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftWallRight_VERT) + sizeof(leftWallRight_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftWallRight_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[7]);
              glDrawArrays(GL_TRIANGLES, 0, 66);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
   
//-----------------------------
              glLoadIdentity();
//-----------------------------

       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, leftWallDoor_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(leftWallDoor_VERT) + sizeof(leftWallDoor_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(leftWallDoor_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[15]);
              glDrawArrays(GL_TRIANGLES, 0, 375);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallCenter_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(nearWallCenter_VERT) + sizeof(nearWallCenter_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(nearWallCenter_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
	          glBindTexture(GL_TEXTURE_2D, textureMap[8]);
              glDrawArrays(GL_TRIANGLES, 0, 216);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix();     

//-----------------------------
              glLoadIdentity();
//-----------------------------


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallLeft_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(nearWallLeft_VERT) + sizeof(nearWallLeft_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(nearWallLeft_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[9]);
              glDrawArrays(GL_TRIANGLES, 0, 198);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
    

//-----------------------------
              glLoadIdentity();
//-----------------------------


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, nearWallRight_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(nearWallRight_VERT) + sizeof(nearWallRight_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(nearWallRight_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[10]);
              glDrawArrays(GL_TRIANGLES, 0, 198);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

//-----------------------------
              glLoadIdentity();
//-----------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallCenter_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightWallCenter_VERT) + sizeof(rightWallCenter_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightWallCenter_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[11]);
              glDrawArrays(GL_TRIANGLES, 0, 162);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 


//-----------------------------
              glLoadIdentity();
//-----------------------------


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallLeft_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightWallLeft_VERT) + sizeof(rightWallLeft_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightWallLeft_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[12]);
              glDrawArrays(GL_TRIANGLES, 0, 66);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 


//-----------------------------
              glLoadIdentity();
//-----------------------------


       glPushMatrix(); 
              glBindBufferARB(GL_ARRAY_BUFFER_ARB, rightWallRight_vboID);
                   
              glEnableClientState(GL_TEXTURE_COORD_ARRAY );                 
              glEnableClientState(GL_NORMAL_ARRAY);
              glEnableClientState(GL_VERTEX_ARRAY);
            
              glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(rightWallRight_VERT) + sizeof(rightWallRight_NORM)));              
              glNormalPointer(GL_FLOAT, 0, (void*)sizeof(rightWallRight_VERT));
              glVertexPointer(3, GL_FLOAT, 0, 0);

              glActiveTextureARB(GL_TEXTURE0_ARB);
              glBindTexture(GL_TEXTURE_2D, textureMap[13]);
              glDrawArrays(GL_TRIANGLES, 0, 69);
                            
              glDisableClientState(GL_VERTEX_ARRAY); 
              glDisableClientState(GL_NORMAL_ARRAY);
              glDisableClientState(GL_TEXTURE_COORD_ARRAY);
       glPopMatrix(); 
