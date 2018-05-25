/*!
 *      @file  FlyNoWay.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehaviour.h"

class FlyNoWay : public FlyBehaviour
{
   public:
      FlyNoWay();
      std::string fly() override;
};

#endif // FLYNOWAY_H
