//
//  main2.cpp
//  Laba26
//

#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define NAME "sfifo.cc"

using namespace::std;

int main()
    {
    int fd; char buf[80];
    unlink(NAME);
    if(mkfifo(NAME, S_IFIFO|S_IRWXU|S_IRWXG|S_IRWXO))
    { perror("Ошибка FIFO");
        return 1;
    }
    if((fd=open(NAME, O_RDONLY))==-1)
    {
        perror("Ошибка открытия файла сервера");
    }
        read(fd, buf, sizeof(buf));
        cout<<"Получено->"<<buf<<endl; close(fd);
        unlink(NAME);
        return 0;
        
    }

