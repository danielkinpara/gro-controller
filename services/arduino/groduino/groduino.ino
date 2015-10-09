/** 
 *  \file groduino.ino
 *  \brief Enables project to run in arduino IDE.
 *  See module_handler.h for introductory documentation.
 *  \author Jake Rye
 */
#include "module_handler.h"

void setup() { // runs once
  initializeModules();
}

void loop() { // runs FOREVER!
  updateIncomingMessage();
  updateStreamMessage();
}
