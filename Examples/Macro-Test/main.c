#include "Assert.h"
#include "Macro.h"

typedef Assert_Line (*Test_Fn)(void);

Assert_Line Test_VA_ARGS(void);
Assert_Line Test_Str(void);

static const Test_Fn TESTS[] = {
    Test_VA_ARGS,
    Test_Str,
};
static const uint32_t TESTES_LEN = sizeof(TESTS) / sizeof(TESTS[0]);


int main()
{
    Assert_Line result;
    uint32_t errorCount = 0;
    int testIndex;

    for (testIndex = 0; testIndex < TESTES_LEN; testIndex++) {
        ASSERT_PRINTF("----------------------------------------------\n\n");
        result = TESTS[testIndex]();
        if (result) {
            errorCount++;
            ASSERT_PRINTF("Failed\n\n");
        }
    }
    if (errorCount > 0) {
        ASSERT_PRINTF("Error Count: %u\n", errorCount);
    }
    else {
        ASSERT_PRINTF("Test Pass\n");
    }

}

Assert_Line Test_VA_ARGS(void) {

    assertReturnLine(MACRO_VA_ARGS_LEN(), 0);
    assertReturnLine(MACRO_VA_ARGS_LEN(A), 1);
    assertReturnLine(MACRO_VA_ARGS_LEN(A, B), 2);
    assertReturnLine(MACRO_VA_ARGS_LEN(A, B, C), 3);
    assertReturnLine(MACRO_VA_ARGS_LEN( , X), 2);

    return 0;
}

Assert_Line Test_Str(void) {

    assertReturnLine(Str, MACRO_STR(), "");
    assertReturnLine(Str, MACRO_STR(A), "A");
    assertReturnLine(Str, MACRO_STR(A, B), "AB");
    assertReturnLine(Str, MACRO_STR(A, B, C), "ABC");
    assertReturnLine(Str, (MACRO_STR(A, B, C, D)), "ABCD");
    assertReturnLine(Str, (MACRO_STR(A, B, C, D, E, F, G)), "ABCDEFG");

    return 0;
}
