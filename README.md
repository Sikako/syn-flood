# 111暑假專案

## Requirements

* 要做出三種不同的DoS攻擊
* 能夠有介面控制不同Host進行攻擊和停止
* DoS程式使用 C C++ 撰寫
* 能夠random source IP

## UML
[UML diagram](https://drive.google.com/file/d/1Wl6fYA4naVCfMY4u6Kba2XZunE7Qp2Mz/view?usp=sharing)

## 工具使用方法
### compile
```
$ ./compile.sh
```

### tcp_flood_attack
```
$ sudo ./tcp_attack <IPaddress> <port> <mode>
```

### udp_flood_attack
```
$ sudo ./udp_attack <IPaddress> <port>
```
### smurf_attack

```
$ gcc smurf.c -o tools/smurf_attack
$ sudo ./smurf_attack 192.168.200.55 192.168.200.255

The first ip is attacked address, second is the local area network.
```
