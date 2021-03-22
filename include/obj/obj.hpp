#pragma once

class Obj {
public:
	virtual int Initialize(void) = 0;
	virtual int Update(void) = 0;
	virtual int Render(void) = 0;
	virtual int Terminate(void) = 0;
};