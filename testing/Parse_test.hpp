#include "------c-echo.h------"

#include "gtest/gtest.h"

TEST(ParseTest, GivenExample) {
    char* test_val[5]; test_val[0] = "./calculator"; test_val[1] = 3; test_val[2] = "+"; test_val[3] = 2; test_val[4] = "*"; test_val[5] = 6; 
    EXPECT_EQ("30", parse(5,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
