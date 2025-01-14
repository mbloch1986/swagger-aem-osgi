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
 * OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties_H
#define OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties_H

#include <QJsonObject>


#include "OAIConfigNodePropertyArray.h"
#include "OAIConfigNodePropertyBoolean.h"
#include "OAIConfigNodePropertyString.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties: public OAIObject {
public:
    OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties();
    OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties(QString json);
    ~OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIConfigNodePropertyString getLinkExpiredPrefix() const;
    void setLinkExpiredPrefix(const OAIConfigNodePropertyString &link_expired_prefix);

    OAIConfigNodePropertyBoolean getLinkExpiredRemove() const;
    void setLinkExpiredRemove(const OAIConfigNodePropertyBoolean &link_expired_remove);

    OAIConfigNodePropertyString getLinkExpiredSuffix() const;
    void setLinkExpiredSuffix(const OAIConfigNodePropertyString &link_expired_suffix);

    OAIConfigNodePropertyString getLinkInvalidPrefix() const;
    void setLinkInvalidPrefix(const OAIConfigNodePropertyString &link_invalid_prefix);

    OAIConfigNodePropertyBoolean getLinkInvalidRemove() const;
    void setLinkInvalidRemove(const OAIConfigNodePropertyBoolean &link_invalid_remove);

    OAIConfigNodePropertyString getLinkInvalidSuffix() const;
    void setLinkInvalidSuffix(const OAIConfigNodePropertyString &link_invalid_suffix);

    OAIConfigNodePropertyString getLinkPredatedPrefix() const;
    void setLinkPredatedPrefix(const OAIConfigNodePropertyString &link_predated_prefix);

    OAIConfigNodePropertyBoolean getLinkPredatedRemove() const;
    void setLinkPredatedRemove(const OAIConfigNodePropertyBoolean &link_predated_remove);

    OAIConfigNodePropertyString getLinkPredatedSuffix() const;
    void setLinkPredatedSuffix(const OAIConfigNodePropertyString &link_predated_suffix);

    OAIConfigNodePropertyArray getLinkWcmmodes() const;
    void setLinkWcmmodes(const OAIConfigNodePropertyArray &link_wcmmodes);

    virtual bool isSet() const override;

private:
    OAIConfigNodePropertyString link_expired_prefix;
    bool m_link_expired_prefix_isSet;

    OAIConfigNodePropertyBoolean link_expired_remove;
    bool m_link_expired_remove_isSet;

    OAIConfigNodePropertyString link_expired_suffix;
    bool m_link_expired_suffix_isSet;

    OAIConfigNodePropertyString link_invalid_prefix;
    bool m_link_invalid_prefix_isSet;

    OAIConfigNodePropertyBoolean link_invalid_remove;
    bool m_link_invalid_remove_isSet;

    OAIConfigNodePropertyString link_invalid_suffix;
    bool m_link_invalid_suffix_isSet;

    OAIConfigNodePropertyString link_predated_prefix;
    bool m_link_predated_prefix_isSet;

    OAIConfigNodePropertyBoolean link_predated_remove;
    bool m_link_predated_remove_isSet;

    OAIConfigNodePropertyString link_predated_suffix;
    bool m_link_predated_suffix_isSet;

    OAIConfigNodePropertyArray link_wcmmodes;
    bool m_link_wcmmodes_isSet;

};

}

#endif // OAIComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties_H
