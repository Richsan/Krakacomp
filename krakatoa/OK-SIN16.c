#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int boolean;
#define true 1
#define false 0

typedef
  void (*Func)();

typedef
   struct _St_Program {
      Func *vt;
      } _class_Program;

_class_Program *new_Program(void);

void _Program_run( _class_Program *this ) {
   boolean _b;
   _b = false;
   do {
   }
 while (false);
   do {
   }
 while (_b);
   int _n, _i, _j;
   _i = (0);
   _j = (0);
   _n = (10);
   do {
      do {
         ++_i;
         printf("%d ", _i);
      }
 while (_i < _n);
      ++_j;
   }
 while (_j < _n);
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
   _class_Program *program;
   program = new_Program();
   ( ( void (*)(_class_Program *) ) program->vt[0] )(program);
   return 0;
}
