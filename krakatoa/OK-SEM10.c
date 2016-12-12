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
      } _class_A;

_class_A *new_A(void);

void _A_first( _class_A *this,int _pn ) {
}

Func VTClass_A[] = {
   ( void (*)() ) _A_first
};

_class_A *new_A()
{
   _class_A *t;

   if ( (t = malloc(sizeof(_class_A))) != NULL )
      t->vt = VTClass_A;
   return t;
}

typedef
   struct _St_B {
      Func *vt;
      } _class_B;

_class_B *new_B(void);

void _B_second( _class_B *this ) {
}

Func VTClass_B[] = {
   ( void (*)() ) _A_first,
   ( void (*)() ) _B_second
};

_class_B *new_B()
{
   _class_B *t;

   if ( (t = malloc(sizeof(_class_B))) != NULL )
      t->vt = VTClass_B;
   return t;
}

typedef
   struct _St_C {
      Func *vt;
      } _class_C;

_class_C *new_C(void);

void _C_third( _class_C *this ) {
}

Func VTClass_C[] = {
   ( void (*)() ) _A_first,
   ( void (*)() ) _B_second,
   ( void (*)() ) _C_third
};

_class_C *new_C()
{
   _class_C *t;

   if ( (t = malloc(sizeof(_class_C))) != NULL )
      t->vt = VTClass_C;
   return t;
}

typedef
   struct _St_Program {
      Func *vt;
      } _class_Program;

_class_Program *new_Program(void);

void _Program_run( _class_Program *this ) {
   _A _a;
   _B _b;
   _C _c;
   _a = new_A();
   _b = new_B();
   _c = new_C();
   ( (void(*)(_class_A *, int)) _a->vt[0](_class_A *) this,0);
   ( (void(*)(_class_B *, int)) _b->vt[0](_class_B *) this,0);
   ( (void(*)(_class_C *, int)) _c->vt[0](_class_C *) this,0);
   ( (void(*)(_class_B *)) _b->vt[1](_class_B *) this);
   ( (void(*)(_class_C *)) _c->vt[1](_class_C *) this);
   ( (void(*)(_class_C *)) _c->vt[0](_class_C *) this);
   _a = _b;
   _a = _c;
   _b = _c;
}

Func VTClass_Program[] = {
   ( void (*)() ) _Program_run
};

_class_Program *new_Program()
{
   _class_Program *t;

   if ( (t = malloc(sizeof(_class_Program))) != NULL )
      t->vt = VTClass_Program;
   return t;
}

int main() {
   _class_program *program;
   program = new_Program()
   ( ( void (*)(_class_Program *) ) program->vt[0] )(program)
   return 0;
}
