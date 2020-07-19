//
//  Entity.cpp
//  engine
//
//  Created by Peter Jewicz on 7/18/20.
//  Copyright © 2020 Peter Jewicz. All rights reserved.
//

#include "Entity.hpp"

Entity::Entity(EntityManager& manager): manager(manager) {
  this->isActive = true;
}

Entity::Entity(EntityManager& manager, std::string name): manager(manager), name(name) {
  this->isActive = true;
}

void Entity::Update(float deltaTime) {
  for (auto& component: components) {
    component->Update(deltaTime);
  }
}

void Entity::Render() {
  for (auto& component: components) {
    component->Render();
  }
}

void Entity::Destroy() {
  this->isActive = false;
}

bool Entity::IsActive() const {
  return this->isActive;
}

