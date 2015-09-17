void ME_animationSequencing(void)
{
     if(ME_animationBlendFactor >= 0.0f && ME_animationBlendFactor <= 1.0f)
     {

         skeletonPosition[0]           = skeletonPosition_MOVE_FRAMEA[0]    * (1 - ME_animationBlendFactor) + skeletonPosition_MOVE_FRAMEB[0]    * ME_animationBlendFactor;        
        
         skeletonPosition[1]           = skeletonPosition_MOVE_FRAMEA[1]    * (1 - ME_animationBlendFactor) 
                                   + skeletonPosition_MOVE_FRAMEB[1]    * ME_animationBlendFactor; 
        
         skeletonPosition[2]           = skeletonPosition_MOVE_FRAMEA[2]    * (1 - ME_animationBlendFactor) 
                                   + skeletonPosition_MOVE_FRAMEB[2]    * ME_animationBlendFactor;
     }
   
     if(ME_animationBlendFactor >= 1.0f)
     {
        ME_setSelection ++;
        ME_animationBlendFactor = 0.0f;
     }
     
     if(ME_setSelection == ME_setSelectionLimit+1)
     {
        ME_setSelection = 1;
     }   
     
     ME_animationBlendFactor += ME_FRAME_TIME;
    


                            if(animationBlendFactor_HEAD >= 0.0f && animationBlendFactor_HEAD <= 1.0f)
                            {                          
                                  head_ROTATE[3]            = head_ROTATE_FRAMEA[3]            * (1 - animationBlendFactor_HEAD) 
                                                            + head_ROTATE_FRAMEB[3]            * animationBlendFactor_HEAD;        
        
                                  head_ROTATE[0]            = head_ROTATE_FRAMEA[0]            * (1 - animationBlendFactor_HEAD) 
                                                            + head_ROTATE_FRAMEB[0]            * animationBlendFactor_HEAD; 
        
                                  head_ROTATE[1]            = head_ROTATE_FRAMEA[1]            * (1 - animationBlendFactor_HEAD) 
                                                            + head_ROTATE_FRAMEB[1]            * animationBlendFactor_HEAD;
        
                                  head_ROTATE[2]            = head_ROTATE_FRAMEA[2]            * (1 - animationBlendFactor_HEAD) 
                                                            + head_ROTATE_FRAMEB[2]            * animationBlendFactor_HEAD; 
                            }
    
                            if(animationBlendFactor_HEAD >= 1.0f)
                            {
                                 setSelection_HEAD ++;
                                 animationBlendFactor_HEAD = 0.0f;
                            }
    
                            if(setSelection_HEAD == setSelectionLimit_HEAD+1)
                            {
                                 setSelection_HEAD = 1;
                            }
    
                            animationBlendFactor_HEAD       += HEAD_FRAME_TIME;   
    
    
       
        if(animationBlendFactor_TORSO >= 0.0f && animationBlendFactor_TORSO <= 1.0f)
        {    
              torso_ROTATE[3]           = torso_ROTATE_FRAMEA[3]           * (1 - animationBlendFactor_TORSO) 
                                        + torso_ROTATE_FRAMEB[3]           * animationBlendFactor_TORSO;        
        
              torso_ROTATE[0]           = torso_ROTATE_FRAMEA[0]           * (1 - animationBlendFactor_TORSO) 
                                        + torso_ROTATE_FRAMEB[0]           * animationBlendFactor_TORSO; 
        
              torso_ROTATE[1]           = torso_ROTATE_FRAMEA[1]           * (1 - animationBlendFactor_TORSO) 
                                        + torso_ROTATE_FRAMEB[1]           * animationBlendFactor_TORSO;
        
              torso_ROTATE[2]           = torso_ROTATE_FRAMEA[2]           * (1 - animationBlendFactor_TORSO) 
                                        + torso_ROTATE_FRAMEB[2]           * animationBlendFactor_TORSO;     
        }    
        if(animationBlendFactor_TORSO >= 1.0f)
        {
             setSelection_TORSO ++;
             animationBlendFactor_TORSO = 0.0f;
        }
    
        if(setSelection_TORSO == setSelectionLimit_TORSO+1)
        {
             setSelection_TORSO = 1;
        }
    
        animationBlendFactor_TORSO       += TORSO_FRAME_TIME;    
    
    
    
                              if(animationBlendFactor_HIPS >= 0.0f && animationBlendFactor_HIPS <= 1.0f)
                              {     
                                         hips_ROTATE[3]            = hips_ROTATE_FRAMEA[3]            * (1 - animationBlendFactor_HIPS) 
                                                                   + hips_ROTATE_FRAMEB[3]            * animationBlendFactor_HIPS;        
        
                                         hips_ROTATE[0]            = hips_ROTATE_FRAMEA[0]            * (1 - animationBlendFactor_HIPS) 
                                                                   + hips_ROTATE_FRAMEB[0]            * animationBlendFactor_HIPS; 
        
                                         hips_ROTATE[1]            = hips_ROTATE_FRAMEA[1]            * (1 - animationBlendFactor_HIPS) 
                                                                   + hips_ROTATE_FRAMEB[1]            * animationBlendFactor_HIPS;
        
                                         hips_ROTATE[2]            = hips_ROTATE_FRAMEA[2]            * (1 - animationBlendFactor_HIPS) 
                                                                   + hips_ROTATE_FRAMEB[2]            * animationBlendFactor_HIPS;    
                             }
                             if(animationBlendFactor_HIPS >= 1.0f)
                             {
                                  setSelection_HIPS ++;
                                  animationBlendFactor_HIPS = 0.0f;
                             }
    
                             if(setSelection_HIPS == setSelectionLimit_HIPS+1)
                             {
                                  setSelection_HIPS = 1;
                             }
                             
                             animationBlendFactor_HIPS       += HIPS_FRAME_TIME;   
    
   
   
        if(animationBlendFactor_LEFT_ARM >= 0.0f && animationBlendFactor_LEFT_ARM <= 1.0f)
        {    
             leftUpperArm_ROTATE[3]    = leftUpperArm_ROTATE_FRAMEA[3]    * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftUpperArm_ROTATE_FRAMEB[3]    * animationBlendFactor_LEFT_ARM;        
        
             leftUpperArm_ROTATE[0]    = leftUpperArm_ROTATE_FRAMEA[0]    * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftUpperArm_ROTATE_FRAMEB[0]    * animationBlendFactor_LEFT_ARM; 
        
             leftUpperArm_ROTATE[1]    = leftUpperArm_ROTATE_FRAMEA[1]    * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftUpperArm_ROTATE_FRAMEB[1]    * animationBlendFactor_LEFT_ARM;
        
             leftUpperArm_ROTATE[2]    = leftUpperArm_ROTATE_FRAMEA[2]    * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftUpperArm_ROTATE_FRAMEB[2]    * animationBlendFactor_LEFT_ARM;
             ///////                               
          
             leftForeArm_ROTATE[3]     = leftForeArm_ROTATE_FRAMEA[3]     * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftForeArm_ROTATE_FRAMEB[3]     * animationBlendFactor_LEFT_ARM;        
        
             leftForeArm_ROTATE[0]     = leftForeArm_ROTATE_FRAMEA[0]     * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftForeArm_ROTATE_FRAMEB[0]     * animationBlendFactor_LEFT_ARM; 
        
             leftForeArm_ROTATE[1]     = leftForeArm_ROTATE_FRAMEA[1]     * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftForeArm_ROTATE_FRAMEB[1]     * animationBlendFactor_LEFT_ARM;
        
             leftForeArm_ROTATE[2]     = leftForeArm_ROTATE_FRAMEA[2]     * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftForeArm_ROTATE_FRAMEB[2]     * animationBlendFactor_LEFT_ARM;                                          
             ///////                              
        
             leftGlovedHand_ROTATE[3]  = leftGlovedHand_ROTATE_FRAMEA[3]  * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftGlovedHand_ROTATE_FRAMEB[3]  * animationBlendFactor_LEFT_ARM;        
        
             leftGlovedHand_ROTATE[0]  = leftGlovedHand_ROTATE_FRAMEA[0]  * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftGlovedHand_ROTATE_FRAMEB[0]  * animationBlendFactor_LEFT_ARM; 
        
             leftGlovedHand_ROTATE[1]  = leftGlovedHand_ROTATE_FRAMEA[1]  * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftGlovedHand_ROTATE_FRAMEB[1]  * animationBlendFactor_LEFT_ARM;
        
             leftGlovedHand_ROTATE[2]  = leftGlovedHand_ROTATE_FRAMEA[2]  * (1 - animationBlendFactor_LEFT_ARM) 
                                       + leftGlovedHand_ROTATE_FRAMEB[2]  * animationBlendFactor_LEFT_ARM;      
        }    
        if(animationBlendFactor_LEFT_ARM >= 1.0f)
        {
             setSelection_LEFT_ARM ++;
             animationBlendFactor_LEFT_ARM = 0.0f;
        }
    
        if(setSelection_LEFT_ARM == setSelectionLimit_LEFT_ARM+1)
        {
             setSelection_LEFT_ARM = 1;
        }
    
        animationBlendFactor_LEFT_ARM       += LEFT_ARM_FRAME_TIME; 



                              if(animationBlendFactor_RIGHT_ARM >= 0.0f && animationBlendFactor_RIGHT_ARM <= 1.0f)
                              {     
                                  rightArmUpper_ROTATE[3]   = rightArmUpper_ROTATE_FRAMEA[3]   * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightArmUpper_ROTATE_FRAMEB[3]   * animationBlendFactor_RIGHT_ARM;        
        
                                  rightArmUpper_ROTATE[0]   = rightArmUpper_ROTATE_FRAMEA[0]   * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightArmUpper_ROTATE_FRAMEB[0]   * animationBlendFactor_RIGHT_ARM; 
        
                                  rightArmUpper_ROTATE[1]   = rightArmUpper_ROTATE_FRAMEA[1]   * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightArmUpper_ROTATE_FRAMEB[1]   * animationBlendFactor_RIGHT_ARM;
        
                                  rightArmUpper_ROTATE[2]   = rightArmUpper_ROTATE_FRAMEA[2]   * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightArmUpper_ROTATE_FRAMEB[2]   * animationBlendFactor_RIGHT_ARM;
                                  ////////                                
        
                                  rightForeArm_ROTATE[3]    = rightForeArm_ROTATE_FRAMEA[3]    * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightForeArm_ROTATE_FRAMEB[3]    * animationBlendFactor_RIGHT_ARM;        
        
                                  rightForeArm_ROTATE[0]    = rightForeArm_ROTATE_FRAMEA[0]    * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightForeArm_ROTATE_FRAMEB[0]    * animationBlendFactor_RIGHT_ARM; 
        
                                  rightForeArm_ROTATE[1]    = rightForeArm_ROTATE_FRAMEA[1]    * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightForeArm_ROTATE_FRAMEB[1]    * animationBlendFactor_RIGHT_ARM;
        
                                  rightForeArm_ROTATE[2]    = rightForeArm_ROTATE_FRAMEA[2]    * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightForeArm_ROTATE_FRAMEB[2]    * animationBlendFactor_RIGHT_ARM;                                          
                                  ////////                              
        
                                  rightGlovedHand_ROTATE[3] = rightGlovedHand_ROTATE_FRAMEA[3] * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightGlovedHand_ROTATE_FRAMEB[3] * animationBlendFactor_RIGHT_ARM;        
        
                                  rightGlovedHand_ROTATE[0] = rightGlovedHand_ROTATE_FRAMEA[0] * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightGlovedHand_ROTATE_FRAMEB[0] * animationBlendFactor_RIGHT_ARM; 
        
                                  rightGlovedHand_ROTATE[1] = rightGlovedHand_ROTATE_FRAMEA[1] * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightGlovedHand_ROTATE_FRAMEB[1] * animationBlendFactor_RIGHT_ARM;
        
                                  rightGlovedHand_ROTATE[2] = rightGlovedHand_ROTATE_FRAMEA[2] * (1 - animationBlendFactor_RIGHT_ARM) 
                                                            + rightGlovedHand_ROTATE_FRAMEB[2] * animationBlendFactor_RIGHT_ARM;    
                             }
                             
                             if(animationBlendFactor_RIGHT_ARM >= 1.0f)
                             {
                                  setSelection_RIGHT_ARM ++;
                                  animationBlendFactor_RIGHT_ARM = 0.0f;
                             }
    
                             if(setSelection_RIGHT_ARM == setSelectionLimit_RIGHT_ARM + 1)
                             {
                                  setSelection_RIGHT_ARM = 1;
                             }
                             
                             animationBlendFactor_RIGHT_ARM       += RIGHT_ARM_FRAME_TIME;  



        if(animationBlendFactor_LEFT_LEG >= 0.0f && animationBlendFactor_LEFT_LEG <= 1.0f)
        {    

             leftUpperLeg_ROTATE[3]    = leftUpperLeg_ROTATE_FRAMEA[3]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftUpperLeg_ROTATE_FRAMEB[3]    * animationBlendFactor_LEFT_LEG;        
        
             leftUpperLeg_ROTATE[0]    = leftUpperLeg_ROTATE_FRAMEA[0]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftUpperLeg_ROTATE_FRAMEB[0]    * animationBlendFactor_LEFT_LEG; 
        
             leftUpperLeg_ROTATE[1]    = leftUpperLeg_ROTATE_FRAMEA[1]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftUpperLeg_ROTATE_FRAMEB[1]    * animationBlendFactor_LEFT_LEG;
        
             leftUpperLeg_ROTATE[2]    = leftUpperLeg_ROTATE_FRAMEA[2]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftUpperLeg_ROTATE_FRAMEB[2]    * animationBlendFactor_LEFT_LEG;
             ///////                                
        
             leftLowerLeg_ROTATE[3]    = leftLowerLeg_ROTATE_FRAMEA[3]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftLowerLeg_ROTATE_FRAMEB[3]    * animationBlendFactor_LEFT_LEG;        
        
             leftLowerLeg_ROTATE[0]    = leftLowerLeg_ROTATE_FRAMEA[0]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftLowerLeg_ROTATE_FRAMEB[0]    * animationBlendFactor_LEFT_LEG; 
        
             leftLowerLeg_ROTATE[1]    = leftLowerLeg_ROTATE_FRAMEA[1]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftLowerLeg_ROTATE_FRAMEB[1]    * animationBlendFactor_LEFT_LEG;
        
             leftLowerLeg_ROTATE[2]    = leftLowerLeg_ROTATE_FRAMEA[2]    * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftLowerLeg_ROTATE_FRAMEB[2]    * animationBlendFactor_LEFT_LEG;                                          
             ///////                            
        
             leftFoot_ROTATE[3]        = leftFoot_ROTATE_FRAMEA[3]        * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftFoot_ROTATE_FRAMEB[3]        * animationBlendFactor_LEFT_LEG;        
        
             leftFoot_ROTATE[0]        = leftFoot_ROTATE_FRAMEA[0]        * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftFoot_ROTATE_FRAMEB[0]        * animationBlendFactor_LEFT_LEG; 
        
             leftFoot_ROTATE[1]        = leftFoot_ROTATE_FRAMEA[1]        * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftFoot_ROTATE_FRAMEB[1]        * animationBlendFactor_LEFT_LEG;
        
             leftFoot_ROTATE[2]        = leftFoot_ROTATE_FRAMEA[2]        * (1 - animationBlendFactor_LEFT_LEG) 
                                       + leftFoot_ROTATE_FRAMEB[2]        * animationBlendFactor_LEFT_LEG;     
        }    
        
        if(animationBlendFactor_LEFT_LEG >= 1.0f)
        {
             setSelection_LEFT_LEG ++;
             animationBlendFactor_LEFT_LEG = 0.0f;
        }
    
        if(setSelection_LEFT_LEG == setSelectionLimit_LEFT_LEG+1)
        {
             setSelection_LEFT_LEG = 1;
        }
    
        animationBlendFactor_LEFT_LEG       += LEFT_LEG_FRAME_TIME; 
        
        

                              if(animationBlendFactor_RIGHT_LEG >= 0.0f && animationBlendFactor_RIGHT_LEG <= 1.0f)
                              {     
                                  rightUpperLeg_ROTATE[3]   = rightUpperLeg_ROTATE_FRAMEA[3]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightUpperLeg_ROTATE_FRAMEB[3]   * animationBlendFactor_RIGHT_LEG;        
        
                                  rightUpperLeg_ROTATE[0]   = rightUpperLeg_ROTATE_FRAMEA[0]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightUpperLeg_ROTATE_FRAMEB[0]   * animationBlendFactor_RIGHT_LEG; 
        
                                  rightUpperLeg_ROTATE[1]   = rightUpperLeg_ROTATE_FRAMEA[1]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightUpperLeg_ROTATE_FRAMEB[1]   * animationBlendFactor_RIGHT_LEG;
        
                                  rightUpperLeg_ROTATE[2]   = rightUpperLeg_ROTATE_FRAMEA[2]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightUpperLeg_ROTATE_FRAMEB[2]   * animationBlendFactor_RIGHT_LEG;
                                  ///////                                
        
                                  rightLowerLeg_ROTATE[3]   = rightLowerLeg_ROTATE_FRAMEA[3]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightLowerLeg_ROTATE_FRAMEB[3]   * animationBlendFactor_RIGHT_LEG;        
        
                                  rightLowerLeg_ROTATE[0]   = rightLowerLeg_ROTATE_FRAMEA[0]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightLowerLeg_ROTATE_FRAMEB[0]   * animationBlendFactor_RIGHT_LEG; 
        
                                  rightLowerLeg_ROTATE[1]   = rightLowerLeg_ROTATE_FRAMEA[1]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightLowerLeg_ROTATE_FRAMEB[1]   * animationBlendFactor_RIGHT_LEG;
        
                                  rightLowerLeg_ROTATE[2]   = rightLowerLeg_ROTATE_FRAMEA[2]   * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightLowerLeg_ROTATE_FRAMEB[2]   * animationBlendFactor_RIGHT_LEG;                                          
                                  ///////                            
        
                                  rightFoot_ROTATE[3]       = rightFoot_ROTATE_FRAMEA[3]       * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightFoot_ROTATE_FRAMEB[3]       * animationBlendFactor_RIGHT_LEG;        
        
                                  rightFoot_ROTATE[0]       = rightFoot_ROTATE_FRAMEA[0]       * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightFoot_ROTATE_FRAMEB[0]       * animationBlendFactor_RIGHT_LEG; 
        
                                  rightFoot_ROTATE[1]       = rightFoot_ROTATE_FRAMEA[1]       * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightFoot_ROTATE_FRAMEB[1]       * animationBlendFactor_RIGHT_LEG;
        
                                  rightFoot_ROTATE[2]       = rightFoot_ROTATE_FRAMEA[2]       * (1 - animationBlendFactor_RIGHT_LEG) 
                                                            + rightFoot_ROTATE_FRAMEB[2]       * animationBlendFactor_RIGHT_LEG; 
                             }
                             
                             if(animationBlendFactor_RIGHT_LEG >= 1.0f)
                             {
                                  setSelection_RIGHT_LEG ++;
                                  animationBlendFactor_RIGHT_LEG = 0.0f;
                             }
    
                             if(setSelection_RIGHT_LEG == setSelectionLimit_RIGHT_LEG + 1)
                             {
                                  setSelection_RIGHT_LEG = 1;
                             }
                             
                             animationBlendFactor_RIGHT_LEG       += RIGHT_LEG_FRAME_TIME;    
   

            #include "ME_AnimationSet_00.cpp"                   
                           
                            
                            
}









