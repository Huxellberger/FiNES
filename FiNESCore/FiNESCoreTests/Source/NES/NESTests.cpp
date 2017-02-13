#include "pch.h"
#include "CppUnitTest.h"

#include <FiNESCore/Source/NES/NES.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FiNESCoreNESTests
{
	TEST_CLASS( NESTestFixture )
	{
	public:
		TEST_METHOD( GivenNES_WhenCreated_ActiveSetToTrue )
		{
			NES testNes = NES();

			Assert::IsTrue( testNes.active );
		}
	};
}