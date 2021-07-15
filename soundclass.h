#pragma once
#include <SDL2/SDL_mixer.h>
#include <vector>

class soundclass
{
public:
    static soundclass* getinstance() {
        if (!instance) {
            instance = new soundclass;
        }
        instance->call_function();
        return instance;
    }

    void call_function()
    {
        initilisation();

    }
    ~soundclass();
    void addmusic(const char* path);
    void addeffects(const char* path);
    void playmusic(int num) const;
    void playeffects(int num) const;
    void delete_all();
    void play_cont_music(int num);
    void play_cont_effects(int num);




private:
    soundclass() {};
    void initilisation();
    static soundclass* instance;

    std::vector<Mix_Music*> music;
    std::vector<Mix_Chunk*> effects;
};


