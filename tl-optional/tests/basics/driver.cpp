#include <tl/optional.hpp>

// This is a dummy test project. The actual library tests are located in the `tl-optional-tests` folder
int main() 
{
	return tl::optional<int>(0).value_or(-1);
}
