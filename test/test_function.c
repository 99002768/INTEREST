#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <function.h>
#define PROJECT_NAME "Function"

/* Prototypes for all the test functions */
void test_FindSimple(void);
void test_FindCompound(void);


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
void test_FindSimple(void) {
  CU_ASSERT(24000.00== FindSimple(10000.00,10.00,24.00));
  CU_ASSERT(10.00 == FindSimple(100.00,10.00,1.00));
  CU_ASSERT(20.00 == FindSimple(200.00,10.00,1.00));
  CU_ASSERT(30.00 == FindSimple(300.00,10.00,1.00));
  CU_ASSERT(48000.00 == FindSimple(20000.00,10.00,24.00));

  /* Dummy fail*/
  //CU_ASSERT(15.00== FindSimple(500.00,10.00,1.00));
}

void test_FindCompound(void) {
  //CU_ASSERT(98497== FindCompound(1200,5.4,2));
  CU_ASSERT(110== FindCompound(100,10,1));
  CU_ASSERT(220  == FindCompound(200,10,1));
  CU_ASSERT(330 == FindCompound(300,10,1));

  /* Dummy fail*/
  //CU_ASSERT( 440.00== FindCompound(500.00,10.00,1.00));
}
