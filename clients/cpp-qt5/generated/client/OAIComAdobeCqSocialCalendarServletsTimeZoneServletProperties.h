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
 * OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties_H_
#define OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties: public OAIObject {
public:
    OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties();
    OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties(QString json);
    ~OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getTimezonesExpirytime();
    void setTimezonesExpirytime(OAIConfigNodePropertyInteger* timezones_expirytime);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* timezones_expirytime;
    bool m_timezones_expirytime_isSet;

};

}

#endif /* OAIComAdobeCqSocialCalendarServletsTimeZoneServletProperties_H_ */
