#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "PacketFlowIdentifier.h"

int decode_packet_flow_identifier(PacketFlowIdentifier *packetflowidentifier, uint8_t iei, uint8_t *buffer, uint32_t len)
{
    int decoded = 0;
    uint8_t ielen = 0;
    if (iei > 0)
    {
        CHECK_IEI_DECODER(iei, *buffer);
        decoded++;
    }
    ielen = *(buffer + decoded);
    decoded++;
    CHECK_LENGTH_DECODER(len - decoded, ielen);
    *packetflowidentifier = *buffer & 0x7f;
    decoded++;
#if defined (NAS_DEBUG)
    dump_packet_flow_identifier_xml(packetflowidentifier, iei);
#endif
    return decoded;
}
int encode_packet_flow_identifier(PacketFlowIdentifier *packetflowidentifier, uint8_t iei, uint8_t *buffer, uint32_t len)
{
    uint8_t *lenPtr;
    uint32_t encoded = 0;
    /* Checking IEI and pointer */
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER(buffer, PACKET_FLOW_IDENTIFIER_MINIMUM_LENGTH, len);
#if defined (NAS_DEBUG)
    dump_packet_flow_identifier_xml(packetflowidentifier, iei);
#endif
    if (iei > 0)
    {
        *buffer = iei;
        encoded++;
    }
    lenPtr  = (buffer + encoded);
    encoded ++;
    *(buffer + encoded) = 0x00 |
    (*packetflowidentifier & 0x7f);
    encoded++;
    *lenPtr = encoded - 1 - ((iei > 0) ? 1 : 0);
    return encoded;
}

void dump_packet_flow_identifier_xml(PacketFlowIdentifier *packetflowidentifier, uint8_t iei)
{
    printf("<Packet Flow Identifier>\n");
    if (iei > 0)
        /* Don't display IEI if = 0 */
        printf("    <IEI>0x%X</IEI>\n", iei);
    printf("    <Packet flow identifier value>%u</Packet flow identifier value>\n", *packetflowidentifier);
    printf("</Packet Flow Identifier>\n");
}
