#include "Character.hpp"

#include <iostream>

Character::Character(const Race& race, int level)
    : base_attributes{}, base_special_stats{}, total_attributes{}, total_special_stats{}, race{race}, level(level)
{
    base_special_stats = Special_stats{};
    base_special_stats.attack_power = 190;
    base_special_stats.critical_strike = 1.141;

    switch (race)
    {
    case Race::human:
        base_attributes = Attributes{145, 96};
        base_special_stats.sword_expertise = 5;
        base_special_stats.mace_expertise = 5;
        break;
    case Race::dwarf:
        base_attributes = Attributes{147, 92};
        break;
    case Race::night_elf:
        base_attributes = Attributes{142, 101};
        break;
    case Race::gnome:
        base_attributes = Attributes{140, 99};
        break;
    case Race::draenei:
        base_attributes = Attributes{146, 93};
        break;
    case Race::orc:
        base_attributes = Attributes{148, 93};
        base_special_stats.axe_expertise = 5;
        break;
    case Race::tauren:
        base_attributes = Attributes{150, 91};
        break;
    case Race::troll:
        base_attributes = Attributes{146, 98};
        break;
    case Race::undead:
        base_attributes = Attributes{144, 94};
        break;
    default:
        assert(false);
    }
}

Character character_setup(const Armory& armory, const std::string& race, const std::vector<std::string>& armor_vec,
                          const std::vector<std::string>& weapons_vec, const std::vector<std::string>& buffs_vec,
                          const std::vector<std::string>& talent_string, const std::vector<int>& talent_val,
                          const std::vector<std::string>& ench_vec, const std::vector<std::string>& gem_vec)
{
    auto character = get_character_of_race(race);

    character.equip_armor(armory.find_armor(Socket::head, armor_vec[0]));
    character.equip_armor(armory.find_armor(Socket::neck, armor_vec[1]));
    character.equip_armor(armory.find_armor(Socket::shoulder, armor_vec[2]));
    character.equip_armor(armory.find_armor(Socket::back, armor_vec[3]));
    character.equip_armor(armory.find_armor(Socket::chest, armor_vec[4]));
    character.equip_armor(armory.find_armor(Socket::wrist, armor_vec[5]));
    character.equip_armor(armory.find_armor(Socket::hands, armor_vec[6]));
    character.equip_armor(armory.find_armor(Socket::belt, armor_vec[7]));
    character.equip_armor(armory.find_armor(Socket::legs, armor_vec[8]));
    character.equip_armor(armory.find_armor(Socket::boots, armor_vec[9]));
    character.equip_armor(armory.find_armor(Socket::ring, armor_vec[10]));
    character.equip_armor(armory.find_armor(Socket::ring, armor_vec[11]));
    character.equip_armor(armory.find_armor(Socket::trinket, armor_vec[12]));
    character.equip_armor(armory.find_armor(Socket::trinket, armor_vec[13]));
    character.equip_armor(armory.find_armor(Socket::ranged, armor_vec[14]));

    if (weapons_vec.size() > 1)
    {
        character.equip_weapon(armory.find_weapon(Weapon_socket::one_hand, weapons_vec[0]),
                               armory.find_weapon(Weapon_socket::one_hand, weapons_vec[1]));
    }
    else
    {
        character.equip_weapon(armory.find_weapon(Weapon_socket::two_hand, weapons_vec[0]));
    }

    Armory::add_enchants_to_character(character, ench_vec);
    armory.add_gems_to_character(character, gem_vec);
    armory.add_buffs_to_character(character, buffs_vec);
    Armory::add_talents_to_character(character, talent_string, talent_val);

    armory.compute_total_stats(character);

    return character;
}

std::ostream& operator<<(std::ostream& os, const Race& race)
{
    switch (race)
    {
    case Race::human:
        return os << "human";
    case Race::dwarf:
        return os << "dwarf";
    case Race::night_elf:
        return os << "night_elf";
    case Race::gnome:
        return os << "gnome";
    case Race::draenei:
        return os << "draenei";
    case Race::orc:
        return os << "orc";
    case Race::tauren:
        return os << "tauren";
    case Race::troll:
        return os << "troll";
    case Race::undead:
        return os << "undead";
    default:
        return os;
    }
}

std::ostream& operator<<(std::ostream& os, const Character& character)
{
    os << "Character items: <br>";
    for (const auto& item : character.armor)
    {
        os << item.name << "<br>";
    }
    os << "Main hand:<br>";
    os << character.weapons[0].name << "<br>";
    if (character.is_dual_wield())
    {
        os << "Off hand:<br>";
        os << character.weapons[1].name << "<br>";
    }
    return os;
}

Race get_race(const std::string& race)
{
    if (race == "human")
    {
        return Race::human;
    }
    else if (race == "gnome")
    {
        return Race::gnome;
    }
    else if (race == "dwarf")
    {
        return Race::dwarf;
    }
    else if (race == "night_elf")
    {
        return Race::night_elf;
    }
    else if (race == "draenei")
    {
        return Race::draenei;
    }
    else if (race == "orc")
    {
        return Race::orc;
    }
    else if (race == "troll")
    {
        return Race::troll;
    }
    else if (race == "undead")
    {
        return Race::undead;
    }
    else if (race == "tauren")
    {
        return Race::tauren;
    }
    else
    {
        std::cerr << "Race not found!!! picking human" << "\n";
        return Race::human;
    }
}

Character get_character_of_race(const std::string& race)
{
    if (race == "human")
    {
        return {Race::human, 70};
    }
    else if (race == "gnome")
    {
        return {Race::gnome, 70};
    }
    else if (race == "dwarf")
    {
        return {Race::dwarf, 70};
    }
    else if (race == "night_elf")
    {
        return {Race::night_elf, 70};
    }
    else if (race == "draenei")
    {
        return {Race::draenei, 70};
    }
    else if (race == "orc")
    {
        return {Race::orc, 70};
    }
    else if (race == "troll")
    {
        return {Race::troll, 70};
    }
    else if (race == "undead")
    {
        return {Race::undead, 70};
    }
    else if (race == "tauren")
    {
        return {Race::tauren, 70};
    }
    else
    {
        std::cerr << "Race not found!!! picking human" << "\n";
        return {Race::human, 70};
    }
}