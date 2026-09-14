#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include <iostream>
#include <thread>
	bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised;
	std::array<bool, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised;//NUMBER OF THREADS.
	std::array<std::thread*, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::CLIB_OpenEpiCentre__Execute__Control()	{
		std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre__Execute__Control()." << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
		std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre__Execute__Control()." << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::~CLIB_OpenEpiCentre__Execute__Control() {
		delete _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised;
		delete _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised();
		stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads();
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised(obj);
		stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(obj);
		std::cout << "a" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised(obj);
		std::cout << "B" << std::endl;
		stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
		std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_get_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised() {
		return stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised();
	}
	bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_get_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetThreadID)	{
		auto temp = stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->begin();
		std::advance(temp, concurrnetThreadID);
		return *temp;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_set_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(bool state) {
		*stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised() = state;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::dyn_REG_set_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(uint8_t concurrnetThreadID, bool state)	{
		stat_set_ptr_CLIB_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(concurrnetThreadID, state);
	}

	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control() {
		std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control() {
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control()" << std::endl;
	}
// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot1_DEFINE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised() {
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads() {
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot2_SUBSTANTIATE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = new bool();
		*_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)
	{
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised = new std::array<bool, 3>();//todo number of concurrent threads.
		for (uint8_t threadId = 0; threadId < stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->size(); threadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads = new std::array<std::thread*, 3>;//todo number of concurrent threads.
		for (uint8_t threadId = 0; threadId < _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads->size(); threadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads->begin();
			std::advance(temp, threadId);
			*temp = nullptr;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot3_INITIALISE_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj) {
		*_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = true;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised(CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* obj)	{
		for (uint8_t threadId = 0; threadId < stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->size(); threadId++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadId);
			*temp = true;
		}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads(class CLIB_OpenEpiCentre__Framework* obj) {
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads->size(); concurrentThreadId++) {
			auto temp = _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_Threads->begin();
			std::advance(temp, concurrentThreadId);
			*temp = new std::thread(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent::stat_app_thread_Concurrency, obj, concurrentThreadId);
		}
	}
	bool* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_get_ptr_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised()
	{
		bool* result = nullptr;
		result = new bool(false);
		for (uint8_t threadID = 0; threadID < sizeof(*_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised); threadID++) {
			auto temp = stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()->begin();
			std::advance(temp, threadID);
			if (*temp == true) {
				*result = true;
				break;
			}
		}
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = result;
		return _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised;
	}
	std::array<bool, 3>* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_get_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised()
	{
		return _stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_REG_set_FLAG_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised(bool newFLAG_)
	{
		*_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__isSystemInitialised = newFLAG_;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Execute__Control::stat_set_ptr_CLIB_OpenEpiCentre__Execute__Control__ItemOnListOf_FLAGisThreadInitialised(uint8_t threadID, bool state) {
		_stat_REG_ptr_CLIB_OpenEpiCentre__Execute__Control__ListOf_FLAGisThreadInitialised->at(threadID) = state;
	}