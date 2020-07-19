//
//  main.cpp
//  engine
//
//  Created by Peter Jewicz on 7/15/20.
//  Copyright © 2020 Peter Jewicz. All rights reserved.
//
#include <SDL2/SDL.h>
#include "./Constants.h"
#include "./Game.h"

#include <iostream>

int main() {
  Game *game = new Game();
  
  game->Initialize(WIDTH, HEIGHT);
  
  while (game->IsRunning()) {
    game->ProcessInput();
    game->Update();
    game->Render();
    
  }
  
  game->Destroy();
  
  return 0;
  
//
// if (SDL_Init( SDL_INIT_EVERYTHING) < 0) {
//      std::cout << "SDL ERROR";
//  }
//
//  SDL_Window *window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
//
//  SDL_Event windowEvent;
//
//  while (true) {
//      if (SDL_PollEvent(&windowEvent)){
//          if(SDL_QUIT == windowEvent.type){
//              break;
//          }
//      }
//  }
//
//  SDL_DestroyWindow(window);
//  SDL_Quit();
}
