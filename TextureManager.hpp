#ifndef TextureManager_hpp
#define TextureManager_hpp

#include "./Game.h"

class TextureManager {
  public:
    static SDL_Texture* LoadTexture(const char* fileName);
    static void Draw(SDL_Texture* texture, SDL_Rect sourceRectangle, SDL_Rect destinationRectangle, SDL_RendererFlip flip);
};

#endif /* TextureManager_hpp */
