#include "graph.h"
#include <gl/glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>



int main(int argc, char* argv[])
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	glutInit(&argc, argv);
	graph = makeGraph();
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1350, 730);
	glutCreateWindow("Graph");
	WinW = glutGet(GLUT_WINDOW_WIDTH);
	WinH = glutGet(GLUT_WINDOW_HEIGHT);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(0, timer, 0);
	glutMouseFunc(mouseClick);
	glutMainLoop();
	return 0;
}