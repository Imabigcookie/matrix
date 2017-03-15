#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	Matrix matr;
	REQUIRE(matr.rows() == 0);
	REQUIRE(matr.columns() == 0);
}

SCENARIO("with params", "[init]")
{
	int init = 10;
	Matrix temp(init, init);
	REQUIRE(temp.rows() == 10);
	REQUIRE(temp.columns() == 10);
}

SCENARIO("copy", "[init]")
{
	int init = 10;
	Matrix temp(init, init);
	Matrix copy(temp);
	REQUIRE(copy.rows() == 10);
	REQUIRE(copy.columns() == 10);
}
