#include "Canvas.h"
#include <iostream>

using namespace std;

Canvas::Canvas(int width, int height)
{  
	this->width = width;
	this->height = height;
	this->matrix = new char* [height];
	for (int i = 0; i < height; i++)
	{
		this->matrix[i] = new char[width];
		for (int j = 0; j < width; j++)
			this->matrix[i][j] = ' ';

	}

}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	int i;
	for (i = left; i <= right; i++)
	  this->matrix[top][i] = this->matrix[bottom][i] = ch;
	for (i = top; i <= bottom; i++)
		this->matrix[i][left] = this->matrix[i][right] = ch;

}

void Canvas:: FillRect(int left, int top, int right, int bottom, char ch)
{
	int i, j;
	for (i = top; i <= bottom; i++)
		for (j = left; j <= right; j++)
			this->SetPoint(i, j, ch);

}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int dy = -abs(y2 - y1);
	int sx, sy;
	if (x1 < x2) sx = 1;
	else sx = -1;
	if (y1 < y2) sy = 1;
	else sy = -1;
	int error = dx + dy;
	int e2;
	while (true)
	{
		this->matrix[x1][y1] = ch;
		if (x1 == x2 && y1 == y2) break;
		e2 = 2 * error;
		if (e2 >= dy) { error += dy; x1 += sx; }
		if (e2 <= dx) { error += dx; y1 += sy; }

	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int i,j,dx,dy;
	double dist;
	for (i = 0; i < this->height; i++)
	{
		for (j = 0; j < this->width; j++)
		{
			dx = i - x;
			dy = j - y;
			dist = sqrt(dx * dx + dy * dy);
			if(abs(dist-ray)<0.5) this->matrix[i][j] = ch;
			
			/*
			//NU MERGE ASA
			//??
			if (dist >= ray * (ray - 1) && dist <= ray * (ray + 1))
				this->matrix[i][j] = ch;
			else this->matrix[i][j] = ' ';

			*/

		}
	}

}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int i, j, dx, dy;
	double dist;
	for (i = 0; i < this->height; i++)
	{
		for (j = 0; j < this->width; j++)
		{
			dx = i - x;
			dy = j - y;
			dist = sqrt(dx * dx + dy * dy);
			if (dist <= ray)
				this->matrix[i][j] = ch;



		}
	}

}




void Canvas::SetPoint(int x, int y, char ch)
{
	if (x >= 0 && x < this->width && y >= 0 && y < this->height)
		this->matrix[x][y] = ch;

}


void Canvas::Print()
{
	for (int i = 0; i < this->height; i++)
	{
		for (int j = 0; j < this->width; j++)
			cout << this->matrix[i][j] << " ";
		cout << "\n";

	}

}




void Canvas::Clear()
{
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			this->matrix[i][j] = ' ';

}