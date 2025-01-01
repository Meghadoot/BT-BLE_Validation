/***************************************************************************
    BT-BLE Debug Test-Utility(HciDump).c
    Author: Meghadoot
    2025-01-01
    
    This is a library for the validation of Bluetooth Interface.
    This validation test to check debug functionality with Wireshark.
    This is designed specifically for Embedded Board/devices working with Yocto
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
* Create handbook with for Wireshark -
(Wireshark is a versatile network protocol analyzer that Provides deep 
packet inspection, filtering, and visualization for a variety of network traffic. ).
* Create configs for wireshark for filtering BT packets
* Create Automation for BT/BLE address and handles

**/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Starting Bluetooth Packet Capture with Wireshark...\n");

    // Start Wireshark capture
    system("sudo wireshark -k -i hci0 & sleep 10; sudo pkill wireshark");

    printf("Bluetooth Packet Capture completed. Check Wireshark for the capture file.\n");
    return 0;
}
