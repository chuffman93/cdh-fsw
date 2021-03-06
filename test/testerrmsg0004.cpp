/* testerrmsg0004.cpp
 * Created on: Jul 8, 2014
 *    Author: fsw
 *  \brief Test 4 of the ErrorMessage Class.
 *
 *  This test verifies that constructor with a MessageCodeType, and VariableTypeError list
 *  parameter correctly sets the opcode and data to the parameters' values.
 */
#include <iostream>
#include "POSIX.h"
#include "gtest/gtest.h"
#include "core/ErrorMessage.h"

using namespace std;
using namespace rel_ops;
using namespace AllStar::Core;

#define TEST_OPCODE ((MessageCodeType)34)
#define TEST_VALUE1 ((double)39.7)
#define TEST_VALUE2 false

TEST(TestErrMsg	, Constructor_MCT_VTEL)
{
	VariableTypeData v1(TEST_VALUE1);
	VariableTypeData v2(TEST_VALUE2);

	list<VariableTypeData *> l1;

	l1.push_back(&v1);
	l1.push_back(&v2);

	ErrorMessage c1(TEST_OPCODE, l1);
	ErrorMessage c2(TEST_OPCODE, l1);

	ASSERT_TRUE(c1.GetOpcode() == TEST_OPCODE);

	ASSERT_TRUE(c1.ParametersEqual(c2) == true);

}
