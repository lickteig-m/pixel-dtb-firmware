#!/bin/sh

nios2-flash-programmer "dtb_v3.6.flash" --base=0x8000000 --epcs --accept-bad-sysid '--cable=USB-Blaster on localhost [USB-0]' --program
