#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

typedef int boolean;
#define TRUE 1
#define FALSE 0

typedef
  void (*Func)();

typedef
   struct _St_A {
      Func *vt;
      } _class_A

_class_A *new_A(void)

void _A_m1( _class_A *thisint n ) {
   printf();
   }
void _A_m2( _class_A *thisint n ) {
   printf();
   }
void _A_m3( _class_A *thisint n ) {
   printf();
   }
Func VTClass_A[] = {
   ( void (*)() ) _A_m1,
   ( void (*)() ) _A_m2,
   ( void (*)() ) _A_m3
   };

_class_A *new_A()
{
   _class_A *t;

   if ( (t = malloc(sizeof(_class_A))) != NULL )
      t->vt = _class_A;
   return t;
   }

typedef
   struct _St_Program {
      Func *vt;
      } _class_Program

_class_Program *new_Program(void)

void _Program_run( _class_Program *this ) {
   _A _a;
   printf();
   printf();
   printf();
   printf();
   a = new_A();
   ;
   ;
   ;
   }
Func VTClass_Program[] = {
   ( void (*)() ) _Program_run
   };

_class_Program *new_Program()
{
   _class_Program *t;

   if ( (t = malloc(sizeof(_class_Program))) != NULL )
      t->vt = _class_Program;
   return t;
   }

   int main() {      _class_program *program;
      program = new_Program()
      ( ( void (*)(_class_Program *) ) program->vt[0] )(program)
      return 0;
   }
