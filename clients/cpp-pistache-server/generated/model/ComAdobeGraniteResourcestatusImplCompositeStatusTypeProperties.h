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
 * ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties_H_
#define ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties
    : public ModelBase
{
public:
    ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties();
    virtual ~ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getName() const;
    void setName(ConfigNodePropertyString const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getTypes() const;
    void setTypes(ConfigNodePropertyArray const& value);
    bool typesIsSet() const;
    void unsetTypes();

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyArray m_Types;
    bool m_TypesIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteResourcestatusImplCompositeStatusTypeProperties_H_ */
