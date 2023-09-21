#include <tl/expected.hpp>

// This is a dummy test project. The actual library tests are located in the `tl-expected-tests` folder
int main ()
{
	return tl::expected<int, int>(0).value_or(-1);
}
