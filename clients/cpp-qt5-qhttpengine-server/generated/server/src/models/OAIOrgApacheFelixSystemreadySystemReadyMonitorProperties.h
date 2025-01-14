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
 * OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties.h
 *
 * 
 */

#ifndef OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties_H
#define OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties: public OAIObject {
public:
    OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties();
    OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties(QString json);
    ~OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getPollInterval() const;
    void setPollInterval(const OAIConfigNodePropertyInteger &poll_interval);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger poll_interval;
    bool m_poll_interval_isSet;

};

}

#endif // OAIOrgApacheFelixSystemreadySystemReadyMonitorProperties_H
