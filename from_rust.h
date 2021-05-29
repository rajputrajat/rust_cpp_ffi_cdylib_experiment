#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

struct Returns {
  int first;
  const char *sec;
  const short *third;
};

struct Args {
  const char *message;
  int first;
  float sec;
  const short *third;
};

extern "C" {

Returns set_get(Args args);

} // extern "C"
