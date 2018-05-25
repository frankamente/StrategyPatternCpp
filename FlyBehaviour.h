/*!
 *      @file  FlyBehaviour.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef FLYBEHAVIOUR_H
#define FLYBEHAVIOUR_H
#include <string>

class FlyBehaviour
{
   public:
      virtual std::string fly() = 0;
};
#endif // FLYBEHAVIOUR_H
