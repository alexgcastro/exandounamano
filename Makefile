export BOARD=uno
export SERIALDEV=/dev/ttyACM0
OVERRIDE_EXECUTABLES = 1
CC      = /usr/lib64/ccache/$(CC_NAME)
CXX     = /usr/lib64/ccache/$(CXX_NAME)
AS      = /usr/bin/$(AS_NAME)
OBJCOPY = /usr/bin/$(OBJCOPY_NAME)
OBJDUMP = /usr/bin/$(OBJDUMP_NAME)
AR      = /usr/bin/$(AR_NAME)
SIZE    = /usr/bin/$(SIZE_NAME)
NM      = /usr/bin/$(NM_NAME)
AVR_TOOLS_DIR = /usr
include /usr/share/arduino/Arduino.mk

