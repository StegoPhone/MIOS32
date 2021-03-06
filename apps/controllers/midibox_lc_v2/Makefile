# $Id: Makefile 1820 2013-09-01 15:44:33Z tk $

################################################################################
# following setup taken from environment variables
################################################################################

PROCESSOR =	$(MIOS32_PROCESSOR)
FAMILY    = 	$(MIOS32_FAMILY)
BOARD	  = 	$(MIOS32_BOARD)
LCD       =     $(MIOS32_LCD)


################################################################################
# Source Files, include paths and libraries
################################################################################

THUMB_SOURCE    = src/app.c \
		  src/presets.c \
		  src/terminal.c \
	          src/lc_hwcfg.c \
	          src/lc_midi.c \
	          src/lc_sysex.c \
	          src/lc_mf.c \
	          src/lc_dio.c \
	          src/lc_dio_table.c \
	          src/lc_gpc.c \
	          src/lc_gpc_lables.c \
	          src/lc_lcd.c \
	          src/lc_leddigits.c \
	          src/lc_meters.c \
	          src/lc_vpot.c


# (following source stubs not relevant for Cortex M3 derivatives)
THUMB_AS_SOURCE =
ARM_SOURCE      =
ARM_AS_SOURCE   =

C_INCLUDE = 	-I src
A_INCLUDE = 	-I src

LIBS = 		


################################################################################
# Remaining variables
################################################################################

LD_FILE   = 	$(MIOS32_PATH)/etc/ld/$(FAMILY)/$(PROCESSOR).ld
PROJECT   = 	project

DEBUG     =	-g
OPTIMIZE  =	-Os

CFLAGS =	$(DEBUG) $(OPTIMIZE)


################################################################################
# Include source modules via additional makefiles
################################################################################

# sources of programming model
include $(MIOS32_PATH)/programming_models/traditional/programming_model.mk

# application specific LCD driver (selected via makefile variable)
include $(MIOS32_PATH)/modules/app_lcd/$(LCD)/app_lcd.mk

# buffered LCD output
include $(MIOS32_PATH)/modules/buflcd/buflcd.mk

# MIDI Router (and port handling)
include $(MIOS32_PATH)/modules/midi_router/midi_router.mk

# MIDImon
include $(MIOS32_PATH)/modules/midimon/midimon.mk

# UIP driver
include $(MIOS32_PATH)/modules/uip/uip.mk

# UIP Standard Task (with DHCPC + OSC server and client)
include $(MIOS32_PATH)/modules/uip_task_standard/uip_task_standard.mk

# EEPROM emulation
include $(MIOS32_PATH)/modules/eeprom/eeprom.mk

# common make rules
# Please keep this include statement at the end of this Makefile. Add new modules above.
include $(MIOS32_PATH)/include/makefile/common.mk
