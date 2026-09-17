#include "../include/CLIB_ThreadLogs_Framework.h"
#include "../include/CLIB_ThreadLogs_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
// public.
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered CONSTRUCTOR of CLIB_ThreadLogs_Framework_Global()." << std::endl;
        stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global();
        stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global();
        stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global();
        stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global();
        std::cout << "exiting CONSTRUCTOR of CLIB_ThreadLogs_Framework_Global()." << std::endl;
    }
    CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::~CLIB_ThreadLogs_Framework_Global()
    {

    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value) {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(value);
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(value);
    }
    bool CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(byteArray);
    }
    double CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray)
    {
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(byteArray);
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_GlobalCLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
// private.
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        return buffer;
    }
    unsigned char* CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(double value) {
            unsigned char* buffer = nullptr;
            buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX };
            std::memcpy(buffer, &value, sizeof(double));
            return buffer;
    }
    bool CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray) {
        return (byteArray[7] & 1) != 0;
    }
    double CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        return temp;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }
    void CLIB_ThreadLogs::CLIB_ThreadLogs_Framework_Global::stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
        std::cout << "exiting stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_Global()" << std::endl;
    }