#ifndef PACKET_RECEIVER_H
#define PACKET_RECEIVER_H

#include <stdint.h>

/* -------------------
		PACKET FORMAT
		
		byte [0] 		- packet type (uint8_t)
		byte [1..n] - data (cast to packet-specific struct)
		
   ------------------- */


#define PACKET_BASIC 0

 struct __attribute__ ((packed)) packet_basic {
	uint16_t solenoid_states;
	uint8_t stand_enable;
	uint32_t timestamp; 		//ms, computer's idea of our timestamp. Reject packet and disable stand if too old.
};

void process_packet(uint8_t* data, uint16_t len);



#endif /*PACKET_RECEIVER_H*/
