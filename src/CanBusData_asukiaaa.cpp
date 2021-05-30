#include "CanBusData_asukiaaa.h"

namespace CanBusData_asukiaaa {

String Frame::toString() {
  String str = "bytes:";
  for (int i = 0; i < len; ++i) {
    str += " " + String(data[i]);
  }
  return "id: " + String(id) + ", rtr: " + yesNoOfBool(rtr) +
         ", ext: " + yesNoOfBool(ext) + ", " + str;
};

String Frame::yesNoOfBool(bool value) { return value ? "yes" : "no"; }

};  // namespace CanBusData_asukiaaa
