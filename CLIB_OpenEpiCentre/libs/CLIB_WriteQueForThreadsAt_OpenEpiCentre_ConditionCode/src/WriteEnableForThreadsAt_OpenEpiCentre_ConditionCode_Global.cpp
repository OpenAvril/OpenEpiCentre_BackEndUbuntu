#include "../include/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE;
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT;
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE;
uint8_t* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::_stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads;
CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{

}
CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::~WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE;
    delete _stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{
    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{
    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE();
    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{
    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads();
    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()." << std::endl;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()
{
    std::cout << "thread "  << threadId << " :: entered dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()" << std::endl;
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads();
    std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global()" << std::endl;
}
std::array<bool,2> CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE();
}
std::array<bool,2> CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT();
}
std::array<bool,2> CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE();
}
uint8_t CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::dyn_REG_get_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads()
{
    return *stat_REG_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads();
}
int CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Bool_To_Int(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Bool_To_Int(value);
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msbdouble_To_MsbByteArray(double value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msbdouble_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbDouble_To_MsbByteArray(double value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbDouble_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msb_uint8_t_to_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbBoolean_To_MsbByteArray(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbBoolean_To_MsbByteArray(value);
}
bool CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbBoolean(byteArray);
}
double CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbDouble(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbDouble(byteArray);
}
double CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbdouble(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbdouble(byteArray);
}
uint8_t CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbuint8_t(byteArray);
}
int CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Bool_To_Int(bool value) {
    int* temp = nullptr;
    *temp = 2;
    if (value) {
        *temp = 1;;
    }
    if (!value) {
        *temp = 0;
    }
    return *temp;
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbBoolean_To_MsbByteArray(bool value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1];
    for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
        buffer[bitIndex] = static_cast<unsigned char>(value);
    }
    return buffer;
}
bool CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray) {
    return (byteArray[7] & 1) != 0;
}
double CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_MsbDouble(const unsigned char* byteArray) {
    double temp;
    std::memcpy(&temp, byteArray, sizeof(double));
    return temp;
}
double CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbdouble(const unsigned char* byteArray) {
    double temp;
    std::memcpy(&temp, byteArray, sizeof(double));
    return temp;
}
uint8_t CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray) {
    uint8_t temp;
    std::memcpy(&temp, byteArray, sizeof(uint8_t));
    return temp;
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msbdouble_To_MsbByteArray(double value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(double));
    return buffer;
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_MsbDouble_To_MsbByteArray(double value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(double));
    return buffer;
}
unsigned char* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1] { UCHAR_MAX };
    std::memcpy(buffer, &value, sizeof(uint8_t));
    return buffer;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE = nullptr;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT = nullptr;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE = nullptr;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads = nullptr;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE  = {true, true};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT  = {true, true};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads = new uint8_t();
    *_stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads = UINT8_MAX;
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE() {
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE = {false, false};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT = {true, false};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads()
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads = static_cast<uint8_t>(4);
}
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_IDLE;
}
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WAIT;
}
std::array<bool,2>* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_2bitFLAG_WRITE;
}
uint8_t* CLIBWriteQueAtOpenEpiCentre_ConditionCode::WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Global::stat_REG_get_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads()
{
    return _stat_REG_ptr_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_number_Of_Implemented_Threads;
}