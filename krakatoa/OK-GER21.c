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
      int _A_n;
      } _class_A

_class_A *new_A(void)

void _A_set( _class_Aint n ) {
}

int _A_get( _class_A ) {
}

Func VTClass_A[] = {
   ( void (*)() ) _set
   ( void (*)() ) _get
   };

_class_A *new_A()
{
   _class_A *t

   if ( (t = malloc(sizeof(_class_A))) != NULL )
      t->vt = _class_A;
   return t;
   }

typedef
      struct _St_Program {
         Func *vt;
         _A _Program_a;
         } _class_Program

_class_Program *new_Program(void)

void _Program_print( _class_Program ) {
}

_A _Program_get( _class_Program ) {
}

void _Program_run( _class_Program ) {
}

void _Program_set( _class_Program_A a ) {
}

Func VTClass_Program[] = {
   ( void (*)() ) _print
   ( void (*)() ) _get
   ( void (*)() ) _run
   };

_class_Program *new_Program()
{
   _class_Program *t

   if ( (t = malloc(sizeof(_class_Program))) != NULL )
      t->vt = _class_Program;
   return t;
   }

   int main() {      _class_program *program;
      program = new_Program()
      ( ( void (*)(_class_Program *) ) program->vt[0] )(program)
      return 0;
   }