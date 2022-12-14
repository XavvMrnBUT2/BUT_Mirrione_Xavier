/* 
 * File:   UART_Protocol.h
 * Author: Table2
 *
 * Created on 4 janvier 2023, 17:22
 */

#ifndef UART_PROTOCOL_H
#define	UART_PROTOCOL_H

#define Waiting 0
#define FunctionMSB 1
#define FunctionLSB 2
#define PayloadLengthMSB 3
#define PayloadLengthLSB 4
#define Payload 5
#define Checksum 6

#define SET_ROBOT_STATE 0x0051
#define SET_ROBOT_MANUAL_CONTROL 0x0052

unsigned char UartCalculateChecksum(int msgFunction, int msgPayloadLength, unsigned char* msgPayload);
void UartEncodeAndSendMessage(int msgFunction, int msgPayloadLength, unsigned char* msgPayload);
void UartDecodeMessage(unsigned char c);
void UartProcessDecodedMessage(unsigned char function, unsigned char payloadLength, unsigned char* payload);

#endif	/* UART_PROTOCOL_H */

