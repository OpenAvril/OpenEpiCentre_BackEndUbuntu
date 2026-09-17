#include "../../include/engine/CLIB_OpenEpiCentre_Execute_Control.h"
#include <iostream>
#include <thread>
	bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised;
	std::array<bool, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::array<std::thread*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::CLIB_OpenEpiCentre_Execute_Control()	{
		std::cout << "thread "  << threadId << " :: entered CONSTRUCTOR of CLIB_OpenEpiCentre_Execute_Control()." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control();
		std::cout << "thread "  << threadId << " :: exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Execute_Control()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::~CLIB_OpenEpiCentre_Execute_Control() {
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "thread "  << threadId << " :: entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
		stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads();
		std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "thread "  << threadId << " :: entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(obj);
		std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "thread "  << threadId << " :: entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
		stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(obj);
		std::cout << "thread "  << threadId << " :: a" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(obj);
		std::cout << "thread "  << threadId << " :: B" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(obj);
		std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		std::cout << "thread "  << threadId << " :: entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
		std::cout << "thread "  << threadId << " :: exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised() {
		return stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetThreadID)	{
		auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
		std::advance(temp, concurrnetThreadID);
		return *temp;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_set_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(bool state) {
		*stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised() = state;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetThreadID, bool state)	{
		stat_set_ptr_CLIB_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrnetThreadID, state);
	}

	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control() {
		std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;

		std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control() {
		std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;

		std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control()
	{
		std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;

		std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()
	{
		std::cout << "thread "  << threadId << " :: entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;

		std::cout << "thread "  << threadId << " :: exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control()
	{
		std::cout << "thread "  << threadId << " :: entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;

		std::cout << "thread "  << threadId << " :: exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Execute_Control()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads() {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = new bool();
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised = new std::array<bool, 3>();//todo number of concurrent threads.
		for (uint8_t threadId = 0; threadId < stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->size(); threadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads = new std::array<std::thread*, 3>;//todo number of concurrent threads.
		for (uint8_t threadId = 0; threadId < _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads->size(); threadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, threadId);
			*temp = nullptr;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj) {
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj)	{
		for (uint8_t threadId = 0; threadId < stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->size(); threadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads(class CLIB_OpenEpiCentre_Framework* obj) {
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads->size(); concurrentThreadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = new std::thread(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency, obj, concurrentThreadId);
		}
	}
	bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()
	{
		bool* result = nullptr;
		result = new bool(false);
		for (uint8_t threadID = 0; threadID < sizeof(*_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised); threadID++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadID);
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = result;
		return _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised;
	}
	std::array<bool, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_get_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised()
	{
		return _stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_REG_set_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised(bool newFLAG_)
	{
		*_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised = newFLAG_;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Execute_Control::stat_set_ptr_CLIB_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(uint8_t threadID, bool state) {
		_stat_REG_ptr_CLIB_OpenEpiCentre_Execute_Control_ListOf_FLAGisThreadInitialised->at(threadID) = state;
	}