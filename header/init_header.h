#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <time.h>
#include "packet_struct.h"


void tcp_init_header(struct iphdr *, struct tcphdr *,struct pseudohdr *, char *, int, char);

void udp_init_header(struct iphdr *, struct udphdr *, struct pseudohdr *, char *, int);

void ip_init_header(struct iphdr *, char *, char);

