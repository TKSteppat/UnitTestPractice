/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, multiple_leading_same_characters)
{
    Password my_password;
    int actual = my_password.count_leading_characters("AAAxyz");
    ASSERT_EQ(2, actual);
}

TEST(PasswordTest, mixed_leading_characters)
{
    Password my_password;
    int actual = my_password.count_leading_characters("ABBBB");
    ASSERT_EQ(3, actual);
}

TEST(PasswordTest, no_leading_characters)
{
    Password my_password;
    int actual = my_password.count_leading_characters("");
    ASSERT_EQ(4, actual);
}

TEST(PasswordTest, different_leading_character)
{
    Password my_password;
    int actual = my_password.count_leading_characters("bbB");
    ASSERT_EQ(0, actual);
}
