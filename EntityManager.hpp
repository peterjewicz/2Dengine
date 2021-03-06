#ifndef EntityManager_hpp
#define EntityManager_hpp

#include "./Entity.hpp"
#include "./Component.hpp"
#include <vector>

class EntityManager {
  private:
    std::vector<Entity*> entities;
  
  public:
    void ClearData();
    void Update(float deltaTime);
    void Render();
    bool HasNoEntities();
    Entity& AddEntity(std::string entityName);
    std::vector<Entity*> GetEntities() const;
    unsigned int GetEntityCount();
};


#endif /* EntityManager_hpp */
