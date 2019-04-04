#ifndef _RENDERABLE_HPP
#define _RENDERABLE_HPP

#include <vector>
#include <string>

class Renderable {
	protected:
		char renderChar;
	public:
		Renderable();
		Renderable(char renderChar) {
			this->renderChar = renderChar;
		}

		char getRender() {
			return renderChar;
		}
};

#endif