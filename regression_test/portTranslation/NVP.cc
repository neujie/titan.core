// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R2A
// for ebensza (ebensza@ebensza) on Fri Aug 11 13:51:04 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "NVP.hh"

namespace PortVariablesInternal {

NVP::NVP(const char *par_port_name)
	: NVP_BASE(par_port_name)
{

}

NVP::~NVP()
{

}

void NVP::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void NVP::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void NVP::Handle_Fd_Event_Error(int /*fd*/)
{

}

void NVP::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void NVP::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void NVP::Handle_Timeout(double time_since_last_call) {}*/

void NVP::user_map(const char * /*system_port*/)
{

}

void NVP::user_unmap(const char * /*system_port*/)
{

}

void NVP::user_start()
{

}

void NVP::user_stop()
{

}

void NVP::outgoing_send(const CHARSTRING& /*send_par*/)
{

}

} /* end of namespace */

