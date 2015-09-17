

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
