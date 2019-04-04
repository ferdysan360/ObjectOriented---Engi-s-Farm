#ifndef _RENDERABLE_HPP
#define _RENDERABLE_HPP

#include <vector>
#include <string>

class Renderable {
	protected:
		char renderChar;
	public:
		Renderable();

		Renderable(char renderChar);

		char getRender();
};

#endif