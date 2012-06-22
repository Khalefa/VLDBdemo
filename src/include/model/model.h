
#ifndef MODEL_H
#define MODEL_H
#include <stdio.h>

#define EXPLICIT 0
#define IMPLICIT 2
#define TREND 1
extern double error_level;
struct _model {
int id;
int seasonal;
int type; // type of the model

int freq;
int len;
double err;
int nv;
double *values; //length is in len

int nts;
double *ts;

int nc;
int *children;
};

typedef struct _model DModel;

DModel *models;
void LoadModules();
DModel* ReadModel(FILE* f,int j);
double EvalProb(int j,int x,double error);
double Eval(int j,int x, double * error) ;
double GetValue(int x);

#endif
