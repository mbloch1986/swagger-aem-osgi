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
/*
 * OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties_H_
#define OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties();
    virtual ~OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPath() const;
    void setPath(ConfigNodePropertyString const& value);
    bool pathIsSet() const;
    void unsetPath();

protected:
    ConfigNodePropertyString m_Path;
    bool m_PathIsSet;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties_H_ */
