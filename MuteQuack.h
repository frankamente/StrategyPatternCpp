/*!
 *      @file  MuteQuack.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "QuackBehaviour.h"

class MuteQuack : public QuackBehaviour
{
   public:
      MuteQuack();
      std::string quack() override;
};

#endif // MUTEQUACK_H
