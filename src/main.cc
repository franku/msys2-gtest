#include <iostream>
#include "gtest/gtest.h"
#include "battery_manager.h"

class Check
{
 public:
  Check(const Battery& b):b_(b) {}
  bool IsCapacityEnough() const {
    return b_.GetRemainingCapacity() > 80;
  }
 private:
  const Battery& b_;
};

TEST(Battery, get_remaining_capacity) {
  MockBattery bat;
  ON_CALL(bat, GetRemainingCapacity()).WillByDefault(Return(100));
  EXPECT_EQ(bat.GetRemainingCapacity(),100) << "Capacity is Wrong";
  Check a(bat);
  EXPECT_TRUE(a.IsCapacityEnough());
}

