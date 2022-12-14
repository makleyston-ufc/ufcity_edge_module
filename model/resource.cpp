//
// Created by makleyston on 07/07/22.
//

#include "resource.h"

namespace ufcity {

    resource::resource(std::string resource_uuid, std::unordered_map<std::string, std::unordered_map<std::string, std::string>> * map){
        this->resource_uuid = std::move(resource_uuid);
        this->services_uuid_map = map;
    }

    std::string resource::get_device_uuid() const{
        return this->device_uuid;
    }

    std::string resource::get_resource_uuid() const{
        return this->resource_uuid;
    }

    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> * resource::get_services(){
        return this->services_uuid_map;
    }

    std::unordered_map<std::string, std::string> * resource::get_service_by_uuid(const std::string& uuid) {
//        auto it = this->services_uuid_map->find(uuid);
//        if (it != this->services_uuid_map->end()) {
//            std::unordered_map<std::string, std::string> s = it->second;
//            return &s;
//        }
//        else
            return nullptr;
    }

} // ufcity