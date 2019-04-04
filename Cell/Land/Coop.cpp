#include "Coop.hpp"

//ctor

Coop::Coop(bool occupied): Land('o',5) {
    this->occupied = occupied;
}