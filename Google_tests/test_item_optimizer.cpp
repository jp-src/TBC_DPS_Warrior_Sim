#include "gtest/gtest.h"
//#include <Armory.hpp>
#include <Attributes.hpp>
//#include <Item_optimizer.hpp>
#include <Helper_functions.hpp>
#include <sim_input_mult.hpp>
//#include <sim_output_mult.hpp>

TEST(TestSuite, test_find_value_class)
{
    std::vector<std::string> mult_armor_vec;
    mult_armor_vec.emplace_back("lionheart_helm");
    mult_armor_vec.emplace_back("onyxia_tooth_pendant");
    mult_armor_vec.emplace_back("truestrike_shoulders");
    mult_armor_vec.emplace_back("cape_of_the_black_baron");
    mult_armor_vec.emplace_back("savage_gladiator_chain");
    mult_armor_vec.emplace_back("wristguards_of_stability");
    mult_armor_vec.emplace_back("flameguard_gauntlets");
    mult_armor_vec.emplace_back("onslaught_girdle");
    mult_armor_vec.emplace_back("cloudkeeper_legplates");
    mult_armor_vec.emplace_back("chromatic_boots");

    {
        std::vector<size_t> values{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        Find_values<size_t> fv(mult_armor_vec, values);
        EXPECT_TRUE(fv.find("lionheart_helm") == 0);
        EXPECT_TRUE(fv.find("onyxia_tooth_pendant") == 1);
        EXPECT_TRUE(fv.find("truestrike_shoulders") == 2);
        EXPECT_TRUE(fv.find("cape_of_the_black_baron") == 3);
        EXPECT_TRUE(fv.find("savage_gladiator_chain") == 4);
        EXPECT_TRUE(fv.find("wristguards_of_stability") == 5);
        EXPECT_TRUE(fv.find("flameguard_gauntlets") == 6);
        EXPECT_TRUE(fv.find("onslaught_girdle") == 7);
        EXPECT_TRUE(fv.find("cloudkeeper_legplates") == 8);
        EXPECT_TRUE(fv.find("chromatic_boots") == 9);
    }
    {
        std::vector<double> values{0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
        Find_values<double> fv(mult_armor_vec, values);
        EXPECT_TRUE(fv.find("lionheart_helm") == 0.0);
        EXPECT_TRUE(fv.find("onyxia_tooth_pendant") == 1.0);
        EXPECT_TRUE(fv.find("truestrike_shoulders") == 2.0);
        EXPECT_TRUE(fv.find("cape_of_the_black_baron") == 3.0);
        EXPECT_TRUE(fv.find("savage_gladiator_chain") == 4.0);
        EXPECT_TRUE(fv.find("wristguards_of_stability") == 5.0);
        EXPECT_TRUE(fv.find("flameguard_gauntlets") == 6.0);
        EXPECT_TRUE(fv.find("onslaught_girdle") == 7.0);
        EXPECT_TRUE(fv.find("cloudkeeper_legplates") == 8.0);
        EXPECT_TRUE(fv.find("chromatic_boots") == 9.0);
    }
}
//    std::vector<std::string> mult_armor_vec;
//    mult_armor_vec.emplace_back("lionheart_helm");
//    mult_armor_vec.emplace_back("onyxia_tooth_pendant");
//    mult_armor_vec.emplace_back("truestrike_shoulders");
//    mult_armor_vec.emplace_back("cape_of_the_black_baron");
//    mult_armor_vec.emplace_back("savage_gladiator_chain");
//    mult_armor_vec.emplace_back("wristguards_of_stability");
//    mult_armor_vec.emplace_back("flameguard_gauntlets");
//    mult_armor_vec.emplace_back("onslaught_girdle");
//    mult_armor_vec.emplace_back("cloudkeeper_legplates");
//    mult_armor_vec.emplace_back("chromatic_boots");
//    mult_armor_vec.emplace_back("might_of_cenarius");
//    mult_armor_vec.emplace_back("master_dragonslayers_ring");
//    mult_armor_vec.emplace_back("badge_of_the_swarmguard");
//    mult_armor_vec.emplace_back("diamond_flask");
//    mult_armor_vec.emplace_back("blastershot");
//
//    mult_armor_vec.emplace_back("expert_goldminers_head");
//    mult_armor_vec.emplace_back("mask_of_the_unforgiven");
//    mult_armor_vec.emplace_back("crown_of_destruction");
//    mult_armor_vec.emplace_back("helm_of_endless_rage");
//    mult_armor_vec.emplace_back("r13_plate_helm");
//    mult_armor_vec.emplace_back("eye_of_rend");
//    mult_armor_vec.emplace_back("fury_visor");
//    mult_armor_vec.emplace_back("helm_of_the_executioner");
//    mult_armor_vec.emplace_back("helm_of_valor");
//    mult_armor_vec.emplace_back("r10_commanders_plate_helm");
//    mult_armor_vec.emplace_back("circlet_of_restless_dreams");
//    mult_armor_vec.emplace_back("conquerors_crown");
//    mult_armor_vec.emplace_back("helm_of_domination");
//    mult_armor_vec.emplace_back("helm_of_heroism");
//
//    std::vector<std::string> mult_weapons_vec;
//    mult_weapons_vec.emplace_back("thunderfury_blessed_blade");
//    mult_weapons_vec.emplace_back("brutality_blade");
//
//    std::vector<std::string> buff_vec;
//    buff_vec.emplace_back("rallying_cry");
//    buff_vec.emplace_back("dire_maul");
//    buff_vec.emplace_back("songflower");
//    buff_vec.emplace_back("warchiefs_blessing");
//    buff_vec.emplace_back("spirit_of_zandalar");
//    buff_vec.emplace_back("sayges_fortune");
//    buff_vec.emplace_back("windfury_totem");
//    buff_vec.emplace_back("blessing_of_kings");
//    buff_vec.emplace_back("strength_of_earth_totem");
//    buff_vec.emplace_back("grace_of_air_totem");
//
//    std::vector<std::string> ench_vec;
//    ench_vec.emplace_back("e+8 strength");
//    ench_vec.emplace_back("s+30 attack power");
//    ench_vec.emplace_back("mcrusader");
//    ench_vec.emplace_back("ocrusader");
//
//    Special_stats special_stats{};
//    special_stats.critical_strike = 50;
//    special_stats.hit = 12;
//    special_stats.attack_power = 2500;
//    special_stats.chance_for_extra_hit = 0;
//    special_stats.haste = 0;
//    special_stats.sword_skill = 311;
//    special_stats.axe_skill = 311;
//    special_stats.dagger_skill = 311;
//    special_stats.mace_skill = 311;
//    special_stats.fist_skill = 311;
//    special_stats.damage_multiplier = 0.1;
//    special_stats.stat_multiplier = 0.265;
//    special_stats.bonus_damage = 10;
//
//    Buffs buffs{};
//    Item_optimizer item_optimizer;
//
//    Race race = Race::night_elf;
//    item_optimizer.race = race;
//    item_optimizer.buffs = buffs;
//    item_optimizer.buffs_vec = ench_vec;
//    item_optimizer.ench_vec = ench_vec;
//    item_optimizer.item_setup(mult_armor_vec, mult_weapons_vec);
//
//    std::cout << "init. Combinations: " << std::to_string(item_optimizer.total_combinations) << "\n";
//    std::string debug_message{};
//    if (item_optimizer.total_combinations > 200)
//    {
//        {
//            auto character = item_optimizer.construct(0);
//            item_optimizer.filter_weaker_items(character.total_special_stats, debug_message);
//            item_optimizer.filter_set_items(character.total_special_stats, debug_message);
//
//        }
//        item_optimizer.compute_combinations();
//        std::cout << "Item filter done. Combinations: " << std::to_string(item_optimizer.total_combinations) << "\n";
//    }
//}
//
////    mult_weapons_vec.emplace_back("persuader");
////    mult_weapons_vec.emplace_back("gressil_dawn_of_ruin");
////    mult_weapons_vec.emplace_back("iblis_blade_of_the_fallen_seraph");
////    mult_weapons_vec.emplace_back("the_hungering_cold");
////    mult_weapons_vec.emplace_back("widows_remorse");
////    mult_weapons_vec.emplace_back("hatchet_of_sundered_bone");
////    mult_weapons_vec.emplace_back("harbinger_of_doom");
////    mult_weapons_vec.emplace_back("kingsfall");
////    mult_weapons_vec.emplace_back("maexxnas_fang");
////    mult_weapons_vec.emplace_back("misplaced_servo_arm");
//
// std::vector<std::string> compare_armor_vec;
////    compare_armor_vec.emplace_back("lionheart_helm");
////    compare_armor_vec.emplace_back("onyxia_tooth_pendant");
////    compare_armor_vec.emplace_back("truestrike_shoulders");
////    compare_armor_vec.emplace_back("cape_of_the_black_baron");
////    compare_armor_vec.emplace_back("savage_gladiator_chain");
////    compare_armor_vec.emplace_back("wristguards_of_stability");
////    compare_armor_vec.emplace_back("flameguard_gauntlets");
////    compare_armor_vec.emplace_back("onslaught_girdle");
////    compare_armor_vec.emplace_back("cloudkeeper_legplates");
////    compare_armor_vec.emplace_back("chromatic_boots");
////    compare_armor_vec.emplace_back("might_of_cenarius");
////    compare_armor_vec.emplace_back("master_dragonslayers_ring");
////    compare_armor_vec.emplace_back("badge_of_the_swarmguard");
////    compare_armor_vec.emplace_back("diamond_flask");
////    compare_armor_vec.emplace_back("blastershot");
//
// std::vector<std::string> compare_weapons_vec;
////    compare_weapons_vec.emplace_back("thrash_blade");
////    compare_weapons_vec.emplace_back("assassination_blade");
//
// std::vector<std::string> mult_armor_vec;
////    mult_armor_vec.emplace_back("lionheart_helm");
////    mult_armor_vec.emplace_back("onyxia_tooth_pendant");
////    mult_armor_vec.emplace_back("truestrike_shoulders");
////    mult_armor_vec.emplace_back("cape_of_the_black_baron");
////    mult_armor_vec.emplace_back("savage_gladiator_chain");
////    mult_armor_vec.emplace_back("wristguards_of_stability");
////    mult_armor_vec.emplace_back("flameguard_gauntlets");
////    mult_armor_vec.emplace_back("onslaught_girdle");
////    mult_armor_vec.emplace_back("cloudkeeper_legplates");
////    mult_armor_vec.emplace_back("chromatic_boots");
////    mult_armor_vec.emplace_back("might_of_cenarius");
////    mult_armor_vec.emplace_back("master_dragonslayers_ring");
////    mult_armor_vec.emplace_back("badge_of_the_swarmguard");
////    mult_armor_vec.emplace_back("diamond_flask");
////    mult_armor_vec.emplace_back("blastershot");
//
// mult_armor_vec.emplace_back("lionheart_helm");
// mult_armor_vec.emplace_back("expert_goldminers_head");
// mult_armor_vec.emplace_back("mask_of_the_unforgiven");
// mult_armor_vec.emplace_back("crown_of_destruction");
// mult_armor_vec.emplace_back("helm_of_endless_rage");
// mult_armor_vec.emplace_back("r13_plate_helm");
// mult_armor_vec.emplace_back("eye_of_rend");
// mult_armor_vec.emplace_back("fury_visor");
// mult_armor_vec.emplace_back("helm_of_the_executioner");
// mult_armor_vec.emplace_back("helm_of_valor");
// mult_armor_vec.emplace_back("r10_commanders_plate_helm");
// mult_armor_vec.emplace_back("circlet_of_restless_dreams");
// mult_armor_vec.emplace_back("conquerors_crown");
// mult_armor_vec.emplace_back("helm_of_domination");
// mult_armor_vec.emplace_back("helm_of_heroism");
//
// mult_armor_vec.emplace_back("onyxia_tooth_pendant");
// mult_armor_vec.emplace_back("prestors_talisman_of_connivery");
// mult_armor_vec.emplace_back("barbed_choker");
// mult_armor_vec.emplace_back("the_eye_of_hakkar");
// mult_armor_vec.emplace_back("mark_of_fordring");
// mult_armor_vec.emplace_back("amulet_of_the_darkmoon");
// mult_armor_vec.emplace_back("imperial_jewel");
// mult_armor_vec.emplace_back("beads_of_ogre_might");
// mult_armor_vec.emplace_back("choker_of_the_shifting_sands");
// mult_armor_vec.emplace_back("fury_of_the_forgotten_swarm");
//
////    mult_armor_vec.emplace_back("black_dragonscale_shoulders");
////    mult_armor_vec.emplace_back("truestrike_shoulders");
////    mult_armor_vec.emplace_back("wyrmhide_spaulders");
////    mult_armor_vec.emplace_back("drake_talon_pauldrons");
////    mult_armor_vec.emplace_back("r10_commanders_plate_shoulders");
////    mult_armor_vec.emplace_back("spaulders_of_valor");
////    mult_armor_vec.emplace_back("chitinous_shoulderguards");
// mult_armor_vec.emplace_back("mantle_of_wicked_revenge");
// mult_armor_vec.emplace_back("conquerors_spaulders");
////    mult_armor_vec.emplace_back("r13_plate_shoulderguards");
////    mult_armor_vec.emplace_back("razorsteel_shoulders");
////    mult_armor_vec.emplace_back("flamescarred_shoulders");
////    mult_armor_vec.emplace_back("abyssal_plate_epaulets");
////    mult_armor_vec.emplace_back("bloadsoaked_pauldrons");
////    mult_armor_vec.emplace_back("pauldrons_of_the_unrelenting");
////    mult_armor_vec.emplace_back("spaulders_of_heroism");
////    mult_armor_vec.emplace_back("defilers_plate_spaulders");
//
// mult_armor_vec.emplace_back("malfurions_blessed_bulwark");
// mult_armor_vec.emplace_back("savage_gladiator_chain");
// mult_armor_vec.emplace_back("r8_plate_hauberk");
// mult_armor_vec.emplace_back("tombstone_breastplate");
// mult_armor_vec.emplace_back("deathdealer_breastplate");
// mult_armor_vec.emplace_back("cadaverous_armor");
// mult_armor_vec.emplace_back("breastplate_of_annihilation");
// mult_armor_vec.emplace_back("vest_of_swift_execution");
// mult_armor_vec.emplace_back("conquerors_breastplate");
// mult_armor_vec.emplace_back("black_dragonscale_chest");
// mult_armor_vec.emplace_back("breastplate_of_bloodthirst");
// mult_armor_vec.emplace_back("runed_bloodstaind_hauberk");
// mult_armor_vec.emplace_back("ogre_forged_hauberk");
// mult_armor_vec.emplace_back("breastplate_of_the_chromatic_flight");
// mult_armor_vec.emplace_back("breastplate_of_valor");
// mult_armor_vec.emplace_back("r13_plate_armor");
// mult_armor_vec.emplace_back("bloodsoul_breastplate");
// mult_armor_vec.emplace_back("zandalar_vindicators_breastplate");
// mult_armor_vec.emplace_back("obsidian_mail_tunic");
// mult_armor_vec.emplace_back("breastplate_of_heroism");
//
// mult_armor_vec.emplace_back("cape_of_the_black_baron");
// mult_armor_vec.emplace_back("cloak_of_firemaw");
// mult_armor_vec.emplace_back("cloak_of_draconic_might");
// mult_armor_vec.emplace_back("cloak_of_concentrated_hate");
// mult_armor_vec.emplace_back("blackveil_cloak");
// mult_armor_vec.emplace_back("puissant_cape");
// mult_armor_vec.emplace_back("cloak_of_the_shrouded_mists");
// mult_armor_vec.emplace_back("stoneskin_gargoyle_cape");
// mult_armor_vec.emplace_back("deathguards_cloak");
// mult_armor_vec.emplace_back("windshear_cape");
// mult_armor_vec.emplace_back("zulian_tigerhide_cloak");
// mult_armor_vec.emplace_back("cloak_of_the_fallen_god");
// mult_armor_vec.emplace_back("cloak_of_the_golden_hive");
// mult_armor_vec.emplace_back("drake_of_unyielding_strength");
//
// mult_armor_vec.emplace_back("devilsaur_gauntlets");
// mult_armor_vec.emplace_back("edgemasters_handguards");
// mult_armor_vec.emplace_back("flameguard_gauntlets");
// mult_armor_vec.emplace_back("gloves_of_enforcement");
// mult_armor_vec.emplace_back("aged_core_leather_gloves");
// mult_armor_vec.emplace_back("gauntlets_of_annihilation");
// mult_armor_vec.emplace_back("bloodmail_gauntlets");
// mult_armor_vec.emplace_back("sacrificial_gauntlets");
// mult_armor_vec.emplace_back("r12_plate_gauntlets");
// mult_armor_vec.emplace_back("gauntlets_of_might");
// mult_armor_vec.emplace_back("reiver_claws");
// mult_armor_vec.emplace_back("gauntlets_of_valor");
// mult_armor_vec.emplace_back("r7_plate_gauntlets");
// mult_armor_vec.emplace_back("gauntlets_of_heroism");
// mult_armor_vec.emplace_back("gloves_of_enforcement");
//
// mult_armor_vec.emplace_back("onslaught_girdle");
// mult_armor_vec.emplace_back("mugglers_belt");
// mult_armor_vec.emplace_back("omokks_girth_restrainer");
// mult_armor_vec.emplace_back("brigam_girdle");
// mult_armor_vec.emplace_back("zandalar_vindicators_belt");
// mult_armor_vec.emplace_back("therazanes_link");
// mult_armor_vec.emplace_back("girdle_of_the_fallen_crusader");
// mult_armor_vec.emplace_back("defilers_plate_girdle");
// mult_armor_vec.emplace_back("frostwolf_plate_belt");
// mult_armor_vec.emplace_back("belt_of_heroism");
// mult_armor_vec.emplace_back("belt_of_never_ending_agony");
// mult_armor_vec.emplace_back("triad_girdle");
//
// mult_armor_vec.emplace_back("wristguards_of_stability");
// mult_armor_vec.emplace_back("vambraces_of_the_sadist");
// mult_armor_vec.emplace_back("wristguards_of_true_flight");
// mult_armor_vec.emplace_back("battleborn_armbraces");
// mult_armor_vec.emplace_back("zandalar_armguards");
// mult_armor_vec.emplace_back("blinkstrike");
// mult_armor_vec.emplace_back("bracers_of_brutality");
// mult_armor_vec.emplace_back("hive_defiler_wristguards");
// mult_armor_vec.emplace_back("qiraji_execution_bracers");
// mult_armor_vec.emplace_back("berserker_bracers");
// mult_armor_vec.emplace_back("abyssal_plate_vambraces");
// mult_armor_vec.emplace_back("bracers_of_heroism");
// mult_armor_vec.emplace_back("deeprock_bracers");
//
// mult_armor_vec.emplace_back("devilsaur_leggings");
// mult_armor_vec.emplace_back("black_dragonscale_leggings");
// mult_armor_vec.emplace_back("eldritch_legplates");
// mult_armor_vec.emplace_back("handcrafted_mastersmith_leggings");
// mult_armor_vec.emplace_back("cloudkeeper_legplates");
// mult_armor_vec.emplace_back("legguards_of_the_fallen_crusader");
// mult_armor_vec.emplace_back("r8_plate_leggings");
// mult_armor_vec.emplace_back("legplates_of_the_qiraji_command");
// mult_armor_vec.emplace_back("scaled_sand_reaver_leggings");
// mult_armor_vec.emplace_back("titanic_leggings");
// mult_armor_vec.emplace_back("bloodsoaked_legplates");
// mult_armor_vec.emplace_back("r12_plate_legguards");
// mult_armor_vec.emplace_back("blademaster_leggings");
// mult_armor_vec.emplace_back("legplates_of_valor");
// mult_armor_vec.emplace_back("abyssal_plate_legplates");
// mult_armor_vec.emplace_back("dark_heart_pants");
// mult_armor_vec.emplace_back("conquerors_legguards");
// mult_armor_vec.emplace_back("legplates_of_heroism");
//
// mult_armor_vec.emplace_back("windreaver_greaves");
// mult_armor_vec.emplace_back("bloodmail_boots");
// mult_armor_vec.emplace_back("black_dragonscale_boots");
// mult_armor_vec.emplace_back("r7_greaves");
// mult_armor_vec.emplace_back("battlechasers_greaves");
// mult_armor_vec.emplace_back("chromatic_boots");
// mult_armor_vec.emplace_back("boots_of_the_shadow_flame");
// mult_armor_vec.emplace_back("boots_of_the_vanguard");
// mult_armor_vec.emplace_back("r12_plate_boots");
// mult_armor_vec.emplace_back("sapphirons_scale_boots");
// mult_armor_vec.emplace_back("boots_of_heroism");
// mult_armor_vec.emplace_back("boots_of_the_fallen_hero");
// mult_armor_vec.emplace_back("boots_of_the_vanguard");
// mult_armor_vec.emplace_back("conquerors_greaves");
// mult_armor_vec.emplace_back("slime_kickers");
// mult_armor_vec.emplace_back("blooddrenched_footpads");
// mult_armor_vec.emplace_back("defilers_plate_greaves");
//
////        mult_armor_vec.emplace_back("don_julios_band");
////        mult_armor_vec.emplace_back("magnis_will");
// mult_armor_vec.emplace_back("quick_strike_ring");
////        mult_armor_vec.emplace_back("master_dragonslayers_ring");
// mult_armor_vec.emplace_back("circle_of_applied_force");
////    mult_armor_vec.emplace_back("blackstone_ring");
////    mult_armor_vec.emplace_back("tarnished_elven_ring");
////    mult_armor_vec.emplace_back("seal_of_the_gurubashi_berserker");
////    mult_armor_vec.emplace_back("band_of_accuria");
////    mult_armor_vec.emplace_back("band_of_the_ogre_king");
////    mult_armor_vec.emplace_back("painweaver_band");
////    mult_armor_vec.emplace_back("band_of_jin");
////    mult_armor_vec.emplace_back("seal_of_jin");
////    mult_armor_vec.emplace_back("band_of_earthen_might");
////    mult_armor_vec.emplace_back("might_of_cenarius");
////    mult_armor_vec.emplace_back("ring_of_the_god_slayer");
////    mult_armor_vec.emplace_back("ring_of_the_qiraji_fury");
////    mult_armor_vec.emplace_back("signet_of_unyielding_strength");
////    mult_armor_vec.emplace_back("signet_of_the_bronze_dragonflight");
//
// mult_armor_vec.emplace_back("satyrs_bow");
// mult_armor_vec.emplace_back("precisely_calibrated_boomstick");
// mult_armor_vec.emplace_back("dragonbreath_hand_cannon");
// mult_armor_vec.emplace_back("strikers_mark");
// mult_armor_vec.emplace_back("heartstriker");
// mult_armor_vec.emplace_back("blastershot");
// mult_armor_vec.emplace_back("dragonbreath_hand_cannon");
// mult_armor_vec.emplace_back("crossbow_of_imminent_doom");
// mult_armor_vec.emplace_back("larvae_of_the_great_worm");
// mult_armor_vec.emplace_back("bloodseeker");
// mult_armor_vec.emplace_back("riphook");
// mult_armor_vec.emplace_back("gurubashi_dwarf_destroyer");
// mult_armor_vec.emplace_back("huhurans_stinger");
//
////    mult_armor_vec.emplace_back("hand_of_justice");
////    mult_armor_vec.emplace_back("diamond_flask");
////    mult_armor_vec.emplace_back("blackhands_breadth");
////    mult_armor_vec.emplace_back("drake_fang_talisman");
////    mult_armor_vec.emplace_back("counterattack_lodestone");
////    mult_armor_vec.emplace_back("darkmoon_card_maelstrom");
////    mult_armor_vec.emplace_back("rune_of_the_guard_captain");
// mult_armor_vec.emplace_back("jom_gabbar");
////    mult_armor_vec.emplace_back("earthstrike");
// mult_armor_vec.emplace_back("badge_of_the_swarmguard");
//
// std::vector<std::string> mult_weapons_vec;
// mult_weapons_vec.emplace_back("thunderfury_blessed_blade");
// mult_weapons_vec.emplace_back("brutality_blade");
// mult_weapons_vec.emplace_back("maladath");
// mult_weapons_vec.emplace_back("chromatically_tempered_sword");
// mult_weapons_vec.emplace_back("brutality_blade");
// mult_weapons_vec.emplace_back("thrash_blade");
// mult_weapons_vec.emplace_back("assassination_blade");
// mult_weapons_vec.emplace_back("mirahs_song");
// mult_weapons_vec.emplace_back("viskag");
// mult_weapons_vec.emplace_back("quel_serrar");
// mult_weapons_vec.emplace_back("ancient_qiraji_ripper");
// mult_weapons_vec.emplace_back("dal_rends_sacred_charge");
// mult_weapons_vec.emplace_back("dal_rends_tribal_guardian");
// mult_weapons_vec.emplace_back("warblade_hakkari_mh");
// mult_weapons_vec.emplace_back("warblade_hakkari_oh");
// mult_weapons_vec.emplace_back("r14_swiftblade");
// mult_weapons_vec.emplace_back("r14_longsword");
// mult_weapons_vec.emplace_back("thunderfury_blessed_blade");
// mult_weapons_vec.emplace_back("teebus_blazing_longsword");
// mult_weapons_vec.emplace_back("protectors_sword");
// mult_weapons_vec.emplace_back("nightmare_blade");
// mult_weapons_vec.emplace_back("zulian_slicer");
// mult_weapons_vec.emplace_back("ravencrests_legacy");
// mult_weapons_vec.emplace_back("ravenholdt_slicer");
// mult_weapons_vec.emplace_back("blackguard");
// mult_weapons_vec.emplace_back("deathbringer");
// mult_weapons_vec.emplace_back("crul_shorukh_edge_of_chaos");
// mult_weapons_vec.emplace_back("dooms_edge");
// mult_weapons_vec.emplace_back("axe_of_the_deep_woods");
// mult_weapons_vec.emplace_back("ancient_hakkari_manslayer");
// mult_weapons_vec.emplace_back("r14_handaxe");
// mult_weapons_vec.emplace_back("frostbite");
// mult_weapons_vec.emplace_back("flurry_axe");
// mult_weapons_vec.emplace_back("bone_slicing_hatchet");
// mult_weapons_vec.emplace_back("zulian_hacker_of_strength");
// mult_weapons_vec.emplace_back("zulian_hacker_of_the_tiger");
// mult_weapons_vec.emplace_back("blessed_qiraji_war_axe");
// mult_weapons_vec.emplace_back("sickle_on_unyielding_strength");
// mult_weapons_vec.emplace_back("core_hound_tooth");
// mult_weapons_vec.emplace_back("deaths_sting");
// mult_weapons_vec.emplace_back("r14_dagger");
// mult_weapons_vec.emplace_back("dragonfang_blade");
// mult_weapons_vec.emplace_back("dragonfang_blade");
// mult_weapons_vec.emplace_back("perditions_blade");
// mult_weapons_vec.emplace_back("alcors_sunrazor");
// mult_weapons_vec.emplace_back("finkles_skinner");
// mult_weapons_vec.emplace_back("blessed_qiraji_pugio");
// mult_weapons_vec.emplace_back("fang_of_the_faceless");
// mult_weapons_vec.emplace_back("ebon_hand");
// mult_weapons_vec.emplace_back("spineshatter");
// mult_weapons_vec.emplace_back("stormstike_hammer");
// mult_weapons_vec.emplace_back("sand_polished_hammer");
// mult_weapons_vec.emplace_back("empyrean_demolisher");
// mult_weapons_vec.emplace_back("anubisath_warhammer");
// mult_weapons_vec.emplace_back("r14_mace");
// mult_weapons_vec.emplace_back("ironfoe");
// mult_weapons_vec.emplace_back("mass_of_mcgowan");
// mult_weapons_vec.emplace_back("sceptre_of_smiting");
// mult_weapons_vec.emplace_back("blessed_qiraji_warhammer");
// mult_weapons_vec.emplace_back("persuader");
// mult_weapons_vec.emplace_back("gressil_dawn_of_ruin");
// mult_weapons_vec.emplace_back("iblis_blade_of_the_fallen_seraph");
// mult_weapons_vec.emplace_back("the_hungering_cold");
// mult_weapons_vec.emplace_back("widows_remorse");
// mult_weapons_vec.emplace_back("hatchet_of_sundered_bone");
// mult_weapons_vec.emplace_back("harbinger_of_doom");
// mult_weapons_vec.emplace_back("kingsfall");
// mult_weapons_vec.emplace_back("maexxnas_fang");
// mult_weapons_vec.emplace_back("misplaced_servo_arm");
//
// std::vector<std::string> buff_vec;
// buff_vec.emplace_back("rallying_cry");
// buff_vec.emplace_back("dire_maul");
// buff_vec.emplace_back("songflower");
// buff_vec.emplace_back("warchiefs_blessing");
// buff_vec.emplace_back("spirit_of_zandalar");
// buff_vec.emplace_back("sayges_fortune");
// buff_vec.emplace_back("windfury_totem");
// buff_vec.emplace_back("blessing_of_kings");
////    buff_vec.emplace_back("strength_of_earth_totem");
////    buff_vec.emplace_back("grace_of_air_totem");
//
// std::vector<std::string> ench_vec;
// ench_vec.emplace_back("e+8 strength");
// ench_vec.emplace_back("s+30 attack power");
// ench_vec.emplace_back("mcrusader");
// ench_vec.emplace_back("ocrusader");
//
// std::string race = "orc";
//
// std::vector<std::string> sim_options = {
//    "faerie_fire",
//    "recklessness",
//    "enable_blood_fury",
//    "curse_of_recklessness",
//    "talents_stat_weights",
//    "golemagg",
//    "death_wish",
//    "mighty_rage_potion",
//    "debug_on",
//    "exposed_armor",
//    "talents_stat_weights",
//    //        "cleave_if_adds",
//    "use_hamstring",
//    //        "compute_dpr",
//    "use_bloodthirst",
//    "use_whirlwind",
//    "use_heroic_strike",
//    "use_hamstring",
//    "use_overpower",
//};
//
// std::vector<std::string> float_options_string{"heroic_strike_rage_thresh_dd",
//                                              "cleave_rage_thresh_dd",
//                                              "whirlwind_rage_thresh_dd",
//                                              "hamstring_cd_thresh_dd",
//                                              "hamstring_thresh_dd",
//                                              "initial_rage_dd",
//                                              "whirlwind_bt_cooldown_thresh_dd",
//                                              "overpower_rage_thresh_dd",
//                                              "overpower_bt_cooldown_thresh_dd",
//                                              "overpower_ww_cooldown_thresh_dd",
//                                              "fight_time_dd",
//                                              "opponent_level_dd",
//                                              "boss_armor_dd",
//                                              "sunder_armor_dd",
//                                              "number_of_extra_targets_dd",
//                                              "extra_target_armor_dd",
//                                              "extra_target_level_dd",
//                                              "periodic_damage_interval_dd",
//                                              "periodic_damage_amount_dd",
//                                              "execute_phase_percentage_dd",
//                                              "re_queue_abilities_dd",
//                                              "stat_weight_mh_speed_dd",
//                                              "stat_weight_oh_speed_dd",
//                                              "n_simulations_dd",
//                                              "n_simulations_stat_dd",
//                                              "n_simulations_talent_dd"};
//
// std::vector<double> float_options_val{50.0, 50.0, 10.0, 2.0, 50.0, 0.0, 2.0, 25.0, 2.0, 2.0, 60.0,  63.0, 3731,
//                                      5,    0,    3731, 63,  1.0,  300, 15,  70,   0.5, 0.5, 20000, 1000, 1000};
//
// Sim_input sim_input{{race},
//                    armor_vec,
//                    weapons_vec,
//                    buff_vec,
//                    ench_vec,
//                    {"mh_speed", "oh_speed"},
//                    sim_options,
//                    float_options_string,
//                    float_options_val,
//                    compare_armor_vec,
//                    compare_weapons_vec};
//
// Sim_input_mult sim_input_mult{
//    {race}, mult_armor_vec, mult_weapons_vec, buff_vec, ench_vec, sim_options, float_options_string,
//    float_options_val,
//};
//
// auto sim_output = sim_interface.simulate(sim_input);