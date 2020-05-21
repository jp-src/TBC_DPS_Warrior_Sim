#ifndef WOW_SIMULATOR_DAMAGE_SOURCES_HPP
#define WOW_SIMULATOR_DAMAGE_SOURCES_HPP

#include <vector>
#include <string>
#include "Statistics.hpp"

enum class Damage_source
{
    white_mh,
    white_oh,
    bloodthirst,
    execute,
    heroic_strike,
    whirlwind,
    item_hit_effects
};

struct Damage_sources
{
    Damage_sources() = default;

    Damage_sources &operator+(const Damage_sources &rhs)
    {
        whirlwind_damage = whirlwind_damage + rhs.whirlwind_damage;
        bloodthirst_damage = bloodthirst_damage + rhs.bloodthirst_damage;
        execute_damage = execute_damage + rhs.execute_damage;
        white_mh_damage = white_mh_damage + rhs.white_mh_damage;
        white_oh_damage = white_oh_damage + rhs.white_oh_damage;
        heroic_strike_damage = heroic_strike_damage + rhs.heroic_strike_damage;
        item_hit_effects_damage = item_hit_effects_damage + rhs.item_hit_effects_damage;

        whirlwind_count = whirlwind_count + rhs.whirlwind_count;
        bloodthirst_count = bloodthirst_count + rhs.bloodthirst_count;
        execute_count = execute_count + rhs.execute_count;
        white_mh_count = white_mh_count + rhs.white_mh_count;
        white_oh_count = white_oh_count + rhs.white_oh_count;
        heroic_strike_count = heroic_strike_count + rhs.heroic_strike_count;
        item_hit_effects_count = item_hit_effects_count + rhs.item_hit_effects_count;
        return *(this);
    }

    constexpr double sum_damage_sources() const
    {
        return white_mh_damage + white_oh_damage + bloodthirst_damage + heroic_strike_damage + whirlwind_damage + execute_damage + item_hit_effects_damage;
    }

    constexpr double sum_counts() const
    {
        return white_mh_count + white_oh_count + bloodthirst_count + heroic_strike_count + whirlwind_count + execute_count + item_hit_effects_count;
    }

    void add_damage(Damage_source source, double damage)
    {
        switch (source)
        {
            case Damage_source::white_mh:
                white_mh_damage += damage;
                white_mh_count++;
                break;
            case Damage_source::white_oh:
                white_oh_damage += damage;
                white_oh_count++;
                break;
            case Damage_source::bloodthirst:
                bloodthirst_damage += damage;
                bloodthirst_count++;
                break;
            case Damage_source::execute:
                execute_damage += damage;
                execute_count++;
                break;
            case Damage_source::heroic_strike:
                heroic_strike_damage += damage;
                heroic_strike_count++;
                break;
            case Damage_source::whirlwind:
                whirlwind_damage += damage;
                whirlwind_count++;
                break;
            case Damage_source::item_hit_effects:
                item_hit_effects_damage += damage;
                item_hit_effects_count++;
                break;
        }
    }

    double white_mh_damage{};
    double white_oh_damage{};
    double bloodthirst_damage{};
    double execute_damage{};
    double heroic_strike_damage{};
    double whirlwind_damage{};
    double item_hit_effects_damage{};

    long int white_mh_count{};
    long int white_oh_count{};
    long int bloodthirst_count{};
    long int execute_count{};
    long int heroic_strike_count{};
    long int whirlwind_count{};
    long int item_hit_effects_count{};
};

void print_damage_sources(const std::string &source_name, double source_percent,
                          double source_std, double source_count, double avg_value);

void print_damage_source_vector(const std::vector<Damage_sources> &damage_sources_vector);

#include "damage_sources.tcc"

#endif //WOW_SIMULATOR_DAMAGE_SOURCES_HPP