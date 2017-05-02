#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("def constructor")
{
	Matrix matrix;
	REQUIRE(matrix.Strings_() == 0);
	REQUIRE(matrix.Columns_() == 0);
}

SCENARIO("param constructor") 
{
	Matrix matrix(3, 3);
	REQUIRE(matrix.Strings_() == 3);
	REQUIRE(matrix.Columns_() == 3);
}

SCENARIO("copy constructor") 
{
	Matrix matrix (3, 3);	
	Matrix copy(matrix);	
	REQUIRE(copy.Strings_() == 3);
	REQUIRE(copy.Columns_() == 3);
}


SCENARIO("operator +") 
{
	Matrix matrix1 (3, 3);
	Matrix matrix2 (3, 3);
	Matrix matrix3 (3, 3);	
	std::ifstream("1.txt") >> matrix1;
	std::ifstream("2.txt") >> matrix2;
	std::ifstream("sum.txt") >> matrix3;
	REQUIRE(matrix1 + matrix2 == matrix3);
}

SCENARIO("operator *") 
{
	Matrix matrix1 (3, 3);
	Matrix matrix2 (3, 3);
	Matrix matrix3 (3, 3);	
	std::ifstream("1.txt") >> matrix1;
	std::ifstream("2.txt") >> matrix2;
	std::ifstream("mult.txt") >> matrix3;
	REQUIRE(matrix1 * matrix2 == matrix3);
}
SCENARIO("operator =") 
{
	Matrix matrix1(3, 3);
	Matrix matrix2 = matrix1;
	REQUIRE(matrix1 == matrix2);
}
SCENARIO("operator ==")
{
	Matrix matrix1(3, 3);
	Matrix matrix2(3, 3);
	REQUIRE(matrix1 == matrix2);
}
