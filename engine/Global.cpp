
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
        stat_CLASS_boot0_DECLAIRE_Global();
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot3_INITIALISE_Global();
        stat_REG_boot0_DECLAIRE_Global();
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
    void CLIBOpenEpiCentre::Global::stat_CLASS_boot0_DECLAIRE_Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLAIRE_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Global()" << std::endl;
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
    void CLIBOpenEpiCentre::Global::stat_REG_boot0_DECLAIRE_Global()
    {
        std::cout << "entered stat_REG_boot0_DECLAIRE_Global()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLAIRE_Global()" << std::endl;
    }
    unsigned char* stat_CONVERT_MsbBoolean_To_MsbByteArray(boolean bool)
    {
        if (value != null) {
            byte[] byteArray = new byte[1];
            byteArray[0] = static_cast<unsigned char*>(&myBool);
            for(int index = 1; index < 3; index++) {
                byteArray{index} = 0;
            }
            return byteArray;
        }
    }
    bool stat_CONVERT_MsbByteArray_To_MsbBoolean(unsigned char* bytesBool)
    {
        if (byteArray.length != 1) {
            throw new IllegalArgumentException("Byte array must have exactly 1 byte.%n");
        }
        return static_cast<bool>(ptr[0]);
    }
    double stat_CONVERT_MsbByteArray_To_MsbDouble(unsigned char* byteArray)
    {
        if (byteArray.length != 8) {
            throw new IllegalArgumentException("Byte array must have exactly 8 bytes.%n");
        }
        unsigned char buffer[8];
        std::memcpy(&byteArray, buffer, 8);
        return buffer;
    }
    float stat_CONVERT_MsbByteArray_To_MsbFloat(unsigned char* byteArray)
    {
        if (byteArray.length != 4) {
            throw new IllegalArgumentException("Byte array must have exactly 4 bytes.%n");
        }
        unsigned char buffer[4];
        std::memcpy(&byteArray, buffer, 4);
        return buffer;
    }
    uint8_t stat_CONVERT_MsbByteArray_To_MsbInt(unsigned char* byteArray)
    {
        if (byteArray.length != 4) {
            throw new IllegalArgumentException("Byte array must have exactly 4 bytes.%n");
        }
        unsigned char buffer[4];
        std::memcpy(&byteArray, buffer, 4);
        return buffer;
    }
    unsigned char* stat_CONVERT_MsbInt_To_MsbByteArray(uint8_t value)
    {
        if (value != null) {
            throw new IllegalArgumentException("Byte array must not be null.%n");
        }
        return reinterpret_cast<unsigned char*>(&value);
    }
    yte[] stat_CONVERT_MsbFloat_To_MsbByteArray(float value)
    {
        if (value != null) {
            throw new IllegalArgumentException("Byte array must not be null.%n");
        }
        return reinterpret_cast<unsigned char*>(&value);
    }
    unsigned char* stat_CONVERT_MsbDouble_To_MsbByteArray(double value)
    {
        if (value != null) {
            throw new IllegalArgumentException("Byte array must not be null.%n");
        }
        return reinterpret_cast<unsigned char*>(&value);
    }
    CLIBOpenEpiCentre::Framework_Server* void* obj)
    {
        return reinterpret_cast<CLIBOpenEpiCentre::Framework_Server*>(obj);
    }
// private.
    void CLIBOpenEpiCentre::Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = NULL;
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = NULL;
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t();
        *_stat_REG_ptr_number_Of_Implemented_Cores = uint8_t(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = new uint8_t();
        *_stat_REG__ptr_number_Of_Praise_Events = uint8_t(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores()
    {
        *_stat_REG_ptr_number_Of_Implemented_Cores = uint8_t(4);
    }
    void CLIBOpenEpiCentre::Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events()
    {
        *_stat_REG__ptr_number_Of_Praise_Events = uint8_t(1);
    }
    uint8_t* CLIBOpenEpiCentre::Global::stat_REG_get_Ptr_number_Of_Implemented_Cores()
    {
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    uint8_t* CLIBOpenEpiCentre::Global::stat_REG_get_Ptr_number_Of_Praise_Events()
    {
        return _stat_REG__ptr_number_Of_Praise_Events;
    }