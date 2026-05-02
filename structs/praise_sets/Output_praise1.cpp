
#include "Output_praise1.h"
double* CLIBOpenEpiCentre::Output_praise1::_REG_ptr_output_praise1_Value = NULL;
// public.
void CLIBOpenEpiCentre::Output_praise1::dyn_REG_boot1_DEFINE_Output_praise1()
{
	std::cout << "entered dyn_REG_boot1_DEFINE_Output_praise1()" << std::endl;
	stat_REG_boot1_DEFINE_output_Value();
	std::cout << "exiting dyn_REG_boot1_DEFINE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::dyn_REG_boot2_SUBSTANTIATE_Output_praise1()
{
	std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_Output_praise1()" << std::endl;
	stat_REG_boot2_SUBSTANTIATE_output_Value();
	std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::dyn_REG_boot3_INITIALISE_Output_praise1()
{
	std::cout << "entered dyn_REG_boot3_INITIALISE_Output_praise1()" << std::endl;
	stat_REG_boot3_INITIALISE_output_Value();
	std::cout << "exiting dyn_REG_boot3_INITIALISE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::dyn_REG_boot4_INSTANTIATE_Output_praise1()
{
	std::cout << "entered dyn_REG_boot4_INSTANTIATE_Output_praise1()" << std::endl;

	std::cout << "exiting dyn_REG_boot4_INSTANTIATE_Output_praise1()" << std::endl;
}
double CLIBOpenEpiCentre::Output_praise1::dyn_REG_get_output_Value()
{
	return *stat_REG_get_ptr_output_Value();
}
void CLIBOpenEpiCentre::Output_praise1::dyn_REG_set_output_Value(double newValue)
{
	stat_REG_set_Item_output_Value(newValue);
}
void CLIBOpenEpiCentre::Output_praise1::stat_CLASS_boot0_DECLAIRE_Output_praise1()
{
	std::cout << "entered stat_CLASS_boot0_DECLAIRE_Output_praise1()" << std::endl;

	std::cout << "exiting stat_CLASS_boot0_DECLAIRE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::stat_CLASS_boot1_DEFINE_Output_praise1()
{
	std::cout << "entered stat_CLASS_boot1_DEFINE_Output_praise1()" << std::endl;

	std::cout << "exiting stat_CLASS_boot1_DEFINE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::stat_CLASS_boot3_INITIALISE_Output_praise1()
{
	std::cout << "entered stat_CLASS_boot3_INITIALISE_Output_praise1()" << std::endl;

	std::cout << "exiting stat_CLASS_boot3_INITIALISE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::stat_CLASS_boot4_INSTANTIATE_Output_praise1()
{
	std::cout << "entered stat_CLASS_boot4_INSTANTIATE_Output_praise1()" << std::endl;

	std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_Output_praise1()" << std::endl;
}
void CLIBOpenEpiCentre::Output_praise1::stat_REG_boot0_DECLAIRE_Output_praise1()
{
	std::cout << "entered stat_REG_boot0_DECLAIRE_Output_praise1()" << std::endl;

	std::cout << "exiting stat_REG_boot0_DECLAIRE_Output_praise1()" << std::endl;
}
// private.
void CLIBOpenEpiCentre::Output_praise1::stat_REG_boot1_DEFINE_output_Value()
{
	_REG_ptr_output_praise1_Value = NULL;
}
void CLIBOpenEpiCentre::Output_praise1::stat_REG_boot2_SUBSTANTIATE_output_Value()
{
	_REG_ptr_output_praise1_Value = new double();
	*_REG_ptr_output_praise1_Value = (double)(DBL_MAX);
}
void CLIBOpenEpiCentre::Output_praise1::stat_REG_boot3_INITIALISE_output_Value()
{
	*_REG_ptr_output_praise1_Value = (double)(0.0);
}
double* CLIBOpenEpiCentre::Output_praise1::stat_REG_get_ptr_output_Value()
{
	return _REG_ptr_output_praise1_Value;
}
void CLIBOpenEpiCentre::Output_praise1::stat_REG_set_Item_output_Value(double newValue)
{
	*_REG_ptr_output_praise1_Value = newValue;
}