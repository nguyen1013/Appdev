#pragma once

enum COLORS {
	BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE
};

void pascal_triangle(int rows);
void setFGcolor(int color);
void setBGcolor(int color);
void clearScreen(void);
void gotoXY(int row, int col);
void resetColors(void);
int nchoosek(int n, int k);
int factor(int m);