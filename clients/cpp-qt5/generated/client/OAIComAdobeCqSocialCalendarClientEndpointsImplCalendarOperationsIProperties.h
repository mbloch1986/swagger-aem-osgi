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
 * OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.h
 *
 * 
 */

#ifndef OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties_H_
#define OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyInteger.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties: public OAIObject {
public:
    OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties();
    OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties(QString json);
    ~OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyInteger* getMaxRetry();
    void setMaxRetry(OAIConfigNodePropertyInteger* max_retry);

    OAIConfigNodePropertyArray* getFieldWhitelist();
    void setFieldWhitelist(OAIConfigNodePropertyArray* field_whitelist);

    OAIConfigNodePropertyArray* getAttachmentTypeBlacklist();
    void setAttachmentTypeBlacklist(OAIConfigNodePropertyArray* attachment_type_blacklist);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyInteger* max_retry;
    bool m_max_retry_isSet;

    OAIConfigNodePropertyArray* field_whitelist;
    bool m_field_whitelist_isSet;

    OAIConfigNodePropertyArray* attachment_type_blacklist;
    bool m_attachment_type_blacklist_isSet;

};

}

#endif /* OAIComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties_H_ */
