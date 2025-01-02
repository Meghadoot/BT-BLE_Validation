/***************************************************************************
    BT-BLE Reliability.c
    Author: Meghadoot
    2025-01-02
    
    This is a library for the validation of Bluetooth Interface.
    This validation test uses gatttol to test Bluetooth Reilability.
    Designed specifically for Embedded Board/devices working 
    with Yocto Linux or other distros. 
    
    Copyright (C) 2024  Meghadoot Gardi.  All right reserved.

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

int main() {
    printf("Starting Bluetooth BLE Reliability Test...\n");

    // Replace XX:XX:XX:XX:XX:XX with the Bluetooth address of the target device
    for (int i = 0; i < 50; i++) {
        printf("Iteration %d: Establishing BLE connection...\n", i + 1);
        if (system("gatttool -b XX:XX:XX:XX:XX:XX --connect --timeout=10") != 0) {
            printf("Connection attempt %d failed.\n", i + 1);
        } else {
            printf("Connection attempt %d succeeded.\n", i + 1);
        }
        sleep(1);  // Short delay to simulate real-world usage
    }

    printf("Bluetooth BLE Reliability Test completed.\n");
    return 0;
}
