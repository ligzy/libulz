#ifndef LOGGER_H
#define LOGGER_H

#include <stdint.h>

#include "stringptr.h"
#include "vario.h"

void log_putln(int fd);
void log_puts(int fd, stringptr* s);
void log_putd(int fd, uint64_t number, int signflag);
void log_put(int fd, ...);

#endif