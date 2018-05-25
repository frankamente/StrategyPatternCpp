/*!
 *      @file  Duck.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  24/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include <string>

#include "FlyBehaviour.h"

#include "QuackBehaviour.h"

class Duck
{
   private:
      FlyBehaviour *_flyBehaviour;
      QuackBehaviour *_quackBehaviour;
   protected:
      Duck(FlyBehaviour *flyBehaviour, QuackBehaviour *quackBehaviour) {
         _flyBehaviour = flyBehaviour;
         _quackBehaviour = quackBehaviour;
      }
   public:
      std::string perfomFly() {
         return _flyBehaviour->fly();
      }
      std::string perfomQuack() {
         return _quackBehaviour->quack();
      }
};
#endif // DUCK_H

