/***************************************************************************
    BT-BLE Power Consumption.c
    Author: Meghadoot
    2025-01-15
    
    This is a library for the validation of Bluetooth Interface.
    This validation test uses hcitool for Power consumption tests.
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
* Create handbook with for hcitool -
(hcitool is used to access/control/configure the interactions among host 
and Bluetooth controller.)
* Create Automation for BT/BLE address and handles
**/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Bear in mind, use hcitool for simulation purpose
// Function to simulate Bluetooth BLE activity
void simulate_ble_activity() {
    system("hcitool lescan & sleep 10; pkill hcitool");
}

int main() {
    printf("Starting Bluetooth BLE Power Consumption Test...\n");

    for (int i = 0; i < 10; i++) {
        printf("Iteration %d: Simulating BLE activity...\n", i + 1);
        simulate_ble_activity();
        sleep(10);  // Sleep to allow power measurements
    }

    printf("Bluetooth BLE Power Consumption Test completed.\n");
    return 0;
}
