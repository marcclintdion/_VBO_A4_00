void Logic_00(void)
{
        
left_edge[0] =  -1.3;
right_edge[0] =  -.10;   ///topWall left
upper_edge[0] =  0.82;
lower_edge[0] =  0.72;


left_edge[5] =    .10;
right_edge[5] =  1.30;
upper_edge[5] =  0.82;   ///topWall right
lower_edge[5] =  0.72;



left_edge[1] = -1.3;
right_edge[1] =  -.10;
upper_edge[1] = -0.72;
lower_edge[1] = -0.82;   ///bottomWall left 

left_edge[6]  = .10;
right_edge[6] = 1.3;
upper_edge[6] = -0.72;
lower_edge[6] = -0.82;   ///bottomWall right


left_edge[2]  = -1.3;
right_edge[2] = -1.2;   //leftWall upper
upper_edge[2] =  0.82;
lower_edge[2] =  0.11;


left_edge[7]  = -1.3;
right_edge[7] = -1.2;   //leftWall bottom
upper_edge[7] = -0.11;
lower_edge[7] =  -0.82;


left_edge [3] =  1.2;
right_edge[3] =  1.3;
upper_edge[3] =  0.82;
lower_edge[3] =  0.11;   ///rightWall upper


left_edge[4]  = 1.2;
right_edge[4] = 1.3;
upper_edge[4] = -0.11;
lower_edge[4] = -0.82;   ///rightWall Bottom


 


    for(int i = 0; i < numberOfCollisionObjects; i++)
    {
           X3[i] = left_edge[i];
           X4[i] = right_edge[i];     
           Y3[i] = lower_edge[i];      
           Y4[i] = upper_edge[i]; 
    }
}
