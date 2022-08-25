//
// Created by makleyston on 25/08/22.
//

#include "resources_map.h"

namespace ufcity_db {

    resources_map::resources_map() {
        this->map = new std::unordered_map<std::string, std::string>();
    }
    resources_map * resources_map::instance = 0;
    resources_map * resources_map::get_instance(){
        if (instance == 0){
            instance = new resources_map();
        }
        return instance;
    }

    bool resources_map::find_resource_by_uuid(std::string uuid) const{
        auto it = this->map->find(uuid);
        if (it != this->map->end()) return true; //std::cout << it->first << ": " << it->second << "\n";
        else return false;
    }

    std::string resources_map::get_resource_by_uuid(std::string uuid) const{
        //TODO tem que ajustar com o tipo de dados a ser armazenado no futuro
        auto it = this->map->find(uuid);
        if (it != this->map->end()) return it->second;
        else return nullptr;
    }

    int resources_map::register_resource(std::string uuid, std::string semantic) const{
        this->map->insert(std::pair<std::string, std::string>(uuid, semantic));
        return 0; //OK
    }

    int resources_map::remove_resource(std::string uuid) const{
        //TODO
        return 0;
    }

} // ufcity_db