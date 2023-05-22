#ifndef DISK_H
#define DISK_H

#include "RAM.h"

void saveToFile(const RAM& ram, const std::string& filename);
void loadFromFile(RAM& ram, const std::string& filename);

#endif  // DISK_H
