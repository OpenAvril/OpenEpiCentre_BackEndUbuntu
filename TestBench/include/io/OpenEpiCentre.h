#ifndef TESTBENCH_OPENEPICENTRE_H
#define TESTBENCH_OPENEPICENTRE_H
namespace TestBench_Cpp_OpenEpiCentre
{
    class OpenEpiCentre {
// public.
    public:
        OpenEpiCentre();
        virtual ~OpenEpiCentre();
        void app_FUNCT_flip_Input_DoubleBuffer();
        void* app_FUNCT_generate_Program();
        bool app_FUNCT_get_flag_isPGM_INSTNATIATED() ;
        void app_FUNCT_select_set_Intput_Subset(int praiseId);
        void app_FUNCT_terminate_Program();
        void app_FUNCT_pop_From_Stack_Of_Output();
        void app_FUNCT_push_To_STACK_Of_Input();
        void* dyn_PGM_get_program_WriteEnableStack_ServerInputAction();
        void* dyn_PGM_get_program_WriteEnableStack_ServerOutputRecieve();
        bool dyn_REG_get_flag_isStackLoaded_Server_InputAction();
        bool dyn_REG_get_flag_isStackLoaded_Server_OutputSend();
        bool dyn_REG_get_flag_IsInitialised_OpenAvrilConcurrency();
        double io_PRAISE_get_Item_Output_praise0_Value();
        double io_PRAISE_get_Item_Output_praise1_Value();
        double io_PRAISE_get_Item_Output_praise2_Value();
        double io_PRAISE_get_Item_Output_praise3_Value();
        int io_PRAISE_get_MetaData_PraiseEventId();
        void io_PRAISE_set_Item_Input_praise0_Value_A(float inputValueA);
        void io_PRAISE_set_Item_Input_praise0_Value_B(float inputValueB);
        void io_PRAISE_set_Item_Input_praise1_Value_A(float inputValueA);
        void io_PRAISE_set_Item_Input_praise1_Value_B(float inputValueB);
        void io_PRAISE_set_Item_Input_praise2_Value_A(float inputValueA);
        void io_PRAISE_set_Item_Input_praise2_Value_B(float inputValueB);
        void io_PRAISE_set_Item_Input_praise3_Value_A(float inputValueA);
        void io_PRAISE_set_Item_Input_praise3_Value_B(float inputValueB);
        void io_PRAISE_set_MetaData_PraiseEventId(int praiseId);
    };
}
#endif //TESTBENCH_OPENEPICENTRE_H