/***************************************************************************
    BT-BLE Debug Test-Utility(HciDump).c
    Author: Meghadoot
    2025-01-01
    
    This is a library for the validation of Bluetooth Interface.
    This validation test to check debug functionality with HCIDump.
    This is designed specifically for Embedded Boards/devices working with Yocto 
    Linux or other distros. 
    
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
* Create handbook with for HCIDump -
(HCIDump CLI is used to capture and display Bluetooth HCI traffic in real-time.
It captures raw HCI packets, which are exchanged between the 
Bluetooth host (software stack) and the Bluetooth controller (hardware)).
* Create configs for hci interface
* Create Automation for BT/BLE address and handles

**/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Starting Bluetooth HCI Packet Dump...\n");

    // Start hcidump for 10 seconds
    system("sudo hcidump -i hci0 & sleep 10; sudo pkill hcidump");

    printf("Bluetooth HCI Packet Dump completed.\n");
    return 0;
}
