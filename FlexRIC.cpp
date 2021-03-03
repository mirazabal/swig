#include "FlexRIC.h"

FlexRIC::FlexRIC() : is_connected_(false), addr_("")
{

}

bool FlexRIC::is_connected()
{
  return is_connected_;
}

const char* FlexRIC::get_addr()
{
  return addr_.c_str();
}

void FlexRIC::set_addr(std::string s)
{
  addr_ = std::move(s);
  is_connected_ = true;
}


const char* FlexRIC::stats(void)
{
  return "Stats from FlexRIC";
}

