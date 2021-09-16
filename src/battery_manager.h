#ifndef SOFTWARE_BATTERY_MANAGER_H
#define SOFTWARE_BATTERY_MANAGER_H

#include <stdint.h>

#include "gmock/gmock.h"

using ::testing::AtLeast;
using ::testing::Return;

class Battery
{
  public:
   virtual ~Battery() = default;
   virtual uint16_t GetRemainingCapacity() const = 0;
};

class MockBattery : public Battery
{
  public:
   MockBattery() {
    EXPECT_CALL(*this, GetRemainingCapacity()).Times(AtLeast(1));
   }
   MOCK_METHOD(uint16_t, GetRemainingCapacity, (), (const, override));
};

#endif // SOFTWARE_BATTERY_MANAGER_H
