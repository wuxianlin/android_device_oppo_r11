/*
   Copyright (c) 2016, The CyanogenMod Project
             (c) 2017, The LineageOS Project

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

void property_override(char const prop[], char const value[])
{
    prop_info *pi;

    pi = (prop_info*) __system_property_find(prop);
    if (pi)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

static int read_file2(const char *fname, char *data, int max_size)
{
    int fd, rc;

    if (max_size < 1)
        return 0;

    fd = open(fname, O_RDONLY);
    if (fd < 0) {
        ERROR("failed to open '%s'\n", fname);
        return 0;
    }

    rc = read(fd, data, max_size - 1);
    if ((rc > 0) && (rc < max_size))
        data[rc] = '\0';
    else
        data[0] = '\0';
    close(fd);

    return 1;
}

void init_alarm_boot_properties()
{
    char const *alarm_file = "/proc/sys/kernel/boot_reason";
    char buf[64];

    if(read_file2(alarm_file, buf, sizeof(buf))) {

    /*
     * Setup ro.alarm_boot value to true when it is RTC triggered boot up
     * For existing PMIC chips, the following mapping applies
     * for the value of boot_reason:
     *
     * 0 -> unknown
     * 1 -> hard reset
     * 2 -> sudden momentary power loss (SMPL)
     * 3 -> real time clock (RTC)
     * 4 -> DC charger inserted
     * 5 -> USB charger insertd
     * 6 -> PON1 pin toggled (for secondary PMICs)
     * 7 -> CBLPWR_N pin toggled (for external power supply)
     * 8 -> KPDPWR_N pin toggled (power key pressed)
     */
        if(buf[0] == '3')
            property_set("ro.alarm_boot", "true");
        else
            property_set("ro.alarm_boot", "false");
    }
}

void vendor_load_properties() {
    char const *prj_file = "/proc/oppoVersion/prjVersion";
    char const *operator_file = "/proc/oppoVersion/operatorName";
    char prj_version[64];
    char operator_name[64];
    if (read_file2(prj_file, prj_version, sizeof(prj_version)) && read_file2(operator_file, operator_name, sizeof(operator_name))) {
        if (strstr(prj_version, "16051")) {
            if (strstr(operator_name, "8")) {
                property_override("ro.product.model", "OPPO R11");
                property_set("ro.separate.soft", "16051");
                property_override("ro.product.device", "R11");
                property_override("ro.product.name", "R11");
                property_override("ro.build.product", "R11");
                property_set("ro.rf_version", "TDD_FDD_Ch_A_16051");
            } else if (strstr(operator_name, "2")) {
                property_override("ro.product.model", "OPPO R11t");
                property_set("ro.separate.soft", "16052");
                property_override("ro.product.device", "R11");
                property_override("ro.product.name", "R11t");
                property_override("ro.build.product", "R11t");
                property_set("ro.rf_version", "TDD_FDD_Ch_16052");
            }
            property_set("ro.audio.customplatform", "16051");
            property_set("ro.power_profile.override", "zzz_power_profile_16051");
            property_set("ro.qualcomm.foss", "1");
            property_set("ro.qualcomm.display.paneltype", "1");
            property_set("config.foss.xml", "1");
            property_set("config.foss.path", "/system/etc/FOSSConfig.xml");
            property_set("ro.qcom.ad", "1");
            property_set("ro.qcom.ad.sensortype", "2");
            property_set("ro.qcom.ad.calib.data", "/system/etc/16051_OLED_AD_calib.cfg");
        } else if (strstr(prj_version, "16103")) {
            if (strstr(operator_name, "8")) {
                property_override("ro.product.model", "OPPO R11 Plus");
                property_set("ro.separate.soft", "16103");
                property_override("ro.product.device", "R11Plus");
                property_override("ro.product.name", "R11Plus");
                property_override("ro.build.product", "R11Plus");
                property_set("ro.rf_version", "TDD_FDD_Ch_A_16103");
            } else if (strstr(operator_name, "2")) {
                property_override("ro.product.model", "OPPO R11 Plust");
                property_set("ro.separate.soft", "16102");
                property_override("ro.product.device", "R11Plus");
                property_override("ro.product.name", "R11Plust");
                property_override("ro.build.product", "R11Plust");
                property_set("ro.rf_version", "TDD_FDD_Ch_16102");
            }
            property_set("ro.audio.customplatform", "16103");
            property_set("ro.power_profile.override", "zzz_power_profile_16103");
            property_set("ro.qualcomm.foss", "0");
            property_set("ro.qualcomm.display.paneltype", "0");
            property_set("persist.extend.brightness", "1");
            property_set("config.foss.xml", "0");
            property_set("ro.qcom.ad", "1");
            property_set("ro.qcom.ad.sensortype", "2");
            property_set("ro.qcom.ad.calib.data", "/system/etc/16103_LCD_AD_calib.cfg");
        } else if (strstr(prj_version, "16118")) {
            if (strstr(operator_name, "8")) {
                property_override("ro.product.model", "OPPO R11 Plusk");
                property_set("ro.separate.soft", "16118");
                property_override("ro.product.device", "R11Plusk");
                property_override("ro.product.name", "R11Plusk");
                property_override("ro.build.product", "R11Plusk");
                property_set("ro.rf_version", "TDD_FDD_Ch_A_16103");
            } else if (strstr(operator_name, "2")) {
                property_override("ro.product.model", "OPPO R11 Pluskt");
                property_set("ro.separate.soft", "16116");
                property_override("ro.product.device", "R11Plusk");
                property_override("ro.product.name", "R11Pluskt");
                property_override("ro.build.product", "R11Pluskt");
                property_set("ro.rf_version", "TDD_FDD_Ch_16102");
            }
            property_set("ro.audio.customplatform", "16118");
            property_set("ro.power_profile.override", "zzz_power_profile_16118");
            property_set("ro.qualcomm.foss", "1");
            property_set("ro.qualcomm.display.paneltype", "1");
            property_set("config.foss.xml", "1");
            property_set("config.foss.path", "/system/etc/FOSSConfig-Oppo16118.xml");
            property_set("ro.qcom.ad", "1");
            property_set("ro.qcom.ad.sensortype", "2");
            property_set("ro.qcom.ad.calib.data", "/system/etc/16118_OLED_AD_calib.cfg");
        }
    }

    init_alarm_boot_properties();
}
