#ifndef PARTICLE_SIMULATOR_ATTRACTORBODY_H
#define PARTICLE_SIMULATOR_ATTRACTORBODY_H

#include <SFML/Graphics.hpp>

class AttractorBody {

public:
    float mass;
    sf::Vector2f center;
    sf::CircleShape shape;

    AttractorBody(float mass, float radius, sf::Vector2f pos);

    void moveCenter(sf::Vector2f delta);

};


#endif //PARTICLE_SIMULATOR_ATTRACTORBODY_H
