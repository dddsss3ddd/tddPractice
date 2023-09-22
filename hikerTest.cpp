#include <gtest/gtest.h>

extern "C"

{
#include "hiker.h"  

}

using namespace ::testing;
 
TEST(test, testFB){
    ASSERT_EQ(1,calcFB(1));
    ASSERT_EQ(300,calcFB(3));
    ASSERT_EQ(4,calcFB(4));
    ASSERT_EQ(500,calcFB(5));
    ASSERT_EQ(1500,calcFB(30));
    ASSERT_EQ(500,calcFB(50));
    ASSERT_EQ(1500,calcFB(600));
    ASSERT_EQ(34,calcFB(34));
    ASSERT_EQ(980,calcFB(98));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}