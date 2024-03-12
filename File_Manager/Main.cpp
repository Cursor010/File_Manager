#include "Main.h"

//------------------------------------------------------------------------------------------------------------
int main(void)
{
	auto Commander = std::make_unique<AsCommander>();

	if (!Commander->Init())
		return -1;

	Commander->run();

	return 0;
}
//------------------------------------------------------------------------------------------------------------
