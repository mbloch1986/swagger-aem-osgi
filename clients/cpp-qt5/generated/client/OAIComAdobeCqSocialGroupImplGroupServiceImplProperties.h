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

#ifndef OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H_
#define OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialGroupImplGroupServiceImplProperties: public OAIObject {
public:
    OAIComAdobeCqSocialGroupImplGroupServiceImplProperties();
    OAIComAdobeCqSocialGroupImplGroupServiceImplProperties(QString json);
    ~OAIComAdobeCqSocialGroupImplGroupServiceImplProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialGroupImplGroupServiceImplProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getMaxWaitTime();
    void setMaxWaitTime(OAIConfigNodePropertyInteger* max_wait_time);

    OAIConfigNodePropertyInteger* getMinWaitBetweenRetries();
    void setMinWaitBetweenRetries(OAIConfigNodePropertyInteger* min_wait_between_retries);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* max_wait_time;
    bool m_max_wait_time_isSet;

    OAIConfigNodePropertyInteger* min_wait_between_retries;
    bool m_min_wait_between_retries_isSet;

};

}

#endif /* OAIComAdobeCqSocialGroupImplGroupServiceImplProperties_H_ */