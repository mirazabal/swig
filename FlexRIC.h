#ifndef EXAMPLE_2
#define EXAMPLE_2

#include <string>

class FlexRIC
{
  private:
    bool is_connected_;
    std::string addr_;

  public:

    FlexRIC();

    bool is_connected();

    const char* get_addr();

    void set_addr(std::string);

    const char* stats(void);
};





#endif

