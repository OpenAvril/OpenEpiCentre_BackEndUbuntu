#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_CONTROL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_DATA_CONTROL_H
#include "../engine/CLIB_OpenEpiCentre_Framework.h"
#include <cstddef>
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre_Data_Control
    {
    public:
        CLIB_OpenEpiCentre_Data_Control();
        virtual ~CLIB_OpenEpiCentre_Data_Control();
        void app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Input_DoubleBuffer(class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_flip_CLIB_OpenEpiCentre_Data_Control_REG_Output_DoubleBuffer(class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(class CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentThreadId);
        void app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(class CLIB_OpenEpiCentre_Framework* obj);
        void app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(class CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentThreadId);
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Data_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control(class CLIB_OpenEpiCentre_Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control(class CLIB_OpenEpiCentre_Framework* obj);
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction();
        bool dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend();
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfInput();
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfInput();
        bool dyn_REG_get_ItemSideToREAD_For_doubleBufferOfOutput();
        bool dyn_REG_get_ItemSideToWRITE_For_doubleBufferOfOutput();
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_InputAction(bool value);
        void dyn_REG_set_ptr_FLAG_isLoaded_Stack_OutputSend(bool value);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Data_Control();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Data_Control();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Data_Control();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Data_Control();
    private:
        static bool* _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_InputAction;
        static bool* _stat_REG_ptr_FLAG_CLIB_OpenEpiCentre_Data_Control_isLoaded_Stack_OutputSend;
        static bool* _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfInput;
        static bool* _stat_REG_ptr_CLIB_OpenEpiCentre_Data_Control_ItemSideToWRITE_For_doubleBufferOfOutput;
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_InputAction();
        static void stat_REG_boot1_DEFINE_FLAG_isLoaded_Stack_OutputSend();
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfInput();
        static void stat_REG_boot1_DEFINE_ItemSideToWRITE_For_doubleBufferOfOutput();
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_InputAction();
        static void stat_REG_boot2_SUBSTANTIATE_FLAG_isLoaded_Stack_OutputSend();
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfInput();
        static void stat_REG_boot2_SUBSTANTIATE_ItemSideToWRITE_For_doubleBufferOfOutput();
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_InputAction();
        static void stat_REG_boot3_INITIALISE_FLAG_isLoaded_Stack_OutputSend();
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfInput();
        static void stat_REG_boot3_INITIALISE_ItemSideToWRITE_For_doubleBufferOfOutput();
        static bool* stat_REG_get_ptr_FLAG_isLoaded_Stack_InputAction();
        static bool* stat_REG_get_ptr_FLAG_isLoaded_Stack_OutputSend();
        static bool* stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfInput();
        static bool* stat_REG_get_ptr_ItemSideToWRITE_For_doubleBufferOfOutput();
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_InputAction(bool new_Bool);
        static void stat_REG_set_Item_FLAG_isLoaded_Stack_OutputSend(bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfInput(bool new_Bool);
        static void stat_REG_set_Item_ItemSideToWRITE_For_doubleBufferOfOutput(bool new_Bool);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre_Data_Control_H
