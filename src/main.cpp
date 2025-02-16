// main.cpp
#include <fmt/core.h>

#include <cstdio>

inline bool null_check(const char* Str0)
{
  if (Str0 == NULL)
    return true;
  else
    return false;
}

// main function!
int main() {
  fmt::print("Hello, world!\n");
  return 0;
}
