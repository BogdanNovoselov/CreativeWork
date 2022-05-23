#pragma once
#include <gl/glut.h>
#include <stdio.h>
#include <iostream>1
#include <vector>
#include <sstream>
#include<random>
#include <ctime>
using namespace std;

bool RGB = true;
double r = 0.7, g = 0.7, b = 0.7;
float raz = 0.005;
int n, i = 0, k = 0, l = 0;
int** grades;
int* result;
int*** mat;
int* path;
int WinW = 1350;
int WinH = 730;
int R;
bool checkDrawPath = false, starsMade = false;
float opacity = 0.00f;
const int maxSize = 20;
int amountVerts;

template<class T>
class Graph
{
	vector<T> vertList;
	vector<T> labelList;
	bool* visitedVerts = new bool[vertList.size()];
public:
	int adjMatrix[maxSize][maxSize] = { 0 };
	Graph();
	~Graph();
	void DrawGraph();
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void InsertVertex(const T& vertex);
	void DeleteVertex();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	vector<T> GetNbrs(const T& vertex);
	void Print();
};

struct vertCoord
{
	int x, y;
};

vertCoord vertC[20];

Graph<int> graph;

void solution(int*** mat, int n, int** grades, int* path)
{
	for (int l = 0; l < n; l++)
	{
		for (int i = 0; i < n; i++)
		{
			int min = 1000000;

			for (int j = 0; j < n; j++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];

			for (int j = 0; j < n; j++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}
		for (int j = 0; j < n; j++)
		{
			int min = 1000000;
			for (int i = 0; i < n; i++)
				if (mat[i][j] && min > *mat[i][j])
					min = *mat[i][j];

			for (int i = 0; i < n; i++)
				if (mat[i][j])
					*mat[i][j] -= min;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				grades[i][j] = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (mat[i][j] && !*mat[i][j])
				{
					int hmin = 1000000;
					int vmin = 1000000;

					for (int l = 0; l < n; l++)
						if (l != i && mat[l][j] && hmin > *mat[l][j])
							hmin = *mat[l][j];

					for (int l = 0; l < n; l++)
						if (l != j && mat[i][l] && vmin > *mat[i][l])
							vmin = *mat[i][l];

					grades[i][j] = hmin + vmin;
				}
			}

		int mcost = 0, mi = 0, mj = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (mat[i][j] && mcost < grades[i][j])
				{
					mcost = grades[i][j];
					mi = i;
					mj = j;
				}
		path[mi] = mj; 

		for (int i = 0; i < n; i++) mat[i][mj] = nullptr;
		for (int i = 0; i < n; i++) mat[mi][i] = nullptr;
		mat[mj][mi] = nullptr;
	}
}

void prepare(int***& mat, int& n, int**& grades, int*& path) //�������������� ��� ����������
{
	n = amountVerts;

	grades = new int* [n];

	path = new int[n];

	mat = new int** [n];

	for (int i = 0; i <= n; i++)
	{
		grades[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		mat[i] = new int* [n];
		for (int j = 0; j < n; j++)
		{
			if (graph.adjMatrix[i][j] == 0) {
				mat[i][j] = nullptr;
				continue;
			}
			mat[i][j] = new int(graph.adjMatrix[i][j]);
		}
	}
}

int* salesman(int*** mat, int n, int** grades, int* result)
{
	int k = 0;
	int* path = new int [n];
	prepare(mat, n, grades, result);
	int s = 0;
	solution(mat, n, grades, result);
	for (int i = 0, j = 0; i < n; i++)
	{
		j = result[i];
		s += graph.adjMatrix[i][j];
	}
	cout << endl;
	cout << "\n����� �������� ����: ";
	int t = 0;
	for (int l = 0; l < n;)
	{
		for (int i = 0, j = 0; i < n; i++)
		{
			if (t == 0 || i + 1 == t)
			{
				if (t == 0)
				{
					cout << i + 1;
					path[k] = i;
					k++;
				}
				j = result[i];
				
				t = j + 1;
				if (t > 0)
				{
					cout << " -> " << t;
					path[k] = j;
					k++;
				}
				l++;
			}
		}
	}
	cout << "\n���������� = " << s;
	cout << endl;
	return path;
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex) //���������� ������
{ 
	if (!this->IsFull()) { //���� ���� �� ��������
		this->vertList.push_back(vertex);
	}
	else {
		cout << "���� ��� ��������. ���������� �������� ����� ������� " << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteVertex() //�������� �������
{
	this->vertList.pop_back();
}

template<class T>
bool Graph<T>::IsEmpty() //�������� �� ��, ���� �� ����
{ 
	if (this->vertList.size() != 0)
		return false;
	else
		return true;
}

template<class T>
bool Graph<T>::IsFull() //�������� �� ��, �������� �� ����
{
	if (vertList.size() == maxSize)
	{
		return true;
	}
	else return false;
}

template<class T>
int Graph<T>::GetVertPos(const T& vertex) //���������� ������ �������
{
	for (int i = 0; i < this->vertList.size(); ++i)
	{
		if (this->vertList[i] == vertex) return i;
	}
	return -1;
}

template<class T>
Graph<T>::Graph() //�����������
{
	for (int i = 0; i < maxSize; ++i)
	{
		for (int j = 0; j < maxSize; ++j)
		{
			this->adjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph() { } //����������

Graph<int> makeGraph() //������� �������� �����
{
	Graph<int> graph;
	int amountEdges, firstVertex, secondVertex, edgeWeight;
	cout << "���������� ������: ";
	cin >> amountVerts;
	cout << endl;
	cout << "���������� ����� (�����): ";
	cin >> amountEdges;
	cout << endl;
	for (int i = 1; i <= amountVerts; ++i) 
	{
		int* vertPtr = &i;
		graph.InsertVertex(*vertPtr);
	}
	for (int i = 0; i < amountEdges; ++i) {
		cout << "�������� �������: ";
		cin >> firstVertex; 
		cout << endl;
		int* firstVertPtr = &firstVertex;
		cout << "�������� �������: ";
		cin >> secondVertex;
		cout << endl;
		int* secondVertPtr = &secondVertex;

		cout << "����� ����� (����): ";
		cin >> edgeWeight;
		cout << endl;
		graph.InsertEdge(*firstVertPtr, *secondVertPtr, edgeWeight);
	}
	cout << endl;
	return graph;
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) //���������� �����
{
	if (this->GetVertPos(vertex1) != -1 && this->GetVertPos(vertex2) != -1) //���� �������� ������� ����
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		if (this->adjMatrix[vertPos1][vertPos2] != 0 && this->adjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "����� ����� ��� ����������" << endl;
			return;
		}
		else
		{
			this->adjMatrix[vertPos1][vertPos2] = weight;
			this->adjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else
	{
		cout << "��� ������� ����� �� ��������� ������ ��� � �����" << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print()
{
	if (!this->IsEmpty())
	{
		cout << "������� ���������: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout << this->vertList[i] << ')' << ' ';
			for (int j = 0; j < vertListSize; ++j) 
			{
				cout << " " << this->adjMatrix[i][j] << ' ';
			}
			cout << endl;
		}
	}
	else
	{
		cout << "���� ����";
	}
}

void setCoord(int i, int n)
{
	int R_;

	int x0 = WinW / 2;
	int y0 = WinH / 2;
	if (WinW > WinH)
	{
		R = 5 * (WinH / 13) / n;
		R_ = WinH / 2 - R - 10;
	}
	else {
		R = 5 * (WinW / 13) / n;
		R_ = WinW / 2 - R - 10;
	}
	float theta = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = R_ * cos(theta) + y0;
	float x1 = R_ * sin(theta) + x0;

	vertC[i].x = x1;	
	vertC[i].y = y1;
}


double kiki = 0.0025;
void checkRGB()
{
	if (r < 1.0f && RGB)
	{
		r += kiki;
	}
	else if (g < 1.0f && RGB)
	{
		g += kiki;
	}
	else if (b < 1.0f && RGB)
	{
		b += kiki;
	}
	else
	{
		RGB = false;
		if (r > 0.7f)
		{
			r -= kiki;
		}
		else if (g > 0.7f)
		{
			g -= kiki;
		}
		else if (b > 0.7f)
		{
			b -= kiki;
		}
		else RGB = true;
		
	}
}

void drawCircle(int x, int y, int R)
{
	checkRGB();
	glColor3d(r, g, b);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 720; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = R * cos(theta) + y;
		x1 = R * sin(theta) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = R * cos(theta) + y;
		x2 = R * sin(theta) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawText(int nom, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_TIMES_ROMAN_24;
	string s = to_string(nom);
	glRasterPos2i(x1 - 5, y1 - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}


void drawVertex(int n)
{
	for (int i = 0; i < n; i++) {
		drawCircle(vertC[i].x, vertC[i].y, R);
		drawText(i + 1, vertC[i].x, vertC[i].y);
	}
}

float am = 1, bm = 300;

void drawLine(int text, int x0, int y0, int x1, int y1) 
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();

	drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}


void drawPath(int x0, int y0, int x1, int y1)
{
	float add = am / bm;
	float x11, y11, x01, y01;
	x01 = float(x0); y01 = float(y0);
	x11 = (x0 + add * float(x1)) / (1 + add);
	y11 = (y0 + add * float(y1)) / (1 + add);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2f(x01, y01);
	glVertex2f(x11, y11);
	glEnd();
}

vertCoord stars[35];


void createNewStars()
{
	for (int i = 0; i < 35; i++)
	{
		stars[i].x = rand() % WinW;
		stars[i].y = rand() % WinH;
	}
	starsMade = true;
}

void drawStars()
{
	if (!starsMade) createNewStars();
	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPointSize(5);
	glColor4f(1.0f, 1.0f, 1.0f, opacity);
	glBegin(GL_POINTS);
	for (int j = 0; j < 35; j++)
	{
		glVertex2f(stars[j].x, stars[j].y);
	}
	glEnd();
}

template<class T>
void Graph<T>::DrawGraph()
{
	drawStars();
	int n = vertList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = adjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
			}
		}
	}
	if (checkDrawPath)
	{
		for (int i = 0; i < n; i++)
		{
			drawPath(vertC[path[i]].x, vertC[path[i]].y, vertC[path[i + 1]].x, vertC[path[i + 1]].y);
		}
	}

	drawVertex(n);
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void drawMenuText(string text, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_TIMES_ROMAN_24;
	string s = text;
	glRasterPos2i(x1 + 5, y1 - 20);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawMenu()
{
	int height = WinH;

	glColor3d(r, g, b);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(5, 0);
	glVertex2i(5, WinH);
	glVertex2i(0, WinH);
	
	glColor3d(r, g, b);
	glBegin(GL_QUADS);
	glVertex2i(WinW-5, 0);
	glVertex2i(WinW, 0);
	glVertex2i(WinW, WinH);
	glVertex2i(WinW-5, WinH);

	glColor3d(r, g, b);
	glBegin(GL_QUADS);
	glVertex2i(0, 0);
	glVertex2i(0, 5);
	glVertex2i(WinW, 5);
	glVertex2i(WinW, 0);

	glColor3d(r, g, b);
	glBegin(GL_QUADS);
	glVertex2i(0, WinH);
	glVertex2i(0, WinH-5);
	glVertex2i(WinW, WinH-5);
	glVertex2i(WinW, WinH);

	

	glColor3d(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2i(40, WinH-100);
	glVertex2i(40, WinH-150);
	glVertex2i(240, WinH-150);
	glVertex2i(240, WinH-100);
	glEnd();
	glColor3d(0, 0, 0);
	drawMenuText("New element", 70, WinH-110);

	glColor3d(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2i(40, WinH - 200);
	glVertex2i(40, WinH - 250);
	glVertex2i(240, WinH - 250);
	glVertex2i(240, WinH - 200);
	glEnd();
	glColor3d(0, 0, 0);
	drawMenuText("Delete element", 60, WinH - 210);


	glColor3d(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2i(40, WinH - 300);
	glVertex2i(40, WinH - 350);
	glVertex2i(240, WinH - 350);
	glVertex2i(240, WinH - 300);
	glEnd();
	glColor3d(0, 0, 0);
	drawMenuText("Result", 100, WinH - 310);

	glColor3d(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2i(40, WinH - 400);
	glVertex2i(40, WinH - 450);
	glVertex2i(240, WinH - 450);
	glVertex2i(240, WinH - 400);
	glEnd();
	glColor3d(0, 0, 0);
	drawMenuText("Matrix", 100, WinH - 410);

	glColor3d(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2i(40, WinH - 500);
	glVertex2i(40, WinH - 550);
	glVertex2i(240, WinH - 550);
	glVertex2i(240, WinH - 500);
	glEnd();
	glColor3d(0, 0, 0);
	drawMenuText("New Graph", 80, WinH - 510);

	
}

void mouseClick(int btn, int stat, int x, int y) {

	int height = WinH;

	if (stat == GLUT_DOWN) {

		if (x > 40 && x < 240 && y >  100 && y < 150)
		{
			int sourceVertex;
			int targetVertex;
			int edgeWeight;


			cout << "�������� �������: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			cout << "�������� �������: "; cin >> targetVertex; cout << endl;
			int* targetVertPtr = &targetVertex;

			if (sourceVertex > amountVerts || targetVertex > amountVerts) {
				amountVerts++;
				int* vertPtr = &amountVerts;
				graph.InsertVertex(*vertPtr);
			}

			cout << "��� �����: "; cin >> edgeWeight; cout << endl;
			graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight); 
			checkDrawPath = false;
			am = 1;
			bm = 300;
		}
		if (x > 40 && x < 240 && y > 200 && y < 250)
		{
			int sourceVertex;
			int targetVertex;
			int edgeWeight;

			cout << "������� �������: "; cin >> sourceVertex; cout << endl;
			int* sourceVertPtr = &sourceVertex;
			if (sourceVertex == amountVerts)
			{
				amountVerts--;
				graph.DeleteVertex();
				checkDrawPath = false;
				am = 1;
				bm = 300;
			}
			else cout << "���������� ������� ������� \n";
		}
		if (x > 40 && x < 240 && y >  400 && y < 450)
		{
			graph.Print();
		}
		if (x > 40 && x < 240 && y >  300 && y < 350)
		{
			path = salesman(mat, n, grades, result);
			
			checkDrawPath = true;
			am = 1;
			bm = 300;
			
		}
		if (x > 40 && x < 240 && y >  500 && y < 550)
		{
			graph = makeGraph();
			checkDrawPath = false;
			am = 1;
			bm = 300;
		}
	}

}





void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	graph.DrawGraph();
	drawMenu();
	glutSwapBuffers();
}

void timer(int)
{
	if (am < 300 && bm > 1)
	{
		am += 1;
		bm -= 1;
	}

	i++;
	if (i==200)
	{
		k += 1;
		raz = raz * (-1);
		if (k == 2)
		{
			starsMade = false;
			k = 0;
		}
		i = 0;
	}
	opacity += raz;
	
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, 0);
}
