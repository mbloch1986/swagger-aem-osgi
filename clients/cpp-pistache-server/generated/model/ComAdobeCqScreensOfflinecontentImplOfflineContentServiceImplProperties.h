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
 * ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_
#define ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties
    : public ModelBase
{
public:
    ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties();
    virtual ~ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDisableSmartSync() const;
    void setDisableSmartSync(ConfigNodePropertyBoolean const& value);
    bool disableSmartSyncIsSet() const;
    void unsetDisableSmartSync();

protected:
    ConfigNodePropertyBoolean m_DisableSmartSync;
    bool m_DisableSmartSyncIsSet;
};

}
}
}
}

#endif /* ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties_H_ */
