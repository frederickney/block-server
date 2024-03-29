/**
 * @project OS_PROJECT_S2
 * @file request.h
 * @author Frederick NEY et Stephane OVERLEN
 * @date 09/06/2016 08:56
 */
#ifndef OS_PROJECT_S2_REQUEST_H
#define OS_PROJECT_S2_REQUEST_H

#include "socket.h"

uint32_t send_request(int sd, data *data_struct);

uint32_t set_request(int sd, char *cmd, data *data_struct);

#endif //OS_PROJECT_S2_REQUEST_H
