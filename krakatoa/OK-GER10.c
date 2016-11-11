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
      int _A_k;
      } _class_A

_class_A *new_A(void)

void _A_m1( _class_Aint n ) {
}

int _A_getK( _class_A ) {
}

Func VTClass_A[] = {
   ( void (*)() ) _m1
   ( void (*)() ) _getK
   };

_class_A *new_A()
{
   _class_A *t

   if ( (t = malloc(sizeof(_class_A))) != NULL )
      t->vt = _class_A;
   return t;
   }

typedef
      struct _St_B {
         Func *vt;
         int _B_k;
         } _class_B

_class_B *new_B(void)

void _B_m2( _class_Bint n ) {
}

int _B_getK( _class_B ) {
}

Func VTClass_B[] = {
   ( void (*)() ) _m2
   ( void (*)() ) _getK
   };

_class_B *new_B()
{
   _class_B *t

   if ( (t = malloc(sizeof(_class_B))) != NULL )
      t->vt = _class_B;
   return t;
   }

typedef
      struct _St_C {
         Func *vt;
         } _class_C

_class_C *new_C(void)

void _C_m3( _class_Cint n ) {
}

void _C_m4( _class_Cint n ) {
}

Func VTClass_C[] = {
   ( void (*)() ) _m3
   ( void (*)() ) _m4
   };

_class_C *new_C()
{
   _class_C *t

   if ( (t = malloc(sizeof(_class_C))) != NULL )
      t->vt = _class_C;
   return t;
   }

typedef
      struct _St_Program {
         Func *vt;
         } _class_Program

_class_Program *new_Program(void)

void _Program_run( _class_Program ) {
}

Func VTClass_Program[] = {
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