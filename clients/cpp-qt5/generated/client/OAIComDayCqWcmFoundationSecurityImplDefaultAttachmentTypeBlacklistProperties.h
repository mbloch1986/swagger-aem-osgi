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
 * OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_
#define OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties: public OAIObject {
public:
    OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties();
    OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties(QString json);
    ~OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getDefaultAttachmentTypeBlacklist();
    void setDefaultAttachmentTypeBlacklist(OAIConfigNodePropertyArray* default_attachment_type_blacklist);

    OAIConfigNodePropertyArray* getBaselineAttachmentTypeBlacklist();
    void setBaselineAttachmentTypeBlacklist(OAIConfigNodePropertyArray* baseline_attachment_type_blacklist);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* default_attachment_type_blacklist;
    bool m_default_attachment_type_blacklist_isSet;

    OAIConfigNodePropertyArray* baseline_attachment_type_blacklist;
    bool m_baseline_attachment_type_blacklist_isSet;

};

}

#endif /* OAIComDayCqWcmFoundationSecurityImplDefaultAttachmentTypeBlacklistProperties_H_ */
