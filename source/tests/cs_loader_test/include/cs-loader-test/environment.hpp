/*
 *	MetaCall Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A library for dynamic loading and linking shared objects at run-time.
 *
 */

#include <gmock/gmock.h>

#include <loader/loader.h>

class environment : public  testing::Environment
{
protected:
	loader_naming_name name = "hello.cs";

public:
	void SetUp();

	void TearDown();
};