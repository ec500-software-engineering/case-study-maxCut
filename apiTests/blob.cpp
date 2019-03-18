#include "blob.h"
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h> //uses rand

/*
 * This class represents the main AI of blobworld
 * Each instince of this class is a unique AI.
 */
Blob::Blob()
{
    x = 90;
    y = 90;
    size = 50;
    facing = up;
}

/*
 * This calculates any movements the AI should take.
 */
void Blob::move(int i)
{
    switch(facing)
    {
        case up : y+=i; break;
        case down: y-=i; break;
        case left: x-=i; break;
        case right: x+=i; break;
    }
}

void Blob::update()
{
    move(1);
}
void Blob::drawSelf()
{
    glViewport(x-size,y-size , size*2, size*2);
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.8,0.4);
        glVertex2f(-1.0,-1.0);
        glVertex2f(1.0,-1.0);
        glVertex2f(1.0,1.0);
        glVertex2f(-1.0,1.0);
    glEnd();
}
