#include "test.h"

/* 各テストスイートのセットアップ関数宣言 */
void testPCAC_Setup(void);

int main(int argc, char **argv)
{
  int ret;

  Test_Initialize();

  testPCAC_Setup();

  ret = Test_RunAllTestSuite();

  Test_PrintAllFailures();

  Test_Finalize();

  return ret;
}
