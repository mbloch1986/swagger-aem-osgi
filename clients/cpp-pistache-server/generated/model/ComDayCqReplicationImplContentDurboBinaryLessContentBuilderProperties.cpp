/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties()
{
    m_Binary_thresholdIsSet = false;
    
}

ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::~ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties()
{
}

void ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Binary_thresholdIsSet)
    {
        val["binary.threshold"] = ModelBase::toJson(m_Binary_threshold);
    }
    

    return val;
}

void ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::fromJson(nlohmann::json& val)
{
    if(val.find("binary.threshold") != val.end())
    {
        if(!val["binary.threshold"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["binary.threshold"]);
            setBinaryThreshold( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::getBinaryThreshold() const
{
    return m_Binary_threshold;
}
void ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::setBinaryThreshold(ConfigNodePropertyInteger const& value)
{
    m_Binary_threshold = value;
    m_Binary_thresholdIsSet = true;
}
bool ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::binaryThresholdIsSet() const
{
    return m_Binary_thresholdIsSet;
}
void ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties::unsetBinary_threshold()
{
    m_Binary_thresholdIsSet = false;
}

}
}
}
}
