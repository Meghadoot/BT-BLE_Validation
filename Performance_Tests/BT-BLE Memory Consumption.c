/***************************************************************************
    BT-BLE Memory Consumption.c
    Author: Meghadoot
    2025-01-15
    
    This is a library for the validation of Bluetooth Interface.
    This validation test uses hcitool & file-descriptors of meminfo for 
    Memory consumption tests.
    Designed specifically for Embedded Board/devices working 
    with Yocto Linux or other distros. 
    
    Copyright (C) 2025  Meghadoot Gardi.  All right reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

 ***************************************************************************/

/** TODO
* Create handbook with for gatttol -
(gatttool is used to access the “services” running on your bluetooth device.)
* Use configs for 
* Create Automation for BT/BLE address and handles
**/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void log_memory_usage(const char *label) {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (fp == NULL) {
        perror("Failed to open /proc/meminfo");
        return;
    }

    printf("%s Memory Usage:\n", label);
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strncmp(buffer, "MemFree:", 8) == 0 || strncmp(buffer, "MemAvailable:", 13) == 0) {
            printf("%s", buffer);
        }
    }

    fclose(fp);
}

void simulate_ble_activity() {
    system("hcitool lescan & sleep 10; pkill hcitool");
}

int main() {
    printf("Starting Bluetooth BLE Memory Consumption Test...\n");

    log_memory_usage("Before BLE activity");

    simulate_ble_activity();

    log_memory_usage("After BLE activity");

    printf("Bluetooth BLE Memory Consumption Test completed.\n");
    return 0;
}
