

#ifndef Component_hpp
#define Component_hpp

class Entity;

class Component {
  public:
    Entity* owner;
    virtual ~Component() {}
    virtual void Initialize() {}
    virtual void Update(float deltaTime) {}
    virtual void Render() {}
  
};

#endif /* Component_hpp */
