/***********************************************************************************************************************************
Verify Protocol Handler
***********************************************************************************************************************************/
#ifndef COMMAND_VERIFY_PROTOCOL_H
#define COMMAND_VERIFY_PROTOCOL_H

#include "common/type/string.h"
#include "common/type/variantList.h"
#include "protocol/server.h"

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
// Process protocol requests
void verifyFileProtocol(const VariantList *paramList, ProtocolServer *server);

/***********************************************************************************************************************************
Protocol commands for ProtocolServerHandler arrays passed to protocolServerProcess()
***********************************************************************************************************************************/
#define PROTOCOL_COMMAND_VERIFY_FILE                                STRID5("vf-f", 0x36cd60)

#define PROTOCOL_SERVER_HANDLER_VERIFY_LIST                                                                                        \
    {.command = PROTOCOL_COMMAND_VERIFY_FILE, .handler = verifyFileProtocol},

#endif
