#include <GL/glut.h>
#include "blob.h"
#include <iostream>
#include <unistd.h>

/*
 *  This file is a graphical interface used to interact with a blob world.
 */
Blob blob;

void update(void)
{
    usleep(500);
    blob.update();
    glutPostRedisplay();
}
void display(void)
{
    glClearColor(0.084,0.563,.98,0);
	glClear(GL_COLOR_BUFFER_BIT);
    blob.drawSelf();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1300, 1300);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Blob World");
    glutDisplayFunc(display);
    glutIdleFunc(update);
    glutMainLoop();
    return 0;
}
