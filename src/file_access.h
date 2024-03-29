/**
 * @project OS PROJECT S2
 * @file file_access.h
 * @author Frederick NEY et Stephane OVERLEN
 * @date 02/06/2016 18:06
 * @revision 1.0.1
 */

#ifndef OS_PROJECT_S2_FILE_ACCESS_H
#define OS_PROJECT_S2_FILE_ACCESS_H


#include <stdint.h>
#include "socket.h"

#define FORKERROR "*** ERROR: unable to gen file\n"

#define GEN_FILE "Generating img file...\t\t\t\t"

#define DD "Executing dd...\n"

#define DONE "[DONE]\n"

#define FAIL "[FAIL]\n"

int genfile(char *filename, char *workfile);

/**
 * reset offset to the beginning of the file and set the offset to specific location
 *
 *
 * @param int fd: file descriptor.
 * @param int offset: it's at this offset that we will start writing or reading the file.
 */
void set_offset(int fd, int offset);

/**
 * read file function
 *
 *
 * @param int fd: file descriptor.
 * @param data *data_struct: structure containing payload, error, request and reply.
 * @return int: error code.
 */
uint32_t read_file(int fd, data *data_struct);

/**
 * write file function
 *
 *
 * @param int fd: file descriptor.
 * @param data *data_struct: structure containing payload, error, request and reply.
 * @return int: error code.
 */
uint32_t write_file(int fd, data *data_struct);

int log_pid(char *pathname, pid_t pid);

#endif //OS_PROJECT_S2_FILE_ACCESS_H

