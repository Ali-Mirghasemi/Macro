#include "Assert.h"
#include "Macro.h"

typedef Assert_Line (*Test_Fn)(void);

Assert_Line Test_VA_ARGS(void);
Assert_Line Test_Str(void);
Assert_Line Test_For(void);

static const Test_Fn TESTS[] = {
    Test_VA_ARGS,
    Test_Str,
    Test_For,
};
static const uint32_t TESTES_LEN = sizeof(TESTS) / sizeof(TESTS[0]);


int main()
{
    Assert_Line result;
    uint32_t errorCount = 0;
    int testIndex;

    for (testIndex = 0; testIndex < TESTES_LEN; testIndex++) {
        result = TESTS[testIndex]();
        if (result) {
            errorCount++;
            ASSERT_PRINTF("Failed%s", ASSERT_END_LINE);
        }
        else {
            ASSERT_PRINTF("Pass%s", ASSERT_END_LINE);
        }
    }

    ASSERT_PRINTF("%s", ASSERT_END_LINE);
    if (errorCount > 0) {
        ASSERT_PRINTF("Error Count: %u%s", errorCount, ASSERT_END_LINE);
    }
    else {
        ASSERT_PRINTF("Test Pass", ASSERT_END_LINE);
    }

}

Assert_Line Test_VA_ARGS(void) {
    ASSERT_PRINT_HEADER("VA Args", 64, '-');

    assertReturnLine(MACRO_VA_ARGS_LEN(), 0);
    assertReturnLine(MACRO_VA_ARGS_LEN(A), 1);
    assertReturnLine(MACRO_VA_ARGS_LEN(A, B), 2);
    assertReturnLine(MACRO_VA_ARGS_LEN(A, B, C), 3);
    assertReturnLine(MACRO_VA_ARGS_LEN( , X), 2);

    assertReturnLine(MACRO_VA_ARGS_CHECK_END(), 1);
    assertReturnLine(MACRO_VA_ARGS_CHECK_END(A), 1);
    assertReturnLine(MACRO_VA_ARGS_CHECK_END(A, B), 0);
    assertReturnLine(MACRO_VA_ARGS_CHECK_END(A, B, C), 0);
    assertReturnLine(MACRO_VA_ARGS_CHECK_END( , X), 0);

    return 0;
}

Assert_Line Test_Str(void) {
    ASSERT_PRINT_HEADER("Str", 64, '-');

    assertReturnLine(Str, MACRO_STR(), "");
    assertReturnLine(Str, MACRO_STR(A), "A");
    assertReturnLine(Str, MACRO_STR(A, B), "AB");
    assertReturnLine(Str, MACRO_STR(A, B, C), "ABC");
    assertReturnLine(Str, MACRO_STR(A, B, C, D), "ABCD");
    assertReturnLine(Str, MACRO_STR(A, B, C, D, E, F, G), "ABCDEFG");

    return 0;
}

Assert_Line Test_For(void) {
    ASSERT_PRINT_HEADER("For", 64, '-');
    // Macro For: Simple array
    #define __MY_FN1(X)     MACRO_STR(X),

    const char* ARR_LEFT[] = {
        MACRO_FOR(__MY_FN1, A, B, C)
    };

    const char* ARR_RIGHT[] = {
        "A",
        "B",
        "C",
    };

    assertReturnLine(StrList, ARR_LEFT, ARR_RIGHT, 3);

    // Macro For: String Array and Enum combined
    #define __MY_FN_ENUM(X)         MyEnum_ ##X,
    #define __MY_FN_STR(X)          MACRO_STR(X),

    #define IMPL_ARRAY(...) \
    typedef enum { \
        MACRO_FOR(__MY_FN_ENUM, __VA_ARGS__) \
    } MyEnum; \
    const char* MY_ARR[] = { \
        MACRO_FOR(__MY_FN_STR, __VA_ARGS__) \
    }

    IMPL_ARRAY(ABC, XYZ, 123, A1, B1, C1);

    assertReturnLine(Str, MY_ARR[MyEnum_123], "123");
    assertReturnLine(Str, MY_ARR[MyEnum_A1], "A1");
    assertReturnLine(Str, MY_ARR[MyEnum_C1], "C1");

    // Macro For: Stirng Array & Enum combined with given Argument
    #define __MY_FN_ARG_ENUM(ARG, X)         MyEnum_ ##ARG ##_ ##X,
    #define __MY_FN_ARG_STR(ARG, X)          MACRO_STR(ARG, -, X),

    #define IMPL_ARG_ARRAY(NAME, ...) \
    typedef enum { \
        MACRO_FOR_ARG(__MY_FN_ARG_ENUM, NAME, __VA_ARGS__) \
    } My ##NAME ##Enum; \
    const char* MY_ ##NAME ##_ARR[] = { \
        MACRO_FOR_ARG(__MY_FN_ARG_STR, NAME, __VA_ARGS__) \
    }

    IMPL_ARG_ARRAY(Template, ABC, XYZ, 123, A1, B1, C1);

    assertReturnLine(Str, MY_Template_ARR[MyEnum_Template_123], "Template-123");
    assertReturnLine(Str, MY_Template_ARR[MyEnum_Template_A1], "Template-A1");
    assertReturnLine(Str, MY_Template_ARR[MyEnum_Template_C1], "Template-C1");

    // Macro For: Simple Array with multiple arguments for each element
    #define __MY_FN_TUPLE(X, Y)    MACRO_STR(X, <=>, Y),

    const char* ARR2_LEFT[] = {
        MACRO_FOR_TUPLE(__MY_FN_TUPLE, (A, 1), (B, 2), (C, 3))
    };

    const char* ARR2_RIGHT[] = {
        "A<=>1",
        "A<=>2",
        "A<=>3",
    };

    assertReturnLine(StrList, ARR2_LEFT, ARR2_RIGHT, 3);

    // Macro For: Simple array with multiple arguments for each element and Arguments
    #define __MY_FN_TUPLE_ARG(ARG, X, Y)    MACRO_STR(ARG, -, X, <=>, Y),

    #define IMPL_ARG_TUPLE_ARRAY(NAME, ...) \
    const char* TUPLE_ARRAY_ ##NAME [] = { \
        MACRO_FOR_TUPLE_ARG(__MY_FN_TUPLE_ARG, NAME, __VA_ARGS__) \
    }

    IMPL_ARG_TUPLE_ARRAY(MY,
        (A, 4),
        (X, 2),
        (V, 6),
        (Z, 8)
    );

    const char* TUPLE_ARRAY_RIGHT[] = {
        "MY-A<=>4",
        "MY-X<=>2",
        "MY-V<=>6",
        "MY-Z<=>8",
    };

    assertReturnLine(StrList, TUPLE_ARRAY_MY, TUPLE_ARRAY_RIGHT, 4);

    return 0;
}
