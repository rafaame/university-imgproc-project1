#ifndef __OPERATION_H__
#define __OPERATION_H__

#include "common.h"

using namespace std;

class Image;

enum Operation_t
{

	OPERATION_NONE,
	OPERATION_SUM,
	OPERATION_SUBTRACT,
	OPERATION_CONTRAST_STRETCH,
    OPERATION_LOW_PASS_FILTER,
	OPERATION_LAST

};

class Operation
{

private:

	Operation_t type;
	string filename;

public:

	Operation(Operation_t type, string filename)
	{

		this->type = type;
		this->filename = filename;

	}

	Operation(Operation_t type, char *filename)
	{

		this->type = type;
		this->filename = string(filename);

	}

	Operation(Operation_t type)
	{

		this->type = type;

	}

	const Operation_t getType()
	{

		return type;

	}

	const string getFilename()
	{

		return filename;

	}

	Image *execute(Image *leftOperand = NULL);

};

#endif