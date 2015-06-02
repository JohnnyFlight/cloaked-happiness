#pragma once

#include <vector>

class PascalTriangle
{
public:
	PascalTriangle();
	PascalTriangle(unsigned depth);

	long long unsigned getValue(unsigned x, unsigned y);
	inline unsigned depth() { return _depth; }
	void addRow();
protected:
	std::vector<std::vector<long long unsigned> > _values;
	unsigned _depth;

private:

};