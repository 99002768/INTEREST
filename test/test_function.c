#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "Function"

/* Prototypes for all the test functions */
double test_FindSimple(void);
double test_FindCompound(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "FindSimple", test_FindSimple);
  CU_add_test(suite, "FindCompound", test_FindCompound);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
double FindSimple(void) {
  CU_ASSERT(24000.000000== FindSimple(10000.000000,10.000000,24.000000));
  CU_ASSERT(10.000000 == FindSimple(100.000000,10.000000,1.000000));
  CU_ASSERT(20.000000 == FindSimple(200.000000,10.000000,1.000000));
  CU_ASSERT(30.000000 == FindSimple(300.000000,10.000000,1.000000));
  CU_ASSERT(48000.000000 == FindSimple(20000.000000,10.000000,24.000000));

  /* Dummy fail*/
  CU_ASSERT(15.000000 == FindSimple(500.000000,10.000000,1.000000));
}

double FindCompound(void) {
  CU_ASSERT(98497.326758== FindCompound(10000.000000,10.000000,24.000000));
  CU_ASSERT(110.000000  == FindCompound(100.000000,10.000000,1.000000));
  CU_ASSERT(220.000000  == FindCompound(200.000000,10.000000,1.000000));
  CU_ASSERT(330.000000 == FindCompound(300.000000,10.000000,1.000000));

  /* Dummy fail*/
  CU_ASSERT( 440.000000== FindCompound(500.000000,10.000000,1.000000));
}
