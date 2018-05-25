#include <iostream>
#include <string>

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "WildDuck.h"

#include "Flywithwinds.h"

#include "FlyNoWay.h"

#include "Quack.h"
#include "MuteQuack.h"

int main(int argc, char **argv)
{
   Duck *wildDuck = new WildDuck(new FlyWithWinds(), new Quack());

   std::string wildDuckFlyResult = wildDuck->perfomFly();

   std::cout << wildDuckFlyResult << '\n';

   std::string wildDuckQuackesult = wildDuck->perfomQuack();

   std::cout << wildDuckQuackesult << '\n';

   Duck *rubberDuck = new WildDuck(new FlyNoWay(), new MuteQuack());

   std::string rubberDuckFlyResult = rubberDuck->perfomFly();

   std::cout << rubberDuckFlyResult << '\n';

   std::string rubberDuckQuackResult = rubberDuck->perfomQuack();

   std::cout << rubberDuckQuackResult << '\n';


   delete wildDuck;

   return 0;
}
