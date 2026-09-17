#ifndef CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Algorithms_H
#define CLIB_CLIB_ThreadLogs_CLIB_ThreadLogs_Framework_App_Algorithms_H
#include "CLIB_ThreadLogs_Framework_App_Data_Input.h"
#include "CLIB_ThreadLogs_Framework_App_Data_Output.h"
namespace CLIB_ThreadLogs
{
    class CLIB_ThreadLogs_Framework_App_Algorithms
    {
    public:
        CLIB_ThreadLogs_Framework_App_Algorithms();
        virtual ~CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_CLASS_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_CLASS_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_CLASS_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms();
        static void stat_REG_boot0_DECLAIRE_CLIB_ThreadLogs_Framework_App_Algorithms();
        void CLIB_ThreadLogs_dyn_FUNCT_add_a_b(CLIB_ThreadLogs_Framework_App_Data_Input* inputBUFFER, CLIB_ThreadLogs_Framework_App_Data_Output* outputBUFFER);
        void CLIB_ThreadLogs_dyn_FUNCT_subtract_a_b(CLIB_ThreadLogs_Framework_App_Data_Input* inputBUFFER, CLIB_ThreadLogs_Framework_App_Data_Output* outputBUFFER);
        void CLIB_ThreadLogs_dyn_FUNCT_multiply_a_b(CLIB_ThreadLogs_Framework_App_Data_Input* inputBUFFER, CLIB_ThreadLogs_Framework_App_Data_Output* outputBUFFER);
        void CLIB_ThreadLogs_dyn_FUNCT_divide_a_b(CLIB_ThreadLogs_Framework_App_Data_Input* inputBUFFER, CLIB_ThreadLogs_Framework_App_Data_Output* outputBUFFER);
        void dyn_REG_boot1_DEFINE_CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_REG_boot3_INITIALISE_CLIB_ThreadLogs_Framework_App_Algorithms();
        void dyn_REG_boot4_INSTANTIATE_CLIB_ThreadLogs_Framework_App_Algorithms();
    private:

    };
}
#endif