#ifndef _ANNOTATIONS_H
#define _ANNOTATIONS_H
#include <stdint.h>
#include <iostream> 


extern "C" unsigned __attribute__ ((noinline)) ariel_enable(bool i);

unsigned __attribute__ ((noinline)) ariel_enable(bool i)
{
      if (i==false) return 0;
          std::cout<<"ariel enable\n";
              return 1;
}

#endif
