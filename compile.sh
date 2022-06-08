#!/bin/bash

    gcc -o tcp_attack flood_attack.c header/init_header.c header/CRC16_check.c -lpthread >&2
    gcc -o udp_attack udp_flood.c header/init_header.c header/CRC16_check.c -lpthread >&2
if [ "$?" = "0" ]
then
    echo "Compile Succeses at ./tcp_attack  and  ./udp_attack"
fi
