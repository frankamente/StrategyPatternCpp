/*!
 *      @file  WildDuck.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  24/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef WILDDUCK_H
#define WILDDUCK_H

#include "Duck.h"

#include <iostream>
#include <string>
class WildDuck : public Duck
{
   public:
    WildDuck(FlyBehaviour *flyBehaviour, QuackBehaviour *quackBehaviour) : Duck::Duck(flyBehaviour, quackBehaviour){}
};

#endif // WILDDUCK_H
