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
 * OAIComAdobeCqSocialGroupImplGroupServiceImplProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H
#define OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialGroupImplGroupServiceImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialGroupImplGroupServiceImplProperties();
    OAIComAdobeCqSocialGroupImplGroupServiceImplProperties(QString json);
    ~OAIComAdobeCqSocialGroupImplGroupServiceImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger getMaxWaitTime() const;
    void setMaxWaitTime(const OAIConfigNodePropertyInteger &max_wait_time);

    OAIConfigNodePropertyInteger getMinWaitBetweenRetries() const;
    void setMinWaitBetweenRetries(const OAIConfigNodePropertyInteger &min_wait_between_retries);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyInteger max_wait_time;
    bool m_max_wait_time_isSet;

    OAIConfigNodePropertyInteger min_wait_between_retries;
    bool m_min_wait_between_retries_isSet;

};

}

#endif // OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H