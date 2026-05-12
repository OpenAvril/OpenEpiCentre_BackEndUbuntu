#include "engine/Global.h"
#include <cstdint>
#include <cstring>
#include <iostream>
enum Axis
    { 
        X,
        Y, 
        Z 
    };
    enum Praise
    {
        ADDER
    };
    uint8_t* CLIBOpenEpiCentre::Global::_stat_REG_ptr_number_Of_Implemented_Cores;
    uint8_t* CLIBOpenEpiCentre::Global::_stat_REG__ptr_number_Of_Praise_Events;
// public.
    CLIBOpenEpiCentre::Global::Global()
    {
        std::cout << "entered CONSTRUCTOR of Global()." << std::endl;
        stat_CLASS_boot0_DECLARE_Global();
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot3_INITIALISE_Global();
        stat_REG_boot0_DECLARE_Global();
        std::cout << "exiting CONSTRUCTOR of Global()." << std::endl;
    }
    CLIBOpenEpiCentre::Global::~Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG__ptr_number_Of_Praise_Events;
    }
    void CLIBOpenEpiCentre::Global::dyn_REG_boot1_DEFINE_Global()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_Global()" << std::endl;
        stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot1_DEFINE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::dyn_REG_boot2_SUBSTANTIATE_Global()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::dyn_REG_boot3_INITIALISE_Global()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_GlobalGlobal()" << std::endl;
        stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::dyn_REG_boot4_INSTANTIATE_Global()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_Global()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Global()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::Global::dyn_REG_get_Item_number_Of_Implemented_Cores()
    {
        return *stat_REG_get_Ptr_number_Of_Implemented_Cores();
    }
    uint8_t CLIBOpenEpiCentre::Global::dyn_REG_get_Item_number_Of_Praise_Events()
    {
        return *stat_REG_get_Ptr_number_Of_Praise_Events();
    }
    void CLIBOpenEpiCentre::Global::stat_CLASS_boot0_DECLARE_Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::stat_CLASS_boot1_DEFINE_Global()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::stat_CLASS_boot3_INITIALISE_Global()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::stat_CLASS_boot4_INSTANTIATE_Global()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot0_DECLARE_Global()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_Global()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_Global()" << std::endl;
    }
    int CLIBOpenEpiCentre::Global::stat_CONVERT_Bool_To_Int(bool value)
    {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        return *temp;
        delete temp;
    }

    unsigned char* CLIBOpenEpiCentre::Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(bool value)
    {
        return 0;
    }
    bool CLIBOpenEpiCentre::Global::stat_CONVERT_MsbByteArray_To_MsbBoolean(unsigned char* byteArray)
    {
        return 0;
    }
    double CLIBOpenEpiCentre::Global::stat_CONVERT_MsbByteArray_To_MsbDouble(unsigned char* byteArray)
    {
        return 0;
    }
    float CLIBOpenEpiCentre::Global::stat_CONVERT_MsbByteArray_To_MsbFloat(unsigned char* byteArray)
    {
        return 0;
    }
    uint8_t CLIBOpenEpiCentre::Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(unsigned char* byteArray)
    {
        return 0;
    }
    unsigned char* CLIBOpenEpiCentre::Global::stat_CONVERT_MsbInt_To_MsbByteArray(uint8_t value)
    {
        return 0;
    }
    unsigned char* CLIBOpenEpiCentre::Global::stat_CONVERT_MsbFloat_To_MsbByteArray(float value)
    {
        return 0;
    }
    unsigned char* CLIBOpenEpiCentre::Global::stat_CONVERT_MsbDouble_To_MsbByteArray(double value)
    {
        return 0;
    }
    unsigned char* CLIBOpenEpiCentre::Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t value)
    {
        return 0;
    }
// private.
    void CLIBOpenEpiCentre::Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = nullptr;
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = nullptr;
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t();
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = new uint8_t();
        *_stat_REG__ptr_number_Of_Praise_Events = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores()
    {
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(4);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events()
    {
        *_stat_REG__ptr_number_Of_Praise_Events = static_cast<uint8_t>(1);
    }
    uint8_t* CLIBOpenEpiCentre::Global::stat_REG_get_Ptr_number_Of_Implemented_Cores()
    {
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    uint8_t* CLIBOpenEpiCentre::Global::stat_REG_get_Ptr_number_Of_Praise_Events()
    {
        return _stat_REG__ptr_number_Of_Praise_Events;
    }