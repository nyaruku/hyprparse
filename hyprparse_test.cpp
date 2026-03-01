#include "hyprparse.h"
#include "testy/test.h"

/*
 * This is just a unit test for hyprparse
 */
static void hyprparse_test_monitors() {
    // define a module
    MODULE("Monitors");

    // define a test suite
    SUITE("Basic");

    // display a comment
    COMMENT("test addition...");

    // execute some unit tests
    TEST(((1 + 1) == 2));
}

void test_main(int argc, char *argv[]) {
    MODULE("Hyprparse Test");

    // Tests
    hyprparse_test_monitors();
}