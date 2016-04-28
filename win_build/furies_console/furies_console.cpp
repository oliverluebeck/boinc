// furies_console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "boinc_api.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int exitCode = boinc_init();
	return 0;
}

