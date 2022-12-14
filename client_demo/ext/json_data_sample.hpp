//
// Created by makleyston on 24/08/22.
//
#include <string>

namespace samples{

std::string json_device = R"JSON(
{
  "device_uuid":"111",
  "location":{
    "lat":"123",
    "lng":"321"
  }
}
)JSON";

std::string json_resource = R"JSON(
{
  "resource_uuid":"111",
  "services":[
    {
      "service_uuid":"123",
      "data":[
        {
          "tag":"data_tag_1",
          "value":""
        },
        {
          "tag":"data_tag_2",
          "value":""
        }
      ]
    }
  ]
}
)JSON";

std::string json_resource_data = R"JSON(
{
  "resource_uuid":"111",
  "services":[
    {
      "service_uuid":"123",
      "data":[
        {
          "tag":"data_tag_1",
          "value":"333"
        },
        {
          "tag":"data_tag_2",
          "value":"444"
        }
      ]
    }
  ]
}
)JSON";

}