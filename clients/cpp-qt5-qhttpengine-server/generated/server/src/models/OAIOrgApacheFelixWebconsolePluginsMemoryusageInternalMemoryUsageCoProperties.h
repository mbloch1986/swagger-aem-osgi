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
 * OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties_H
#define OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties: public OAIObject {
public:
    OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties();
    OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties(QString json);
    ~OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getFelixMemoryusageDumpThreshold() const;
    void setFelixMemoryusageDumpThreshold(const OAIConfigNodePropertyInteger &felix_memoryusage_dump_threshold);

    OAIConfigNodePropertyInteger getFelixMemoryusageDumpInterval() const;
    void setFelixMemoryusageDumpInterval(const OAIConfigNodePropertyInteger &felix_memoryusage_dump_interval);

    OAIConfigNodePropertyString getFelixMemoryusageDumpLocation() const;
    void setFelixMemoryusageDumpLocation(const OAIConfigNodePropertyString &felix_memoryusage_dump_location);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger felix_memoryusage_dump_threshold;
    bool m_felix_memoryusage_dump_threshold_isSet;

    OAIConfigNodePropertyInteger felix_memoryusage_dump_interval;
    bool m_felix_memoryusage_dump_interval_isSet;

    OAIConfigNodePropertyString felix_memoryusage_dump_location;
    bool m_felix_memoryusage_dump_location_isSet;

};

}

#endif // OAIOrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties_H