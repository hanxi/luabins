#include <stdio.h>

#include "test.h"

int main()
{
#ifdef __cplusplus
  printf("luabins C API test compiled as C++\n");
#else
  printf("luabins C API test compiled as plain C\n");
#endif /* __cplusplus */

  test_savebuffer();
  test_api();

  return 0;
}
