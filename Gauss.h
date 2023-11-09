#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Out(float** a, int n, int m);
float** Create(int n, int m, float* a);
void SwapLines(int x, int x2, float** a);
float* FindX2(float** arr, int n, int m);
void OutAns(float* ans, int n);
float* ResidualVect(float* ans, float* arr, int m, int n);
float** CreateB(int n, int m, float* a, float* b);
void Error(float* ans, float* ansb, int n);
