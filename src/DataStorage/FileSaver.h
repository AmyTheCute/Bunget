#ifndef FILESAVER_H
#define FILESAVER_H

#pragma once

#include <iostream>

class FileSaver
{
public:
    FileSaver();
    ~FileSaver();

    void save();
    void read();

private:
    std::string filename;
};

#endif