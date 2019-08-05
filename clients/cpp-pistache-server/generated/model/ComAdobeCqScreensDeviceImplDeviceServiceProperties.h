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
 * ComAdobeCqScreensDeviceImplDeviceServiceProperties.h
 *
 * 
 */

#ifndef ComAdobeCqScreensDeviceImplDeviceServiceProperties_H_
#define ComAdobeCqScreensDeviceImplDeviceServiceProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqScreensDeviceImplDeviceServiceProperties
    : public ModelBase
{
public:
    ComAdobeCqScreensDeviceImplDeviceServiceProperties();
    virtual ~ComAdobeCqScreensDeviceImplDeviceServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqScreensDeviceImplDeviceServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensPlayerPingfrequency() const;
    void setComAdobeAemScreensPlayerPingfrequency(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensPlayerPingfrequencyIsSet() const;
    void unsetCom_adobe_aem_screens_player_pingfrequency();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getComAdobeAemScreensDevicePaswordSpecialchars() const;
    void setComAdobeAemScreensDevicePaswordSpecialchars(ConfigNodePropertyString const& value);
    bool comAdobeAemScreensDevicePaswordSpecialcharsIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_specialchars();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinlowercasechars() const;
    void setComAdobeAemScreensDevicePaswordMinlowercasechars(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensDevicePaswordMinlowercasecharsIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_minlowercasechars();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinuppercasechars() const;
    void setComAdobeAemScreensDevicePaswordMinuppercasechars(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensDevicePaswordMinuppercasecharsIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_minuppercasechars();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinnumberchars() const;
    void setComAdobeAemScreensDevicePaswordMinnumberchars(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensDevicePaswordMinnumbercharsIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_minnumberchars();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinspecialchars() const;
    void setComAdobeAemScreensDevicePaswordMinspecialchars(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensDevicePaswordMinspecialcharsIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_minspecialchars();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getComAdobeAemScreensDevicePaswordMinlength() const;
    void setComAdobeAemScreensDevicePaswordMinlength(ConfigNodePropertyInteger const& value);
    bool comAdobeAemScreensDevicePaswordMinlengthIsSet() const;
    void unsetCom_adobe_aem_screens_device_pasword_minlength();

protected:
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_player_pingfrequency;
    bool m_Com_adobe_aem_screens_player_pingfrequencyIsSet;
    ConfigNodePropertyString m_Com_adobe_aem_screens_device_pasword_specialchars;
    bool m_Com_adobe_aem_screens_device_pasword_specialcharsIsSet;
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_device_pasword_minlowercasechars;
    bool m_Com_adobe_aem_screens_device_pasword_minlowercasecharsIsSet;
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_device_pasword_minuppercasechars;
    bool m_Com_adobe_aem_screens_device_pasword_minuppercasecharsIsSet;
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_device_pasword_minnumberchars;
    bool m_Com_adobe_aem_screens_device_pasword_minnumbercharsIsSet;
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_device_pasword_minspecialchars;
    bool m_Com_adobe_aem_screens_device_pasword_minspecialcharsIsSet;
    ConfigNodePropertyInteger m_Com_adobe_aem_screens_device_pasword_minlength;
    bool m_Com_adobe_aem_screens_device_pasword_minlengthIsSet;
};

}
}
}
}

#endif /* ComAdobeCqScreensDeviceImplDeviceServiceProperties_H_ */