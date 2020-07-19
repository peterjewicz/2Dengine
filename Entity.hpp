#ifndef Entity_hpp
#define Entity_hpp

#include <vector>
#include <string>
#include "./EntityManager.hpp"
#include "./Component.hpp"

class Component;
class EntityManager;

class Entity {
  private:
    EntityManager& manager;
    bool isActive;
    std::vector<Component*> components;
  
  
  public:
  std::string name;
  Entity(EntityManager& manager);
  Entity(EntityManager& manager, std::string name);
  void Update(float deltaTime);
  void Render();
  void Destroy();
  bool IsActive() const;
  
  
  template <typename T, typename... TArgs>
  T& AddComponent(TArgs&&... args) {
    T* newComponent(new T(std::forward<TArgs>(args)...));
    
    newComponent->owner = this;
    components.emplace_back(newComponent);
    newComponent->Initialize();
    return *newComponent;
  }
};


#endif /* Entity_hpp */