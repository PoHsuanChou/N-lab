#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#define SIZE 30
#define MAXNUMTOKEN 100
#define MAXTOKENSIZE 50
#define strsame(A,B) (strcmp(A,B)==0)
#define ERROR(PHRASE) { fprintf(stderr,"Fatal Error %s occurred in %s, line %d\n",PHRASE, __FILE__, __LINE__); exit(EXIT_FAILURE);}
#define ALPHABET 26
#define LIST 30

struct node{
  char c[10];
  struct node* next;
};
typedef struct node node;

struct stack{
  int num;
  node* top;
};
typedef struct stack stack;

typedef struct store
{
    int arr[MAXTOKENSIZE][MAXTOKENSIZE];
    int row;
    int col;
}store;


struct prog{
    char wds[MAXNUMTOKEN][MAXTOKENSIZE];
    int cw;
    store list[LIST];
 
};
typedef struct prog prog;

prog* isprogram(char* argv[]);
void Start_Program(prog* p);
void Instrclist(prog* p, stack* s);
void Instrc(prog* p,stack* s);
void Print(prog* p);
void Set(prog* p, stack* s);
void Polishlist(prog* p,stack* s);
void Polish(prog* p, stack* s);
void Pushdown(prog* p, stack* s);
void Binaryop(prog* p, stack* s);
void Unaryop(prog* p, stack* s);
void Create(prog* p,stack* s);
void Read(prog* p,stack* s);
void Filename(prog* p,stack* s);
void Loop(prog* p,stack* s);
void stack_push(char* p,stack* s);
void stack_pop(char* tem, stack* s);
void arr(prog* p, char* str1, char* str2);
void U_NOT(prog* p,stack* s);
void U_EIGHTCOUNT(prog* p,stack* s);
void B_AND(prog* p,stack* s);
void B_OR(prog* p,stack* s);
void B_GREATER(prog* p,stack* s);
void B_LESS(prog* p,stack* s);
void B_ADD(prog* p,stack* s); 
void B_TIMES(prog* p,stack* s);
void B_EQUALS(prog* p,stack* s);
bool Isinstrc(prog* p);
bool Varname(prog* p);
bool String(prog* p);
bool Integer(prog* p);
bool Check_row_and_col(prog* p, int a, int b);
bool stack_free(stack* s);
bool boolNum(char* str);



