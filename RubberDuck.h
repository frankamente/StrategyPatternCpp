/*!
 *      @file  RubberDuck.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "Duck.h"

class RubberDuck : public Duck
{
   public:
      RubberDuck(FlyBehaviour *flyBehaviour, QuackBehaviour *quackBehaviour) : Duck::Duck(flyBehaviour, quackBehaviour){}
};

#endif // RUBBERDUCK_H
