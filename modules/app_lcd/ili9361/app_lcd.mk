# $Id: app_lcd.mk 1222 2011-06-23 21:12:04Z tk $
# defines additional rules for application specific LCD driver

# enhance include path
C_INCLUDE +=	-I $(MIOS32_PATH)/modules/app_lcd/ili9361

# add modules to thumb sources
THUMB_SOURCE += \
	$(MIOS32_PATH)/modules/app_lcd/ili9361/app_lcd.c \
  $(MIOS32_PATH)/modules/app_lcd/ili9361/app_lcd_bmp.c
   
# include fonts
include $(MIOS32_PATH)/modules/glcd_font/glcd_font.mk

# directories and files that should be part of the distribution (release) package
DIST += $(MIOS32_PATH)/modules/app_lcd/ili9361

