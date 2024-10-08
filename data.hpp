#pragma once

#include <cstdint>
#include <cinttypes>
#include "c_data.h"
using namespace std;

class data{
    public:
        data();
        data(unsigned int lenght);
        data(const void* hData,unsigned int lenght);
        data(const c_data* in);
        data(data* in);
        ~data();
        unsigned int get_lenght();
        void set_lenght(unsigned int hLenght);
        const void* get_data();
        void set_data(data* in);
        void set_data(const void* hData,unsigned int lenght);
        void add_data(data* in);
        void add_data(const void* hData,unsigned int lenght);
        void out_c_data(c_data* in);
        void clean_data();
    protected:
        c_data content;
    private:
        unsigned int id;

};
