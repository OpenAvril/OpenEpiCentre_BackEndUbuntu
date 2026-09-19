#include "../include/WriteEnableForThreadsAt_ServerOutputSend_Framework_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE;
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT;
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE;
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads;
// public.
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
    }
    CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::~WriteEnableForThreadsAt_ServerOutputSend_Framework_Global() {
        std::cout << "thread "  << 0 << " :: thread ?" << " :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Framework : WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        delete _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE;
        delete _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT;
        delete _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE;
        delete _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads;
        std::cout << "thread "  << 0 << " :: thread ?" << " :: exiting LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Framework : WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId);
        stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId);
        stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId);
        stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId);
        stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId);
        stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
        stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId);
        stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId);
        stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId);
        stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend_Global(threadId)."));
    }
    std::array<bool,2> CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= CONST : dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
        return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId);
    }
    std::array<bool,2> CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= CONST : dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
        return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId);
    }
    std::array<bool,2> CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= CONST : dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
        return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId);
    }
    uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
        return *stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId);
    }
    int CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Bool_To_Int(uint8_t threadId, bool value)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= int : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Bool_To_Int(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Bool_To_Int(threadId, value);
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msbdouble_To_MsbByteArray(uint8_t threadId, double value) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msbdouble_To_MsbByteArray(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msbdouble_To_MsbByteArray(threadId, value);
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbDouble_To_MsbByteArray(uint8_t threadId, double value) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbDouble_To_MsbByteArray(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbDouble_To_MsbByteArray(threadId, value);
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msb_uint8_t_to_MsbByteArray(uint8_t threadId, uint8_t value) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msb_uint8_t_to_MsbByteArray(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msb_uint8_t_to_MsbByteArray(threadId, value);
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbBoolean_To_MsbByteArray(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbBoolean_To_MsbByteArray(threadId, value);
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbBoolean(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbBoolean(threadId, byteArray);
    }
    double CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= double : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbDouble(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbDouble(threadId, byteArray);
    }
    double CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= double : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbdouble(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbdouble(threadId, byteArray);
    }
    uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* byteArray)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbuint8_t(threadId)."));
        return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbuint8_t(threadId, byteArray);
    }
// private.
    int CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Bool_To_Int(uint8_t threadId, bool value) {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= int : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Bool_To_Int(threadId)."));
        return *temp;
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbBoolean_To_MsbByteArray(uint8_t threadId, bool value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1];
        for (uint8_t bitIndex = 0; bitIndex < static_cast<uint8_t>(sizeof(unsigned char)); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbBoolean_To_MsbByteArray(threadId)."));
        return buffer;
    }
    bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbBoolean(uint8_t threadId, const unsigned char* byteArray) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= bool : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbBoolean(threadId)."));
        return (byteArray[7] & 1) != 0;
    }
    double CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbDouble(uint8_t threadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= double : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_MsbDouble(threadId)."));
        return temp;
    }
    double CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbdouble(uint8_t threadId, const unsigned char* byteArray) {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= double : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbdouble(threadId)."));
        return temp;
    }
    uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbuint8_t(uint8_t threadId, const unsigned char* byteArray) {
        uint8_t temp;
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbByteArray_To_Msbuint8_t(threadId)."));
        return temp;
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msbdouble_To_MsbByteArray(uint8_t threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msbdouble_To_MsbByteArray(threadId)."));
        return buffer;
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbDouble_To_MsbByteArray(uint8_t threadId, double value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
        std::memcpy(buffer, &value, sizeof(double));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_MsbDouble_To_MsbByteArray(threadId)."));
        return buffer;
    }
    unsigned char* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msb_uint8_t_to_MsbByteArray(uint8_t threadId, uint8_t value) {
        unsigned char* buffer = nullptr;
        buffer = new unsigned char[1] { UCHAR_MAX };
        std::memcpy(buffer, &value, sizeof(uint8_t));
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= unsigned char* : pr_stat_APP_CONVERT_WriteEnableForThreadsAt_ServerOutputSend_Msb_uint8_t_to_MsbByteArray(threadId)."));
        return buffer;
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE = new std::array<bool, 2>();
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE  = {true, true};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT = new std::array<bool, 2>();
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT  = {true, true};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
        _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE = new std::array<bool, 2>();
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE = {true, true};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));

    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
        _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads = new uint8_t();
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads = UINT8_MAX;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(uint8_t threadId) {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE = {false, false};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT = {true, false};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
        *_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE = {true, true};
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
    }
    void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
        *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads = static_cast<uint8_t>(4);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered LIB :: CLIBWriteQueAtServerOutputSend : WriteEnableForThreadsAt_ServerOutputSend_Global : stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
    }
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE(threadId)."));
        return _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_IDLE;
    }
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT(threadId)."));
        return _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WAIT;
    }
    std::array<bool,2>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= std::array<bool,2>* : stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE(threadId)."));
        return _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend_2bitFLAG_WRITE;
    }
    uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend_Framework_Global::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(uint8_t threadId)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: <= uint8_t* : stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads(threadId)."));
        return _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend_number_Of_Implemented_Threads;
    }