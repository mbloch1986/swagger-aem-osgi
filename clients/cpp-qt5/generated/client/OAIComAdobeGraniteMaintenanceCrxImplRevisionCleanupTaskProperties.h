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
 * OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties.h
 *
 * 
 */

#ifndef OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties_H_
#define OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties: public OAIObject {
public:
    OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties();
    OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties(QString json);
    ~OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getFullGcDays();
    void setFullGcDays(OAIConfigNodePropertyArray* full_gc_days);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* full_gc_days;
    bool m_full_gc_days_isSet;

};

}

#endif /* OAIComAdobeGraniteMaintenanceCrxImplRevisionCleanupTaskProperties_H_ */
