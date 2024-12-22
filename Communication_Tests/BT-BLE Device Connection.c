/***************************************************************************
	BT-BLE Device Connection.c
	Author: Meghadoot
  	2024-12-22
	
	This is a library for the validation of Bluetooth Interface.
	This validation test uses gatttol to test sample data/device connection.
	Designed specifically to work with the Embedded Boards/devices working with Yocto Linux or other distros. 
	
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

int main() {
    printf("Starting Bluetooth BLE Connection Establishment Test...\n");

    // Replace XX:XX:XX:XX:XX:XX with the Bluetooth address of the target device
    system("gatttool -b XX:XX:XX:XX:XX:XX --connect --timeout=10");

    printf("Bluetooth BLE Connection Establishment Test completed.\n");
    return 0;
}
