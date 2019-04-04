#include "Renderable.hpp"

Renderable::Renderable() {
    
}

Renderable::Renderable(char renderChar) {
    this->renderChar = renderChar;
}

char Renderable::getRender() {
    return renderChar;	
}