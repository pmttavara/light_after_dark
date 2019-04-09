#define AMBIENT_FADE_MS 5000
#define NUM_ENEMY_VOCAL_CHANNELS 64

#define GUY_SPEED (85.0f * 1.0f)
#define GUY_ACCEL (GUY_SPEED * 10)
#define GUY_FRICTION 0.99999
#define GUY_HITBOX (rect(-6, -6, 12, 12))
#define GUY_COLOR (SDL_Color{0, 255, 255, 255})
#define GUY_STARTING_LIGHT 0.8f

#define GUY_TORCH_OFFSET_SIDE (v2(10, 28))
#define GUY_TORCH_OFFSET_UP (v2(6, 28))

#define GUY_ATTACK_WINDUP_TIME 0.22f
#define GUY_ATTACK_COOLDOWN_TIME 0.3f

#define GUY_STRIKE_DISTANCE 32.0f
#define GUY_STRIKE_STUN_TIME 0.15f

#define GUY_STUN_TIME 0.14f
#define GUY_STUN_TORCH_SHRINK_TIME 0.6f

#define GUY_MAX_LIGHT_RADIUS 90.0f

#define TORCH_MAX_LIGHT_RADIUS 70.0f

#define DASH_DISTANCE 96.0f
#define DASH_TIME 0.35f
#define DASH_SPEED (DASH_DISTANCE / DASH_TIME)
#define DASH_HURT_GUY_AMT 0.05f
#define DASH_IMPACT_DAMAGE 0.5f // Scales with speed as well. slower = weaker.
#define CAN_DASH_THRESHOLD (DASH_HURT_GUY_AMT * 2)
#define DASH_COOLDOWN_TIME 0.4f
#define DASH_FIRE_TIME 4.0f
#define DASH_FIRE_HURT_INTERVAL 1.0f
#define DASH_FIRE_HURT_STUN_TIME 0.1f

#define FIRE_PARTICLE_TIME 0.1f

#define DASH_PARTICLE_TIME (DASH_TIME / 6)


#define GOBLIN_HITBOX (rect(-8, -8, 16, 16))
#define GOBLIN_SPEED (GUY_SPEED * 1.05f)

// #define GOBLIN_ATTACK_WINDUP_TIME 0.15f
// #define GOBLIN_ATTACK_COOLDOWN_TIME 0.65f

#define GOBLIN_ATTACK_WINDUP_TIME 0.2f
#define GOBLIN_ATTACK_COOLDOWN_TIME 0.65f

#define GOBLIN_SWING_DISTANCE 24.0f

#define GOBLIN_STUN_TIME 1.2f

#define GOBLIN_HEALTH 4.0f

#define GOBLIN_DEATH_TIME 0.6f

#define GOBLIN_AGGRO_RADIUS (GUY_MAX_LIGHT_RADIUS * 0.9f)

#define GOBLIN_DAMAGE 0.1f
#define GOBLIN_STRIKE_RADIUS (GOBLIN_SWING_DISTANCE * 1.1f)

#define GOBLIN_STRIKE_REWARD 0.00f
#define GOBLIN_DEATH_REWARD 0.05f

#define SWARM_HITBOX (rect(-8, -8, 16, 16))
#define SWARM_SPEED (GUY_SPEED * 1.15f)

#define SWARM_ATTACK_WINDUP_TIME 0.2f
#define SWARM_ATTACK_COOLDOWN_TIME 0.3f

#define SWARM_SWING_DISTANCE 32.0f

#define SWARM_STUN_TIME 0.8f

#define SWARM_HEALTH 3.0f

#define SWARM_DEATH_TIME 0.45f

#define SWARM_AGGRO_RADIUS (2 / 3.0f) // This is actually the LIGHT LEVEL that will aggro the swarm.

#define SWARM_DAMAGE 0.03f
#define SWARM_STRIKE_RADIUS (SWARM_SWING_DISTANCE * 1.1f)

#define SWARM_STRIKE_REWARD 0.00f
#define SWARM_DEATH_REWARD 0.05f

#define SWARM_WAKE_UP_FRIENDS_RADIUS (150.0f)

#define TORCH_CHARGE_SPEED 0.075f
#define TORCH_DEAD_CHARGE_SPEED 0.02f
#define TORCH_MINIMUM_LIGHT_TO_CHARGE 0.25f
#define TORCH_CHARGE_RADIUS 48.0f
#define TORCH_CHARGE_PARTICLE_TIME 0.02f

// #define GUY_TORCH_COLOR SDL_Color{160, 160, 160, 160}
// #define GENERIC_FIRE_PARTICLE_COLOR SDL_Color{255, 160, 96, 128}
// #define TORCH_CHARGE_PARTICLE_COLOR SDL_Color{192, 160, 64, 128}
// #define TORCH_COLOR SDL_Color{255, 224, 192, 224}
// #define ENEMY_DEATH_LIGHT_COLOR SDL_Color{192, 255, 255, 224}
// #define ENEMY_DEATH_PARTICLE_COLOR SDL_Color{192, 255, 255, 192}
// #define WALL_HIT_PARTICLE_COLOR SDL_Color{255, 255, 224, 255}
// #define DASH_PARTICLE_COLOR SDL_Color{255, 160, 96, 224} // GENERIC_FIRE_PARTICLE_COLOR
// #define IMPACT_PARTICLE_COLOR SDL_Color{255, 255, 255, 192}

#define GUY_TORCH_COLOR SDL_Color{128, 128, 128, 255}
#define GENERIC_FIRE_PARTICLE_COLOR SDL_Color{160, 96, 0, 255}
#define TORCH_CHARGE_PARTICLE_COLOR SDL_Color{192, 140, 5, 255}
#define TORCH_COLOR SDL_Color{96, 64, 64, 255}
#define ENEMY_DEATH_LIGHT_COLOR SDL_Color{224, 224, 224, 255}
#define ENEMY_DEATH_PARTICLE_COLOR SDL_Color{160, 160, 192, 255}
#define WALL_HIT_PARTICLE_COLOR SDL_Color{212, 212, 255, 160}
#define DASH_PARTICLE_COLOR GENERIC_FIRE_PARTICLE_COLOR
#define DASH_IMPACT_PARTICLE_COLOR SDL_Color{255, 255, 255, 160}
#define ATTACK_IMPACT_PARTICLE_COLOR SDL_Color{255, 255, 255, 120}

// #define CREDITS_SCROLL_SPEED 0.0658 // in fraction of screen height per second
#define SFX_FIRE_LENGTH 3.0f