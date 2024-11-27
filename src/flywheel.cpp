#include "flywheel.h"
#include "robot_config.h"
#include "vex.h"

using namespace vex;

// two set of shooting ball control
// one for soft red ball
// one for hard blue ball

void shooting_blue_ball() {
  if (Controller.ButtonL1.pressing()) {
    flywheel.spin(directionType::fwd, 12000, voltageUnits::mV);
  } else {
    flywheel.stop(brakeType::coast);
  }
}

void shooting_red_ball() {
  if (Controller.ButtonL1.pressing()) {
    flywheel.spin(directionType::fwd, 12000, voltageUnits::mV);
  } else {
    flywheel.stop(brakeType::coast);
  }
}