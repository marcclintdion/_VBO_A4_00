void CenterPieceGround(void)
{
      glDisable(GL_BLEND);
      glPushMatrix();            
      glPushMatrix();
      glLoadIdentity();
      glLightfv (GL_LIGHT0,GL_POSITION, lightpos_pillerBush);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationPillerBushGround);      
      glPopMatrix();      
       
      //glEnable(GL_BLEND);
      runNmapShader(141, cubeBushPlusTree1, textureMap[12], normalMap[12]);
      glPopMatrix();
}
void CenterPieceTreeLeaves(void)
{
      glPushMatrix();            
      glPushMatrix();
      glLoadIdentity();      
      glLightfv (GL_LIGHT0,GL_POSITION, lightpos_pillerBush);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationPillerBush);         
      glPopMatrix();
       
      runNmapShader(168, plusTree1, textureMap[14], normalMap[14]);
      glPushMatrix();
         glLoadIdentity();      
         glLightfv (GL_LIGHT0,GL_POSITION,light4LeavesRound);
         glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationPillerBush);
      glPopMatrix();  
      runNmapShader(147, leavesRound, textureMap[16], normalMap[16]);      
      glPopMatrix();
}
void CenterPieceFrontWall(void)
{
      glPushMatrix();            
        glPushMatrix();
        glLoadIdentity();
             glLightfv (GL_LIGHT0,GL_POSITION, lightPosFrontWall);
             glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationFrontWall);            
        glPopMatrix(); 
         
      runNmapShader(102, rockWallWide_00, textureMap[44], normalMap[44]);
      glPopMatrix();
}
void CenterPieceRightSideWall(void)
{
      glPushMatrix();            
        glPushMatrix();
        glLoadIdentity();      
      glLightfv (GL_LIGHT0,GL_POSITION, rightSideWallLight);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationRightSideWallLight);          
            glPopMatrix();
         
      runNmapShader(60, rightSideWall, textureMap[25], normalMap[25]);
      glPopMatrix();    
}
void CenterPieceCorners(void)
{
      glPushMatrix();
        glPushMatrix();
        glLoadIdentity();      
      glLightfv (GL_LIGHT0,GL_POSITION,frontRightCorner);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationFrontRightCorner);
            glPopMatrix();
         
      runNmapShader(12, cornerStone_FRa, textureMap[17], normalMap[17]);
      runNmapShader(12, cornerStone_FRb, textureMap[17], normalMap[18]);
      runNmapShader(36, cornerStone_x3a, textureMap[17], normalMap[17]);
      runNmapShader(36, cornerStone_x3b, textureMap[17], normalMap[18]);
      runNmapShader(30, topStone,        textureMap[19], normalMap[19]);
      runNmapShader(66, topStone_x3,     textureMap[19], normalMap[19]);
      glPopMatrix();   
}
void RearLeftStairs(void)
{
      glPushMatrix();
        glPushMatrix();
        glLoadIdentity();      
        glLightfv (GL_LIGHT0,GL_POSITION,stoneStairs_0_Light);
        glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationStoneStairs_0_Light);
        glPopMatrix();
       
      runNmapShader(72, bottomStair,     textureMap[21], normalMap[21]);
      runNmapShader(45, middleStair,     textureMap[24], normalMap[24]);
      runNmapShader(42, upperStair,      textureMap[23], normalMap[23]);
      runNmapShader(12, topWalkway,      textureMap[22], normalMap[22]);
      glPopMatrix();
}
void Tree_05_BottomRight(void)
{
      glPushMatrix();
        glPushMatrix();
          glLoadIdentity();      
          glLightfv (GL_LIGHT0,GL_POSITION, tree_05_Light);
          glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationTree_05_Light);
        glPopMatrix();
       
      runNmapShader(183, tree_05, textureMap[26], normalMap[26]);
      glPopMatrix();
}

      
void FloorTiles_x100(void)
{
      glPushMatrix();
        glPushMatrix();
        glLoadIdentity();
      glLightfv (GL_LIGHT0,GL_POSITION, tile_00_09_Light);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationTile_00_09_Light);     ///////_____TILES///////_____TILES///////_____TILES///////_____TILES///////_____TILES
            glPopMatrix();
       
      LoadTileModels_00_100();
      glPopMatrix();
}
void Borders(void)
{
      glDisable(GL_CULL_FACE);
      glPushMatrix();
        glPushMatrix();
        glLoadIdentity();      
      glLightfv (GL_LIGHT0,GL_POSITION,borderRight_light);
      glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationBorderRight);
            glPopMatrix();
              
      runNmapShader(60, borderRight, smallDetail[1], smallDetailDOT3[1]);
      runNmapShader(60, borderLeft, smallDetail[1], smallDetailDOT3[1]);
      runNmapShader(60, borderFar, smallDetail[1], smallDetailDOT3[1]);
      glPopMatrix();
      glEnable(GL_CULL_FACE);
}

void Tree_06_LeftMiddle(void)
{
      
      glPushMatrix();
      glTranslatef(.3, 0, 0);    
          glPushMatrix();
          glLoadIdentity();      
             glLightfv (GL_LIGHT0,GL_POSITION, tree_06_Light);
             glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationTree_06_Light);      
          glPopMatrix();
          
          runNmapShader(162, tree_06, textureMap[39], normalMap[39]);
          glPopMatrix();
}
                    void Tree_06_Leaves_LeftMiddle(void)
                    {
                         glPushMatrix();
                         glTranslatef(.3, 0, 0);      
                              glEnable(GL_BLEND);
                              glPushMatrix();
                              glLoadIdentity();       
                              glLightfv (GL_LIGHT0,GL_POSITION,tree_06_leaves_light);
                              glLightf (GL_LIGHT0, GL_QUADRATIC_ATTENUATION, quadraticAttenuationTree_06_leaves);////___(GL_BLEND) = true___/////should be rendered later 
                              glPopMatrix();      
                         runNmapShader(96, tree_06_leaves, smallDetail[0], smallDetailDOT3[0]);
                         glPopMatrix();     
                    }
