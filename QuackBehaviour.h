/*!
 *      @file  QuackBehaviour.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef QUACKBEHAVIOUR_H
#define QUACKBEHAVIOUR_H

#include <string>

class QuackBehaviour{
   public:
      virtual std::string quack() = 0;
};

#endif // QUACKBEHAVIOUR_H
