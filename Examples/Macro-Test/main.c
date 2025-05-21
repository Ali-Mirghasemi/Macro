#include "Assert.h"
#include "Macro.h"

typedef Assert_Line (*TestCase_Fn)(void);

Assert_Line Test_VA_ARGS(void);
Assert_Line Test_Str(void);
Assert_Line Test_Fn(void);
Assert_Line Test_For(void);
Assert_Line Test_Join(void);


static const TestCase_Fn TESTS[] = {
    Test_VA_ARGS,
    Test_Str,
    Test_Fn,
    Test_For,
    Test_Join,
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

    #define __ZERO          0
    #define __ONE           1
    #define __TWO           2
    #define __THREE         3
    assertReturnLine(MACRO_VA_ARGS_MAP((__THREE, __TWO, __ONE, __ZERO)), __ZERO);
    assertReturnLine(MACRO_VA_ARGS_MAP((__THREE, __TWO, __ONE, __ZERO), A), __ONE);
    assertReturnLine(MACRO_VA_ARGS_MAP((__THREE, __TWO, __ONE, __ZERO), A, B), __TWO);
    assertReturnLine(MACRO_VA_ARGS_MAP((__THREE, __TWO, __ONE, __ZERO), A, B, C), __THREE);

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

Assert_Line Test_Fn(void) {
    ASSERT_PRINT_HEADER("Fn", 64, '-');

    #define __FN_ZERO()             "ZeroInput"
    #define __FN_ONE(A)             "One-" #A
    #define __FN_TWO(A, B)          "Two-" #A "-" #B
    #define __FN_THREE(A, B, C)     "Three-" #A "-" #B "-" #C

    assertReturnLine(Str, MACRO_FN(__FN_ZERO), "ZeroInput");
    assertReturnLine(Str, MACRO_FN(__FN_ONE, X1), "One-X1");
    assertReturnLine(Str, MACRO_FN(__FN_TWO, A1, B2), "Two-A1-B2");
    assertReturnLine(Str, MACRO_FN(__FN_THREE, A, B, C), "Three-A-B-C");

    assertReturnLine(Str, MACRO_FN_MAP((__FN_THREE, __FN_TWO, __FN_ONE, __FN_ZERO)), "ZeroInput");
    assertReturnLine(Str, MACRO_FN_MAP((__FN_THREE, __FN_TWO, __FN_ONE, __FN_ZERO), AAA), "One-AAA");
    assertReturnLine(Str, MACRO_FN_MAP((__FN_THREE, __FN_TWO, __FN_ONE, __FN_ZERO), XXX, ZZZ), "Two-XXX-ZZZ");
    assertReturnLine(Str, MACRO_FN_MAP((__FN_THREE, __FN_TWO, __FN_ONE, __FN_ZERO), 1, 2, 3), "Three-1-2-3");

    #define __FN_ARG_ZERO(ARG)                  #ARG "-ZeroInput"
    #define __FN_ARG_ONE(ARG, A)                #ARG "-One-" #A
    #define __FN_ARG_TWO(ARG, A, B)             #ARG "-Two-" #A "-" #B
    #define __FN_ARG_THREE(ARG, A, B, C)        #ARG "-Three-" #A "-" #B "-" #C

    assertReturnLine(Str, MACRO_FN_MAP_ARG((__FN_ARG_THREE, __FN_ARG_TWO, __FN_ARG_ONE, __FN_ARG_ZERO), MyArg), "MyArg-ZeroInput");
    assertReturnLine(Str, MACRO_FN_MAP_ARG((__FN_ARG_THREE, __FN_ARG_TWO, __FN_ARG_ONE, __FN_ARG_ZERO), MyArg, AAA), "MyArg-One-AAA");
    assertReturnLine(Str, MACRO_FN_MAP_ARG((__FN_ARG_THREE, __FN_ARG_TWO, __FN_ARG_ONE, __FN_ARG_ZERO), MyArg, XXX, ZZZ), "MyArg-Two-XXX-ZZZ");
    assertReturnLine(Str, MACRO_FN_MAP_ARG((__FN_ARG_THREE, __FN_ARG_TWO, __FN_ARG_ONE, __FN_ARG_ZERO), MyArg, 1, 2, 3), "MyArg-Three-1-2-3");

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

    // Macro For: array of macro functions and list of tuples
    #define __FN_MAP_0()            "NoInput",
    #define __FN_MAP_1(A)           "O1-" #A ,
    #define __FN_MAP_2(A, B)        "O2-" #A "-" #B ,
    #define __FN_MAP_3(A, B, C)     "O3-" #A "-" #B "-" #C ,

    const char* TEST_ARRAY_LEFT[] = {
        MACRO_FOR_MAP((__FN_MAP_3, __FN_MAP_2, __FN_MAP_1, __FN_MAP_0),
            (),
            (A, B),
            (A),
            (A, B, C)
        )
    };
    const char* TEST_ARRAY_RIGHT[] = {
        "NoInput",
        "O2-A-B",
        "O1-A",
        "O3-A-B-C",
    };
    assertReturnLine(StrList, TEST_ARRAY_LEFT, TEST_ARRAY_RIGHT, 4);

    // Macro For: array of macro functions and list of tuples and given argument
    #define __FN_MAP_ARG_0(ARG)              #ARG "-NoInput",
    #define __FN_MAP_ARG_1(ARG, A)           #ARG "-O1-" #A ,
    #define __FN_MAP_ARG_2(ARG, A, B)        #ARG "-O2-" #A "-" #B ,
    #define __FN_MAP_ARG_3(ARG, A, B, C)     #ARG "-O3-" #A "-" #B "-" #C ,

    const char* TEST_ARRAY_LEFT2[] = {
        MACRO_FOR_MAP_ARG((__FN_MAP_ARG_3, __FN_MAP_ARG_2, __FN_MAP_ARG_1, __FN_MAP_ARG_0), MyArg,
            (),
            (A, B),
            (A),
            (A, B, C)
        )
    };
    const char* TEST_ARRAY_RIGHT2[] = {
        "MyArg-NoInput",
        "MyArg-O2-A-B",
        "MyArg-O1-A",
        "MyArg-O3-A-B-C",
    };
    assertReturnLine(StrList, TEST_ARRAY_LEFT2, TEST_ARRAY_RIGHT2, 4);

    return 0;
}

Assert_Line Test_Join(void) {
    ASSERT_PRINT_HEADER("Join", 64, '-');
    // Simple Join
    const char* TEST1_RESULT = MACRO_JOIN("-", "ABC", "123", "XYZ");
    const char* TEST1_EXPECTED = "ABC-123-XYZ";
    assertReturnLine(Str, TEST1_RESULT, TEST1_EXPECTED);
    // Join Fn
    #define __MY_JOIN_FN(X)                 "." #X "."
    const char* TEST2_RESULT = MACRO_JOIN_FN("_", __MY_JOIN_FN, X, Y, Z);
    const char* TEST2_EXPECTED = ".X._.Y._.Z.";
    assertReturnLine(Str, TEST2_RESULT, TEST2_EXPECTED);
    // Join Fn Arg
    #define __MY_JOIN_ARG                   joinArg
    #define __MY_JOIN_FN_ARG(ARG, X)        #ARG "-" #X
    const char* TEST3_RESULT = MACRO_JOIN_FN_ARG(",", __MY_JOIN_FN_ARG, __MY_JOIN_ARG, X, Y, Z);
    const char* TEST3_EXPECTED = "joinArg-X,joinArg-Y,joinArg-Z";
    assertReturnLine(Str, TEST3_RESULT, TEST3_EXPECTED);
    

    return 0;
}
