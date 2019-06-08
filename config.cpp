class CfgPatches 
{ 
    class My_Mod_Config 
    { 
        units[] = {"US_Militia";}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class local_militia 
    { 
        displayName = "US Local Militias"; 
        priority = 3; // Position in list. 
        side = 2; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgUnitInsignia
{
    class Custom_Insignia
    {
        displayName = "Militia Patch"; // Name displayed in Arsenal
        author = "charlie"; // Author displayed in Arsenal
        texture = "\US_Militia\UI\militia_patch_co.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
}; 

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class B_Soldier_F; 
    
    class Custom_Uniform: B_soldier_F {
        author = "charlie"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Rifleman"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "local_militia";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO 
        uniformClass = "mc_mp"; // FIX and below
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"us_militia\Data\mc_mp_co.paa"};
        hiddenSelectionsMaterials[] = {"us_militia\Data\mc_mp.rvmat"};  
         weapons[] = {"CUP_arifle_M4A1","Throw","Put"}; 
        respawnWeapons[] = {"CUP_arifle_M4A1","Throw","Put"}; 	
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"H_Cap_grn","CUP_V_O_SLA_M23_1_BRN","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; //cup shit on and below
        respawnLinkedItems[] = {"H_Cap_grn","CUP_V_O_SLA_M23_1_BRN","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class Custom_Uniform_SS: B_soldier_F {
        author = "Astartes"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Team Leader"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "mc_mp_SS"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"us_militia\Data\mc_mp_coco.paa"}; 
        hiddenSelectionsMaterials[] = {"us_militia\Data\mc_mp.rvmat"}; 
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet1","Custom_Vest2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet1","Custom_Vest2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class Custom_Uniform_TShirt: B_soldier_F {
        author = "Astartes"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Custom Combat Life Saver"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Custom_Faction";
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; //NATO Rolled Up Sleeves 
        uniformClass = "Custom_Camo_TShirt";
        backpack = "Custom_Backpack_Compact"; 
        hiddenSelections[] = {"Camo1","Camo2"}; 
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\tshirt_brown_co.paa","Custom_Uniform\Data\custom_camo_co.paa"}; 
        hiddenSelectionsMaterials[] = {"a3\characters_F\civil\data\c_cloth1.rvmat","Custom_Uniform\Data\custom_camo.rvmat"}; 
         weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
        magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
        respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"CUstom_Helmet2","Custom_Vest3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
        respawnLinkedItems[] = {"CUstom_Helmet2","Custom_Vest3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    };

    class B_AssaultPack_Base;
    
    class Custom_Backpack_Compact: B_AssaultPack_Base {
        scope = 2;
        displayName = "Custom Backpack Compact";
        picture = "";
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\pack_compact_co.paa"};
    };

    class LandVehicle;
    class B_G_Offroad_01_F;
    class B_G_Offroad_01_armed_F;
    class B_MRAP_01_F;
    class B_MRAP_01_HMG_F;
    class B_Heli_Light_01_F;
    class Custom_Offroad_F: B_G_Offroad_01_F
    {
        crew = "Custom_Uniform_TShirt";
        side = 1;
        scope = 2;
        faction = "Custom_Faction";
        displayName = "Custom Offroad 4x4";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\offroad_base_co.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        };  
    };
    class Custom_Offroad_HMG_F: B_G_Offroad_01_armed_F
    {
        side = 1;
        scope = 2;
        crew = "Custom_Uniform_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom Offroad 4x4 (HMG)";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\offroad_base_co.paa"};
        class EventHandlers
        {
            init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
        }; 
    };
    class Custom_Hunter_F: B_MRAP_01_F
    {
        side = 1;
        scope = 2;
        crew = "Custom_Uniform_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom M-ATV MRAP";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\hunter_base_co.paa","Custom_Uniform\Data\hunter_adds_co.paa"};
    };
    class Custom_Hunter_HMG_F: B_MRAP_01_HMG_F
    {
        side = 1;
        scope = 2;
        crew = "Custom_Uniform_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom M-ATV MRAP (HMG)";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\hunter_base_co.paa","Custom_Uniform\Data\hunter_adds_co.paa"};
    }; 
    class Custom_MH6: B_Heli_Light_01_F
    {
        side = 1;
        scope = 2;
        crew = "Custom_Uniform_TShirt";
        faction = "Custom_Faction";
        displayName = "Custom MH-6 Hummingbird";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\hummingbird_base_co.paa"};
    };
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    class ItemCore; 
    class UniformItem; 
    class Uniform_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 

    class Custom_Camo: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Custom_Uniform"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Custom_Camo_SS: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo (Rolled Sleeves)"; 
        picture = "-"; 
        model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Custom_Uniform_SS"; 
            containerClass = "Supply50"; 
            mass = 50; 
        }; 
    }; 
    class Custom_Camo_TShirt: Uniform_Base 
    { 
        scope = 2; 
        displayName = "Custom Camo (T-Shirt)"; 
        picture = "-"; 
        model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d"; 
        class ItemInfo : UniformItem { 
            uniformClass = "Custom_Uniform_TShirt"; 
            containerClass = "Supply30"; 
            mass = 35; 
        }; 
    }; 

    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class VestItem; 
    class Vest_Camo_Base: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
    class Custom_Vest1: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
    class Custom_Vest2: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier Lite"; 
        picture = "-"; 
        model = "A3\Characters_F\BLUFOR\equip_b_Vest02"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };
    class Custom_Vest3: Vest_Camo_Base 
    { 
        scope = 2; 
        displayName = "Custom Platecarrier Kerry"; 
        picture = "-"; 
        model = "A3\Charactrs_F_EPA\BLUFOR\equip_b_vest_kerry"; 
        hiddenSelections[] = {"Camo"}; 
        hiddenSelectionsTextures[] = {"Custom_Uniform\Data\custom_vest_co.paa"}; 
        class ItemInfo: VestItem 
        { 
            uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d"; 
            containerClass = "Supply120"; 
            mass = 80; 
            armor = "5"; 
            passThrough = 0.3; 
            hiddenSelections[] = {"camo"}; 
        }; 
    };

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    class H_HelmetB: ItemCore 
    { 
        class ItemInfo; 
    }; 
     
    class CUstom_Helmet1: H_HelmetB
    {
        displayName = "Custom ECH SF";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\Custom_Uniform\Data\custom_helmet_co.paa"};
        hiddenSelectionsMaterials[] = {"Custom_Uniform\Data\custom_helmet.rvmat"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
    class CUstom_Helmet2: H_HelmetB
    {
        displayName = "Custom ECH Lite";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\Custom_Uniform\Data\custom_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            mass = 15;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.3";
            passThrough = 0.75;
        };
    };
}; 