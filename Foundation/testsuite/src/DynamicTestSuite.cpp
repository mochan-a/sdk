//
// DynamicTestSuite.cpp
//
// $Id: //poco/1.7/Foundation/testsuite/src/DynamicTestSuite.cpp#1 $
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "DynamicTestSuite.h"
#include "VarTest.h"


CppUnit::Test* DynamicTestSuite::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DynamicTestSuite");

	pSuite->addTest(VarTest::suite());

	return pSuite;
}
