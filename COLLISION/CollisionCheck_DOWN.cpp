void CollisionCheck_DOWN(float X1, float Y1, float X2, float Y2)           //////*****************************************
{   
    DOWN = TRUE;
    
    
for( int i = 0; i < numberOfCollisionObjects; i++)
{
    
    /* X3[i] = left_edge[i];     
     Y3[i] = lower_edge[i];      
     X4[i] = right_edge[i];    
     Y4[i] = upper_edge[i];   */
     
 planeX3_inner[i] = X3[i] + .1;   ////left edge
 planeX3_outer[i] = X3[i] - .1;   ////left edge
 planeX4_inner[i] = X4[i] - .1;   ////right edge
 planeX4_outer[i] = X4[i] + .1;   ////right edge
 planeY3_inner[i] = Y3[i] + .1;   ////bottom edge
 planeY3_outer[i] = Y3[i] - .1;   ////bottom edge
 planeY4_inner[i] = Y4[i] - .1;   ////top edge
 planeY4_outer[i] = Y4[i] + .1;   ////top edge
       
     
   if((X2 >= X3[i]) && (X4[i] >= X1) && (Y2 >= Y3[i]) && (Y4[i] >= Y1))
         DOWN = FALSE;
         
   if((X2 >= planeX3_outer[i]) && (X2 <= planeX3_inner[i]) && (Y1 <= planeY4_outer[i]) && (Y2 >= planeY3_outer[i]) && (DOWN == FALSE))
        DOWN = TRUE;
   if((X1 >= planeX4_inner[i]) && (X1 <= planeX4_outer[i]) && (Y1 <= planeY4_outer[i]) && (Y2 >= planeY3_outer[i]) && (DOWN == FALSE))
        DOWN = TRUE;

  
  if((Y2 >= planeY3_outer[i]) && (Y2 <= planeY3_inner[i]) && (X2 >= planeX3_outer[i]) && (X1 <= planeX4_outer[i]) && (DOWN == FALSE))  /////clears sticky edges
        DOWN = TRUE;
        
  if(DOWN == FALSE)
       break;      
        
}        
    
                                     ////****____end of for loop ____****          
}
