# Install and Flashing Instructions

Information on Flashing the FC is mostly collected on the [RC Groups Thread](http://www.rcgroups.com/forums/showthread.php?t=2512604), but distributed over hundreds of post. The install instructions in this file consolidate this information.

# Windows

See [RC Groups Thread First Post](http://www.rcgroups.com/forums/showthread.php?t=2512604) for now.

# Linux

_Note: The newer gcc version 6.x had issues with telemetry and LVC, version 5.4.1 tested ok._

For flashing on Linux, the [OpenOCD](http://openocd.org/) toolchain is used. The install instructions have been tested to work with OpenOCD 0.9.0 on Debian-based systems (Ubuntu 14.04).

## Install OpenOCD 0.9.0

On some OS versions, older versions of OpenOCD might be the default. On Debian-based systems you can check which version is the default by running
```
apt-cache policy openocd
```
* If the output indicates a version below 0.9.0, you can install it on Debian-based systems (such as Ubuntu 14.04) using these commands:
```
wget http://lug.mtu.edu/ubuntu/pool/universe/h/hidapi/libhidapi-hidraw0_0.8.0~rc1+git20140201.3a66d4e+dfsg-3_amd64.deb
sudo dpkg -i libhidapi-hidraw0_0.8.0~rc1+git20140201.3a66d4e+dfsg-3_amd64.deb
wget http://ubuntu.mirrors.tds.net/ubuntu/pool/universe/j/jimtcl/libjim0.76_0.76-1_amd64.deb
sudo dpkg -i libjim0.76_0.76-1_amd64.deb
wget http://ubuntu.mirrors.tds.net/ubuntu/pool/universe/o/openocd/openocd_0.9.0-1build1_amd64.deb
sudo dpkg -i openocd_0.9.0-1build1_amd64.deb
```
* If the output of the check indicates a version equal or higher to 0.9.0, just install openocd:
```
sudo apt-get install openocd
```

## Toolchain Install and Build

Run the following to install the necessary build tools:
```
apt-get install git build-essential gcc-arm-none-eabi libnewlib-arm-none-eabi
```
Clone the repository:
```
git clone https://github.com/silver13/h8mini-testing
cd h8mini-testing
```
Build the firmware:
```
cd gcc
make
```

## Flashing

Before being able to flash, the board needs to be unlocked. **This only has to be performed once for every controller board.** See [Post 2211 and preceding ones on RCGroups for details](http://www.rcgroups.com/forums/showthread.php?t=2512604&page=148#post34798015).
```
openocd -f /usr/local/share/openocd/scripts/interface/stlink-v2.cfg -f /usr/local/share/openocd/scripts/target/stm32f1x.cfg \
-c init -c "reset halt" \
-c "mww 0x40022004 0x45670123" -c "mww 0x40022004 0xCDEF89AB" -c "mww 0x40022008 0x45670123" -c "mww 0x40022008 0xCDEF89AB" \
-c "mww 0x40022010 0x220" -c "mww 0x40022010 0x260" -c "sleep 100" -c "mww 0x40022010 0x230" -c "mww 0x1ffff800 0xC8475AA5" \
-c "sleep 1000" -c "mww 0x40022010 0x2220" -c "sleep 100" -c "mdw 0x40022010" -c "mdw 0x4002201c" -c "mdw 0x1ffff800" \
-c shutdown 
```


Once the board is unlocked, the firmware can be flashed using
```
openocd -f /usr/share/openocd/scripts/interface/stlink-v2.cfg -f /usr/share/openocd/scripts/target/stm32f1x.cfg -c init -c "reset halt" -c "flash write_image erase h8mini 0x08000000" -c "verify_image h8mini 0x08000000" -c shutdown
```
