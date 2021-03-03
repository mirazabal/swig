#include "FlexRIC.h"

#include <cstdio>
#include <cstring>
#include <string>

static FlexRIC fric;

const char* stats(void)
{
  if(fric.is_connected() == false)
    return "No stats available";

  return fric.stats();
};

bool connect(const char* str)
{
  const std::string s("192.168.1.0:5555");
  if(strncmp(str, s.c_str(), s.size()) != 0) 
    return false;

  fric.set_addr(s);
  return true;
};

