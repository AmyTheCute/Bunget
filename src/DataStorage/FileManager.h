#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#pragma once

#include <iostream>

class FileManager
{
public:
    FileManager();
    ~FileManager();

    void save();
    void read();

private:
    std::string filename;
};

#endif