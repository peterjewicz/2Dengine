#ifndef Game_h
#define Game_h

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "./Entity.hpp"
#include "./Component.hpp"
#include "./EntityManager.hpp"

class Game {
  private:
    bool isRunning;
    SDL_Window *window;
  
  public:
    Game();
    ~Game();
    static SDL_Renderer *renderer;
    void LoadLevel(int levelNumber);
    int ticksLastFrame;
    bool IsRunning() const;
    void Initialize(int width, int height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
    
  
};

#endif /* Game_h */
