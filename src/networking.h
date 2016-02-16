#ifndef __NETWORKING_H__
#define __NETWORKING_H__
#include <stdint.h>
#include <stdbool.h>

#define IPADDR0 129
#define IPADDR1 116
#define IPADDR2 46
#define IPADDR3 81

#define NETMASK0 0
#define NETMASK1 0
#define NETMASK2 0
#define NETMASK3 0

#define MACADDR {0xCB, 0xCB, 0xCB, 0xCB, 0xCB, 0xCB}

#define TX_BUFFER_SIZE 1536
#define RX_BUFFER_SIZE 1536

#define UDP_PORT 6240

void networking_init(uint32_t sysClkFreq);
void networking_periodic(void);


void uip_appcall(void);
void uip_udp_appcall(void);
void uip_log(char* str);

extern volatile bool neth_got_int;

#endif /* __NETWORKING_H__*/
