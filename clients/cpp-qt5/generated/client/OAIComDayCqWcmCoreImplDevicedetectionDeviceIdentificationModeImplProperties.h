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
 * OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties_H_
#define OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyBoolean.h"
#include "OAIOAIConfigNodePropertyDropDown.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties();
    OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties(QString json);
    ~OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyDropDown* getDimDefaultMode();
    void setDimDefaultMode(OAIConfigNodePropertyDropDown* dim_default_mode);

    OAIConfigNodePropertyBoolean* getDimAppcacheEnabled();
    void setDimAppcacheEnabled(OAIConfigNodePropertyBoolean* dim_appcache_enabled);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyDropDown* dim_default_mode;
    bool m_dim_default_mode_isSet;

    OAIConfigNodePropertyBoolean* dim_appcache_enabled;
    bool m_dim_appcache_enabled_isSet;

};

}

#endif /* OAIComDayCqWcmCoreImplDevicedetectionDeviceIdentificationModeImplProperties_H_ */