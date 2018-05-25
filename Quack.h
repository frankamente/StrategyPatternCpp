/*!
 *      @file  Quack.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef QUACK_H
#define QUACK_H

#include "QuackBehaviour.h"

class Quack : public QuackBehaviour
{
   public:
      Quack();
      std::string quack() override;
};

#endif // QUACK_H
