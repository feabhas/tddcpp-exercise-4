#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::_;
using ::testing::ContainsRegex;
using ::testing::NiceMock;
using ::testing::Return;
using ::testing::StartsWith;
using ::testing::StrictMock;

#include "IDisplay.h"
#include "ds1820.h"
#include "temperature_sensor.h"

class Mock_tests : public ::testing::Test {
protected:
  Mock_tests()          = default;
  virtual ~Mock_tests() = default;

  // stub object
  Sensor::Ds1820 sensor{};
  // Create our mock object(s)
  // NiceMock<>
  // StrictMock<>

  // Create our unit_under_test
  // Temperature_sensor test_obj{ ??? };
};

TEST_F(Mock_tests, test_initialisation)
{
  GTEST_SKIP();
  // auto status = test_obj.initialize();
  // ASSERT_EQ(status, Temperature_sensor::status::ok);
}

TEST_F(Mock_tests, test_init_display_1st_failure)
{
  GTEST_SKIP();
  // auto status = test_obj.initialize();
  // ASSERT_EQ(status, Temperature_sensor::status::display_failure);
}

TEST_F(Mock_tests, test_init_display_2nd_failure)
{
  GTEST_SKIP();
  // auto status = test_obj.initialize();
  // ASSERT_EQ(status, Temperature_sensor::status::display_failure);
}

//========== run tests ======

TEST_F(Mock_tests, test_run_display_no_failure)
{
  GTEST_SKIP();
  // auto status = test_obj.run();
  // ASSERT_EQ(status, Temperature_sensor::status::ok);
}

TEST_F(Mock_tests, test_run_display_failure)
{
  GTEST_SKIP();
  // auto status = test_obj.run();
  // ASSERT_EQ(status, Temperature_sensor::status::display_failure);
}

TEST_F(Mock_tests, test_run_display_param_check)
{
  GTEST_SKIP();
  // See gtest ContainsRegex("..\\...C")
  // auto status = test_obj.run();
  // ASSERT_EQ(status, Temperature_sensor::status::ok);
}
