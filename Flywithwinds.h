/*!
 *      @file  Flywithwinds.h
 *    @author  Francisco Márquez Chaves (FMC), fmarquez@catec.aero
 *
 *  @internal
 *    Created  25/5/2018
 *   Compiler  gcc/g++
 *    Company  FADA-CATEC
 *  Copyright  Copyright (c) 2018, FADA-CATEC
 */


#ifndef FLYWITHWINDS_H
#define FLYWITHWINDS_H

#include "FlyBehaviour.h"

class FlyWithWinds : public FlyBehaviour
{
   public:
      FlyWithWinds();
      std::string fly() override;
};

#endif // FLYWITHWINDS_H
