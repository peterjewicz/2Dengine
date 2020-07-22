#ifndef AssetManager_hpp
#define AssetManager_hpp

#include <map>
#include <string>
#include "./TextureManager.hpp"
#include "./EntityManager.cpp"

class AssetManager {
  private:
    EntityManager* manager;
    std::map<std::string, SDL_Texture*> textures;
  public:
    AssetManager(EntityManager*manager);
    ~AssetManager();
    void ClearData();
    void AddTexture(std::string textureId, const char* filePath);
    SDL_Texture* GetTexture(std::string textureId);
};


#endif /* AssetManager_hpp */
