/***************************************************************************
    BT-BLE Speed.c
    Author: Meghadoot
    2025-01-15
    
    This is a library for the validation of Bluetooth Interface.
    This validation test uses gatttol for Speed tests.
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
* Create Automation for BT/BLE address and handles
**/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    printf("Starting Bluetooth BLE Performance Test...\n");

    // Replace XX:XX:XX:XX:XX:XX with the Bluetooth address of the target device
    clock_t start, end;
    double duration;

    start = clock();
    system("gatttool -b XX:XX:XX:XX:XX:XX --char-write-req --handle=0x0001 --value=0100");
    end = clock();

    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Data transmission time: %f seconds\n", duration);

    start = clock();
    system("gatttool -b XX:XX:XX:XX:XX:XX --char-read --handle=0x0001");
    end = clock();

    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Data reception time: %f seconds\n", duration);

    printf("Bluetooth BLE Performance Test completed.\n");
    return 0;
}
