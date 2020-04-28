#!/bin/bash
openocd -f /usr/local/share/openocd/scripts/interface/stlink-v2.cfg -f /usr/local/share/openocd/scripts/target/stm32f1x.cfg -c init -c "reset halt" -c "flash write_image erase h8mini 0x08000000" -c "verify_image h8mini 0x08000000" -c "reset run" -c shutdown
