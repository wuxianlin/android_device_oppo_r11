#
# Copyright (C) 2016 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# This contains the module build definitions for the hardware-specific
# components for this device.
#
# As much as possible, those components should be built unconditionally,
# with device-specific names to avoid collisions, to avoid device-specific
# bitrot and build breakages. Building a component unconditionally does
# *not* include it on all devices, so it is safe even with hardware-specific
# components.

LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_DEVICE),r11)

include $(call all-makefiles-under,$(LOCAL_PATH))

include $(CLEAR_VARS)

include device/oppo/r11/tftp.mk

include device/oppo/r11/kernel/AndroidKernel.mk

# Create a link for the WCNSS config file, which ends up as a writable
# version in /data/misc/wifi
$(shell mkdir -p $(TARGET_OUT_ETC)/firmware/wlan/qca_cld; \
	ln -sf /persist/wlan_mac.bin \
	    $(TARGET_OUT_ETC)/firmware/wlan/qca_cld/wlan_mac.bin; \
	ln -sf /persist/WCNSS_qcom_cfg.ini \
	    $(TARGET_OUT_ETC)/firmware/wlan/qca_cld/WCNSS_qcom_cfg.ini)

$(shell mkdir -p $(TARGET_OUT)/lib/modules; \
    ln -sf /system/lib/modules/qca_cld3/qca_cld3_wlan.ko \
        $(TARGET_OUT)/lib/modules/wlan.ko)

# Create symbolic links for msadp
$(shell mkdir -p $(TARGET_OUT_VENDOR)/firmware; \
    ln -sf /dev/block/bootdevice/by-name/msadp \
        $(TARGET_OUT_VENDOR)/firmware/msadp)

endif
